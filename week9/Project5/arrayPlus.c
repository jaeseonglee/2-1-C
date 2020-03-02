/*	실습 5 : ArrayPlus.c
	작성일 : 2019. 04. 28
	작성자 : 20165153 이재성
	프로그램 설명 : 두 2차원 배열의 합을 배열로 저장하고 출력하는 프로그램
*/

#include <stdio.h>		// 전처리문
#define SIZE 3			// define문으로 매크로 상수 SIZE를 3으로 지정

int sumIndex(int oneIndex, int twoIndex);		// 배열의 인덱스를 더하여 int형으로 반환하는 sumIndex함수
void printArray(int arr[][SIZE]);			// 2차원 배열을 출력하는 printArray함수

int main(int argc, char* argv[]) {		// main함수 
	int arrayBlack[SIZE][SIZE] = { {1,5,6},		// 2차원 배열 arrayBlack 선언 및 각각의 값으로 초기화
								   {9,2,4},		// 이 경우에는 행의 크기를 생략할 수 있다.
								   {8,7,3} };

	int arrayWhite[SIZE][SIZE] = { {3,4,9},		// 2차원 배열 arrayWhite 선언 및 각각의 값으로 초기화
								   {2,5,8},		// 이 경우에는 행의 크기를 생략할 수 있다.
								   {1,6,7} };

	int arrayGray[SIZE][SIZE] = { {0}, {0}, {0} };	// 2차원 배열 arrayGray 선언 및 0으로 초기화
	int i, j;		// 반복문에서 사용할 변수 

	for (i = 0; i < SIZE; i++) {		// 중첩 반복문을 사용해 두 배열의 합을 arrayGray에 저장
		for (j = 0; j < SIZE; j++) {	// 2차원 배열의 행과 열만큼 반복하고
			arrayGray[i][j] = sumIndex(arrayBlack[i][j], arrayWhite[i][j]);
		}	// sumIndex 함수 호출을 통해 두 배열의 인덱스 합을 arrayGray 배열에 저장한다
	}

	printf("행렬 A : \n");		// 주어진 배열인 행렬 A를 출력한다고 출력
	printArray(arrayBlack);		// printArray함수 호출로 arrayBlack 출력

	printf("행렬 B : \n");		// 주어진 배열인 행렬 B를 출력한다고 출력
	printArray(arrayWhite);		// printArray함수 호출로 arrayWhite 출력

	printf("행렬 A와 행렬 B의 합 : \n");		// 행렬 A와 행렬 B의 합을 출력한다고 출력
	printArray(arrayGray);		//  printArray함수 호출로 arrayGray 출력

	system("pause");			// 출력창 확인
	return 0;					// 0을 반환
}

int sumIndex(int oneIndex, int twoIndex) {		// 배열의 인덱스를 더하여 int형으로 반환하는 sumIndex함수
	return oneIndex + twoIndex;		// 매개변수로 받은 두 값을 더하여  정수형으로 반환한다.
}

void printArray(int arr[][SIZE]) {		// 2차원 배열을 출력하는 printArray함수
	int i, j;					// 반복문에서 사용할 변수
	for (i = 0; i < SIZE; i++) {		// 매개변수의 SIZE(행크기) 만큼 반복
		for (j = 0; j < SIZE; j++) {	// 매개변수의 SIZE(열크기) 만큼 반복	
			printf("%d\t", arr[i][j]);		// 각각의 해당하는 인덱스를 출력 \t으로 간격을 맞춰준다.
		}
		printf("\n");		// 하나의 열 출력이 끝날때마다 줄바꿈
	}
}