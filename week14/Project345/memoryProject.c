/*	실습 3,4,5 : memoryProject.c		(14주차는 실습 3번부터 시작)
	작성일 : 2019. 05. 30, 06. 04 ~ 05
	작성자 : 20165153 이재성
	프로그램 설명 :
			- 실습 3 : 배열의 개수를 입력받아 동적 메모리 할당으로 배열을 만들고 1부터 입력한 숫자 사이의
						랜덤 값으로 배열을 채우고 출력한 후 메모리를 해제하는 프로그램

			- 실습 4 : 짝수에 해당하는 1차원 배열의 개수를 입력받아 1차원 배열을 만든 후 값을 입력받고
						2차원 배열 크기를 입력받아 동적 메모리 할당받고 1차원 배열의 내용을 2차원 배열로 복사하는 함수 호출

			- 실습 5 : 학생 파일 처리
						1) 입력 : 저장할 학생 수 를 입력받아 구조체 배열을 동적 할당받고 지정된 학생수만큼을 입력받는다.
						2) 정렬 : 구조체 배열을 나이순서로 정렬한다.
						3) 출력 : 구조체 배열을 내용을 출력한다.
						4) 이전메뉴 : 현재 메뉴를 중단하고 메인메뉴루틴으로 돌아간다.
*/

#define _CRT_SECURE_NO_WARNINGS	// 에러를 출력하지 않게 하는 define문
#include <time.h>				// time.h 전처리문
#include <stdlib.h>				//	난수 생성에 사용할 전퍼리문
#include <stdio.h>				// 표준 입출력 전처리문

typedef struct contact {		// 실습 5 관련 학생 정보 구조체
	char name[10];				// 이름을 저장할 name
	int age;					// 나이를 저장할 age
	char address[100];			// 주소를 저장할 address
	char major[100];			// 전공을 저장할 major , 주소와 전공은 무난하게 100으로 설정
} CONTACT;					// 구조체형 이름 CONTACT 선언 (대문자)

void menuPrint();			// 메뉴를 출력하는 menuPrint 함수

void fillArray(int* ptr, int size);		// 실습 3 관련 배열을 난수로 채우는 fillArray함수 
void printArray(int* ptr, int size);	// 실습 3 관련 배열을 출력하는 printArray함수
void studentInfomation();				// 실습 5 관련 학생 정보 처리 메뉴를 출력하는 sudentInfomation함수

int main(int argc, char* argv[]) {		// main함수

	int* arr = NULL;			// 실습 3,4 관련 정수형 포인터 변수 선언 및 NULL값으로 초기화
	int size = 0;				// 실습 3,4 관련 배열의 크기를 저장할 변수 size
	int num = 0;				// 키보드로부터 입력받은 정수를 저장할 num
	
	int** douArr = NULL;		// 실습 4 관련 정수형 이중 포인터 douArr 변수 선언 및 NULL값으로 초기화
	int douSize = 0;			// 실습 4 관련 이차원 배열의 행값을 저장할 변수 douSize 

	int thirdNum = 0;			// 실습 5 관련 키보드로부터 입력받은 thirdNum 선언
	int stuNum = 0;				// 실습 5 관련 학생수를 저장할 stuNum 선언

	CONTACT* stuArr[100] = {NULL};	// 실습 5 관련 학생정보를 저장할 구조체 배열 선언 및 NULL로 초기화
	CONTACT* temp = { NULL };		// 실습 5 관련 정렬을 위해 사용할 구조체 변수 temp 선언 및 NULL로 초기화
	int i, j;		// 반복문에서 사용할 변수

	srand(time(NULL));		// 실습 3 관련 랜덤값 지정해준다.

	while (1) {		// 무한 반복문 1,2,3 이외의 숫자를 입력시 반복문을 종료한다.
		menuPrint();			// menuPrint함수 호출로 메뉴를 출력하고
		scanf_s("%d", &num);	// 숫자를 입력받는다.

		switch (num) {			// 입력받은 num에 따라 switch문을 진행한다.
		case 1:					// 1일 경우 실습 3에  해당한다.
			printf("만들고자 하는 배열의 크기를 입력하시오 : "); // 배열의 크기를 입력해달라고 출력
			scanf_s("%d", &size);	// 입력받은 숫자를 size에 저장
			
			arr = (int*)malloc(size * sizeof(int));		// 배열에 size*sizeof(int)만큼 메모리를 할당한다.
			fillArray(arr, size);		// fillArray함수로 난수로 배열을 채운다.
			printArray(arr, size);		// printArray함수로 배열을 출력한다.
			free(arr);					// 사용하고 난후 메모리를 해제한다.
			arr = NULL;					// 더불어 NULL값으로 초기화
			break;						// 실습 3에 해당하는 부분 종료

		case 2:			// 2일 경우 실습 3에  해당한다.
			printf("1차원 배열의 크기 입력(짝수) : ");	// 짝수의 크기를 입력해달라고 입력
			scanf_s("%d", &size);				// 입력받은 짝수를 size에 저장
			if (size % 2 == 1) {		// 만약 짝수가 아니면
				size++;					// 1을 더해준다.
			}

			arr = (int*)malloc(size * sizeof(int));		// 배열에 size*sizeof(int)만큼 메모리를 할당한다.
			printf("배열 값 입력 : \n");			// 키보드로부터 배열 값을 입력받는다.
			for (i = 0; i < size; i++) {
				scanf_s("%d", &arr[i]);			// size만큼 배열을 입력을 통해 초기화한다.
			}

			printf("2차원 배열 크기 입력 : ");	// 2차원 배열의 크기를 입력해달라고 출력
			scanf_s("%d", &douSize);			// 입력받은 숫자를 douSize에 저장

			douArr = (int**)malloc( douSize * sizeof(int*));	// 이중포인터, 즉 2차원 배열에 douSize*sizeof(int*)만큼 메모리를 할당한다.

			for (i = 0; i < douSize; i++) {			// 반복문을  통해 2차원 배열을 값을 저장한다.
				douArr[i] = (int*)malloc( ((int)(size / douSize) + size % douSize) * sizeof(int));	// 포인터 값마다 메모리 할당을 해주고
				
				for (j = 0; j <   (int)(size / douSize) + size % douSize; j++) {	// 1차원 배열의 크기를 2차원 배열의 행만큼 나누고 올림해준 값만큼 반복한다.	
					douArr[i][j] = arr[i * ( (int)(size / douSize) + (size % douSize) ) + j];	// 1차원 배열의 인덱스에 해당하는 값을 2차원 배열에 저장
					if (i * ((int)(size / douSize) + (size % douSize)) + j >= size) {	// 1차원 배열보다 2차원 배열이 크다면
						douArr[i][j] = 0;				// 남은 값은 0으로 초기화해준다.
					}
					printf("%d ", douArr[i][j]);		// 해당하는 2차원 배열값 출력
				}
				printf("\n");		// 2차원 배열 하나의 행의 출력이 끝나면 줄바꿈
			}
			free(arr);	// 중첩 반복문이 끝나면 메모리 해제해준다.
			arr = NULL;
			for (i = 0; i < douSize; i++) {	// 이중 포인터, 2차원 배열의 경우 
				free(douArr[i]);			// 인덱스마다 해제해준다.
				douArr[i] = NULL;
			}
			break;		// 실습 4에 해당하는 부분 종료

		case 3:			// 3일 경우 실습 5에 해당한다.
			while (1) {		// 실습 5의 경우에도 무한 반복문이 존재한다.
				studentInfomation();			// tudentInfomation함수 호출로 학생 정보 처리 메뉴를 출력해서
				scanf_s("%d", &thirdNum);		// 입력받은 숫자를 thirdNum에 저장
				stuNum = 0;			// 변수 선언에도 초기화했지만 무한반복을 하다보면 값이 남아있지 않기 위해 다시 초기화

				if (thirdNum == 4) {	// 실습 5의 무한반복문을 끝내기 위해 있는 조건문
					for (i = 0; i < stuNum; i++) {	// stuNum가 기본적으로 0이기 때문에 실행되지 않지만
						free(stuArr[i]);		// 4번을 통해 빠져나갈때 실습 5번의 1번을 진행했다면 stuNum이 증가하기때문에
						stuArr[i] = NULL;		// 메모리 해제를 위해 존재하는 반복문
												// 프로그램의 종료는 메인함수의 무한반복에서의 종료밖에 없기 때문에
												// 실습 5를 끝내기 위해서는 4을 입력해야하므로
												// 이중 조건문을 통해 구조체 메모리를 해제해준다.
					
					}
					break;			// 4를 입력하면 main함수의 최상위 무한반복문으로 돌아간다.
				}

				switch (thirdNum) {	// thirdNum에 해당하는 switch문
				case 1:		// 입력에 해당한다.
					printf("학생 수 입력 : ");		// 학생수를 입력해달라고 출력
					scanf_s("%d", &stuNum);			// 입력받은 숫자를 syuNum에 저장
					getchar();						// 공백을 지워주기 위해 getchar()사용

					for (i = 0; i < stuNum; i++) {		// 반복문으로 학생수 만큼 반복해서 정보를 입력받는다.
						stuArr[i] = (CONTACT*)malloc(sizeof(CONTACT));		// 구조체 배열마다 메모리를 할당해준다.
						printf("%d번째 학생의 이름: ", i+1);		// 학생의 이름을 입력해달라고 출력
						gets_s(stuArr[i]->name, sizeof(stuArr[i]->name));	// 입력받은 이름 구조체 접근을 통해 저장

						// 위와 마찬가지로 입력을 받아 값을 저장해준다.
						printf("%d번째 학생의 나이: ", i+1);
						scanf_s("%d", &stuArr[i]->age);
						getchar(); // scanf사용으로 공백이 남아 지워준다.

						printf("%d번째 학생의 주소: ", i+1);
						gets_s(stuArr[i]->address, sizeof(stuArr[i]->address));

						printf("%d번째 학생의 학과: ", i+1);
						gets_s(stuArr[i]->major, sizeof(stuArr[i]->major));
					}
					continue;		// switch문에서 continue사용으로 무한반복문으로
									// 돌아가서 메뉴 선택 부분에서 다시 진행한다.
				case 2:			
					printf("나이순으로 정렬\n");		// 나이순으로 정렬한다고 출력
					temp = (CONTACT*)malloc(sizeof(CONTACT));	// 임시 구조체 포인터인 temp에도 메모리를 할당한다.
					for (i = 0; i < stuNum - 1; i++) {		// 먼저 2번을 선택해도 stuNum이 0으로 초기화했기 때문에 반복문이 진행되지 않는다.
						for (j = i; j < stuNum; j++) {		// 오름 차순으로 정렬해준다.
							if (stuArr[i]->age > stuArr[j]->age) {
								*temp = *stuArr[i];			// 임시 구조체 temp를 통해
								*stuArr[i] = *stuArr[j];	// 오름차순으로 구조체 배열의 순서를 바꿔준다.
								*stuArr[j] = *temp;
							}
						}
					}  // 반복문이 끝나면 구조체 배열의 나이 값에 따라 오름차순으로 변경된다. 
					free(temp);			// case 2번이 끝나면 임시 구조체 temp를 메모리 해제하고
					temp = NULL;			// NULL값으로 초기화한다.
					printf("정렬완료\n");		
					continue;			// 위와 마찬가지의 상황으로 학생 처리 메뉴로 돌아간다.
				case 3:
					printf("학생 정보 출력 \n");		// 학생 정보를 출력한다고 출력
					printf("이름\t나이\t주소\t학과\n");		// 구조체 전부를 출력
					for (i = 0; i < stuNum; i++) {		// 반복문을 통해 출력 ,역시 3번을 먼저 선택해도 stuNum이 0이기 때문에 출력이 없다.
						printf("%s\t %d\t %s\t %s\n", stuArr[i]->name, stuArr[i]->age, stuArr[i]->address, stuArr[i]->major);
					}				// %s와 %d 사용으로 구조체의 각각 해당하는 부분들을 출력해준다.
					printf("\n");		// 출력이 끝나면 줄바꿈
					continue;			// 무한반복문으로 돌아가기 위한 continue;
				default :
					continue;		// 4가 아닌 다른 값이 입력되면 다시 학생 정보 처리 선택창으로 돌아간다.
				}
				
			} // 4를 입력해서 while문을 빠져나오면
			break;		// 실습 5에 해당하는 부분 종료
		
		default:		// main함수의 무한반복문의 유일한 종료조건
			printf("1,2,3번 이외의 숫자 입력입력으로 프로그램을 종료합니다.\n");
							// 무한반복을 빠져나가는 조건으로 num값이 1,2,3이 아닐때
			return 0;		// 0을 반환하고 프로그램을 종료한다.
			
		}
	}
	return 0;			// 0을 반환, main함수를 진행하면서 이 코드를 진행할 수 없다.

}

void menuPrint() {			// 메뉴를 출력하는 menuPrint 함수
	printf("-----------------------------\n");
	printf("\t프로그램 구성\n");
	printf("-----------------------------\n");
	printf("1. 동적 메모리 할당\n");		// 실습 3
	printf("2. 배열 복사\n");			// 실습 4
	printf("3. 학생 정보 처리\n");		// 실습 5
	printf("-----------------------------\n");
	printf("메뉴 선택 : ");
}

void fillArray(int* ptr, int size) {		// 실습 3 관련 배열을 난수로 채우는 fillArray함수 
	int i;
	for (i = 0; i < size; i++) {	
		ptr[i] = rand() % size + 1;		// 1부터 size까지의 난수로 초기화해준다.
	}
}

void printArray(int* ptr, int size) {		// 실습 3 관련 배열을 출력하는 printArray함수
	printf("생성된 배열 결과\n");			// 배열 출력
	int i;
	for (i = 0; i < size; i++) {
		printf("[%d] : %d\n", i, ptr[i]);		// 각 인덱스에 해당하는 값을 출력
	}
}

void studentInfomation() {				// 실습 5 관련 학생 정보 처리 메뉴를 출력하는 sudentInfomation함수
	printf("-----------------------------\n");
	printf("\t학생 정보 처리\n");
	printf("-----------------------------\n");
	printf("1. 입력\n");			// 실습 5의 1
	printf("2. 나이순 정렬\n");	// 실습 5의 2
	printf("3. 출력\n");			// 실습 5의 3
	printf("4. 이전 메뉴\n");	// 실습 5의 4, 4번을 입력하면 main함수로 돌아간다.
	printf("-----------------------------\n");
	printf("선택 : ");
}
