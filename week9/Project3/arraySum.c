/*	실습 3 : arraySum.c
	작성일 : 2019. 04. 25 ~ 04. 28 
	작성자 : 20165153 이재성
	프로그램 설명 : 주어진 2차원 배열의 각 행과 열의 합을 계산하고 저장하는 함수를 이용해 출력하는 프로그램
*/

#include <stdio.h>		// 전처리문
#define SIZE 5			// define을 통해 SIZE를 5로 지정

void sumArray(int arr[][SIZE], int rowSum[], int colSum[]);  // 주어진 2차원 배열의 각 행과 열의 합을 계산하는 sumArray함수
void printArray(int arr[][SIZE], int rowSum[], int colSum[]); // 2차원 배열과 각 행과 열의 합을 출력하는 printArray함수

int main(int argc, char *argv[]) {		// main 함수
	int array[5][5] = { {1,2,3,4,5},	
						{1,3,5,7,9},		// 2차원 배열 선언 및 각각의 값으로 초기화
						{2,3,4,5,6},		// 이 경우에는 앞의 5 생략가능하다.
						{2,4,6,8,10},
						{3,6,9,12,15} };
	int row[SIZE] = { 0 };		// 행의 값을 저장할 배열 선언 및 0으로 초기화
	int col[SIZE] = { 0 };		// 열의 값을 저장할 배열 선언 및 0으로 초기화

	sumArray(array, row , col );		// sumArray 함수 호출
	printArray(array, row, col);		// printArray 함수 호출
	
	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

void sumArray(int arr[][SIZE], int rowSum[], int colSum[]) {  // 주어진 2차원 배열의 각 행과 열의 합을 계산하는 sumArray함수
	int i,j;			// 반복문에서 사용할 변수
	for (i = 0; i < SIZE; i++) {		// SIZE만큼 반복하는 반복문
		for (j = 0; j< SIZE; j++) {		// SIZE만큼 반복하는 반복문. 주어진 2차원 배열 만큼이다.
			rowSum[i] += arr[i][j];		// 2차원 배열의 i번째 행의 모든 값을 rowSum[i]에 더해서 저장
			colSum[j] += arr[i][j];		// 2차원 배열의 j번째 열의 값을 colSum[j]에 저장하여 중첩반복문이 끝날때까지 저장
		}
	}
}

void printArray(int arr[][SIZE], int rowSum[], int colSum[]) {// 2차원 배열과 각 행과 열의 합을 출력하는 printArray함수
	int i,j;		// 반복문에서 사용할 변수
	printf("2차원 배열 출력 : \n");		// 주어진 2차원 배열을 출력한다고 출력
	for (i = 0; i < SIZE; i++) {		// 중첩 반복문을 사용 2차원 배열 출력
		for (j = 0; j < SIZE; j++) {	
			printf("[%d][%d] : %d\t", i, j, arr[i][j]);		// 각각의 인덱스와 함께 2차원 배열 출력
		}
		printf("\n");		// 각 행의 출력이 끝날때마다 줄바꿈
	}
	printf("\n"); // 2차원 배열의 출력이 끝나면 줄바꿈

	for (i = 0; i < SIZE; i++) {		// 행의 합을 출력하는 반복문
		printf("%d번째 행의 합 : %d\n", i, rowSum[i]);	// 각각의 인덱스와 함께 2차원 배열의 행의 합을 출력		
	}
	printf("\n");		// 모든 행의 합을 출력하고 줄바꿈

	for (i = 0; i < SIZE; i++) {		// 열의 합을 출력하는 반복문
		printf("%d번째 열의 합 : %d\n", i, colSum[i]);	// 각각의 인덱스와 함께 2차원 배열의 열의 합을 출력
	}
	printf("\n");		// 모든 열의 합을 출력하고 줄바꿈
}