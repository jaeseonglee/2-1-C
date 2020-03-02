/*	실습 6 : infoStruct.c
	작성일 : 2019. 05. 22 ~ 05. 23
	작성자 : 20165153 이재성
	프로그램 설명 : 1. 5명의 정보를 저장할 수 있는 구조체 배열 선언 및 반복문을 통해 입력받고
					2. 5명의 정보를 총점, 평균을 포함하여 출력하고
					3. 입력과 출력, 총점과 평균을 함수로 이용하여 처리하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS		// scanf를 사용함에 있어 오류를 출력하지 않게함
#include <stdio.h>					// 전처리문
#define SIZE 5						// SIZE를 매크로 상수 5로 지정

typedef struct {	// typedef형 구조체
	char name[20];	// 문자열 멤버 선언, 이름을 가리킨다.
	int age;		// 정수형 멤버 선언, 나이를 가리킨다.
	int score[2];	// 중간과 기말 점수를 가리키는 정수형 배열 멤버 선언
}STUDENT;			// 구조체형 이름 STUDENT 선언을 끝으로 구조체 선언, 대문자로 쓰는 것에 유의, main함수 밖에서 선언됨

void getInfo(STUDENT* st);			// 정보를 입력받는 getInfo함수
void printInfo(STUDENT st);			// 정보를 출력하는 printInfo함수
int getTotal(STUDENT st);			// 총점을 계산하여 반환해주는 getTotal함수
double getAverage(STUDENT st);		// 평균을 계산하여 반환해주는 getAverage함수

int main(int argc, char* argv[]) {			// main함수
	STUDENT arr[SIZE] = { "", 0, 0  };		// 구조체 배열 선언 및 초기화
	int i;		// 반복문에서 사용할 변수

	for (i = 0; i < SIZE; i++) {	// 정보를 입력받기 위해 배열의 크기만큼 반복하는 반복문
		getInfo(&arr[i]);			// getInfo함수 호출로 구조체 배열마다 저장해구고, 배열의 주소를 전달해주어 main으로 접근할 수 있게 한다.
	}
	
	printf("이름\t나이\t중간\t기말\t총점\t평균\n");		// 입력받은 정보를 출력할 때 값을 확인하기 편하게 출력 

	for (i = 0; i < SIZE; i++) {	// 받은 정보를 출력하기 위해 배열의 크기만큼 반복하는 반복문
		printInfo(arr[i]);
	}

	printf("\n");	// 반복이 끝나면 줄바꿈
	
	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void getInfo(STUDENT* st) {		// 정보를 입력받는 getInfo함수, 구조체 포인터를 변수로 가진다.
	printf("이름을 입력해주세요 : ");		// 이름을 입력해달라고 출력
	scanf("%s", st->name);			// 입력받은 이름을 구조체 포인터를 통해 name에 저장, 즉 main에 구조체 배열에 접근하여 저장한다.
	//scanf_s("%s", st->name, 20);	scanf_s로 사용하면 나타낼 수 있는 형태
	printf("나이를 입력해주세요 : ");		// 나이를 입력해달라고 출력	
	scanf_s("%d", &st->age);			// 입력받은 나이를 구조체 포인터를 통해 age에 저장, 즉 main에 구조체 배열에 접근하여 저장
	printf("중간고사와 기말고사 점수를 입력해주세요 : ");	// 중간고사 점수와 기말고사 점수를 입력해달라고 출력
	scanf_s("%d %d", &st->score[0], &st->score[1]);		// 입력받은 두 정수를 구조체 포인터를 통해 저장 
														// (*st).name 과 st->name 은 같다.
}

void printInfo(STUDENT st) {			// 정보를 출력하는 printInfo함수, 구조체를 변수로 가진다.
	printf("%s\t", st.name);			// 매개변수로 받은 구조체의 각각의 멤버를 출력한다.
	printf("%d\t", st.age);
	printf("%d\t", st.score[0]);
	printf("%d\t", st.score[1]);
	printf("%d\t", getTotal(st));		// getTotal함수 호출로 총합을 출력한다.
	printf("%.2lf\n", getAverage(st));	// getAverage함수 호출로 평균을 출력한다, 소주점아래 2자리까지 출력위해 %.2lf사용
}

int getTotal(STUDENT st) {			// 총점을 계산하여 반환해주는 getTotal함수, 구조체를 변수로 갖는다.
	return st.score[0] + st.score[1];		// 구조체 멤버중 score의 두 index의 합을 반환한다.
}

double getAverage(STUDENT st) {		// 평균을 계산하여 반환해주는 getAverage함수, 구조체를 변수로 갖는다.
	return getTotal(st) / 2;		// getTotal함수 호출로 구조체 멤버 score의 총합을 얻고 2로 나누어 반환한다.
}