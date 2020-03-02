/*	실습 4 : twoDimArrayBubbleSort.c
	작성일 : 2019. 04. 25 ~ 04. 28
	작성자 : 20165153 이재성
	프로그램 설명 : 2차원 배열을 1차원 단위로 bubbleSort에 전달하여 정렬하는 프로그램
*/

#include <stdio.h>			// 전처리문
#define ROW 3			
#define COL 6				// define문으로 매크로 상수 ROW와 COL을 각각 3과 6으로 지정

void bubbleSort(int arr[]);			// 주어진 배열을 버블정렬하는 bubbleSort함수
void printArray(int arr[ROW][COL]);	// 2차원 배열을 출력하는 printAraay함수

int main(int argc, char *argv[]) {		// main 함수
	int twoDimArray[ROW][COL] = { {2,3,1,4,5,7},		// 2차원 배열 선언 및 각각의 값으로 초기화
							      {4,6,3,2,1,5},		// 이 경우에는 2차원 배열의 행크기를 생략할 수 있다. 
								  {1,2,6,7,3,4} };
	
	int i;	 // 2차원 배열을 1차원의 형태로 버블정렬에 사용할 반복문에서 사용할 변수

	printArray(twoDimArray);	// 주어진 2차원배열을 printArray 함수를 통해 출력
		
	printf("\n주어진 배열을 bubbleSort, ");		// 정렬한뒤의 2차원 배열을 출력한다고 출력
	for (i = 0; i < ROW; i++) {		// 반복문을 통해 2차원 배열을 1차원의 형태로 bubbleSort함수호출 버블정렬
		bubbleSort(twoDimArray[i]);	// 2차원 배열을 1차원배열의 형태로 전달
	}
	printArray(twoDimArray);		// 정렬한 2차원배열을 printArray 함수를 통해 출력

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

void bubbleSort(int arr[]) {		// 주어진 배열을 버블정렬하는 bubbleSort함수
	int i, j;	// 반복문에서 사용할 변수
	int temp;	// 정렬을 위해 사용할 임시값
	
	for (i = 0; i < COL; i++) {		// 중첩 반복문을 통해 버블 정렬
		for (j = 0; j < COL - 1; j++) {
			if (arr[i] < arr[j]) {// 오름 차순으로 정렬하기 위해 '<' 연산자 사용 
				temp = arr[j];		// 조건문의 결과가 ture면 임시값에 arr[j] 저장
				arr[j] = arr[i];	// arr[j]에 arr[i] 저장
				arr[i] = temp;		// arr[i]에 temp를 저장, 값을 바꿔준다.
			}
		}
	}
}
void printArray(int arr[ROW][COL]) {		// 2차원 배열을 출력하는 printAraay함수
	int i, j;			// 반복문에서 사용할 변수
	printf("2차원 배열 출력 : \n");		// 주어진 2차원 배열을 출력한다고 출력
	for (i = 0; i < ROW; i++) {		// 중첩 반복문을 사용 2차원 배열 출력
		for (j = 0; j < COL; j++) {
			printf("[%d][%d] : %d\t", i, j, arr[i][j]);		// 각각의 인덱스와 함께 2차원 배열 출력
		}
		printf("\n");		// 각 행의 출력이 끝날때마다 줄바꿈
	}
}