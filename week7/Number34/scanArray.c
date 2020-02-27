/*	실습 3,4 : scanArray.c
	작성일 : 2019. 04. 10 ~ 04.12
	작성자 : 2016153 이재성
	프로그램 설명 : 정수형 배열 10개에 사용잡로부터 값을 입력받아 초기화하고 출력하는 프로그램 (실습 3)
					배열에서 찾고자 하는 값을 입력받고 해당 인덱스값을 리턴하는 프로그램 추가(실습 4)
*/

#include <stdio.h>		// 전처리문
#define SIZE 10			// define문으로 매크로 상수 SIZE를 10으로 지정

void scanArr(int arr[]);		// 배열을 입력받는 scanArr함수
void printArray(int arr[]);			//	배열을 출력하는 printArray함수
int findArray(int arr[], int key);		// 실습4) 찾고자하는 값을 찾는 findArray함수

int main(int argc, char* argv[]) {		// main 함수

	int array[SIZE] = { 0 };		// 크기가 10인 배열 선언 및 모든 index를 0으로 초기화
	int num = 0;				//	실습4) 찾고자하는 값을 저장할  num 선언 및 초기화

	scanArr(array);			// scanArr함수를 통해 배열을 입력받는다.
	printArray(array);			// printArray함수로 배열을 출력한다.

	printf("\n찾을 key 값을 입력해주세요 : ");	// 실습4) 찾고자하는 값을 입력해달라고 출력
	scanf_s("%d", &num);			// 실습4) 입력받은 값은 num에 저장, scanf_s를 통해 오류를 출력하지않는다.

	if (findArray(array, num) == -1) {						// 실습4) findArray함수가 -1을 반환한다면 
		printf("찾고자 하는 값이 배열에 존재하지 않습니다.\n");		// 실습4) 배열에는 입력된 값이 없다는 걸 알림
	}
	else {		// 실습4) -1값이 아닌 다른 반환된 값은 그 값에 해당하는 index이기 때문에
		printf("%d은 배열의 [%d]인덱스에 있습니다.\n", num, findArray(array, num)); // 실습4) 입력된 값이 어느 index에 있는지 같이 알려주며 출력
	}

	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

void scanArr(int arr[]) {		// scanArr함수, 매개변수인 배열을 입력받은 값으로 초기화한다.
	int i;		// 반복문에서 사용할 변수

	for (i = 0; i < SIZE; i++) {			// 배열의 크기만큼 반복
		printf("배열의 %d번째 index를 입력해주세요 : ", i);		// 각 index마다 값을 입력해달라고 출력
		scanf_s("%d", &arr[i]);		// 입력받은 값마다 해당 index에 저장, scanf_s로 오류를 출력하지 않음
	}
}

void printArray(int arr[]) {		// 배열을 출력하는 printArray함수, 매개변수로 받은 배열을 출력
	int i;		// 반복문에서 사용할 변수
	printf("출력결과 > \n[ ");		// 반복문 출력
	for (i = 0; i < SIZE; i++) {	// 배열의 크기만큼 반복
		printf("%d ", arr[i]);		// 배열의 각 index의 값을 출력한다.
	}
	printf("]\n");		
}

int findArray(int arr[], int key) {		// 실습4) 입력된 key값이 배열에 있는지 찾는 findArray함수
	int i;		// 실습4) 반복문에서 사용할 변수

	for (i = 0; i < SIZE; i++) { // 실습4) 배열의 크기만큼 반복
		if (arr[i] == key) {  // 만약 key값과 같은 배열이 있다면
			return i;		// 그 배열의 index를 반환 
		}	
	}
	return -1;		// 해당하는 값이 없다면 -1을 반환
}
