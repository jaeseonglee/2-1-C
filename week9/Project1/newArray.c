/*	
	9주차 실습 진행에 있어 visual studio 2019버전으로 업그레이드하여 사용하였음(19.04.28에 업그레이드)

	실습 1 : newArray.c
	작성일 : 2019. 04. 25 ~ 04. 28
	작성자 : 20165153 이재성
	프로그램 설명 : 2차원 배열을 생성하고 배열의 위치와 값을 함수를 통해서 출력하는 프로그램
*/

#include <stdio.h>			// 전처리문
#define ROW 2
#define COL 8			// define문으로 매크로상수 ROW를 2로 지정, COL를 8로 지정

void printArray(int arr[ROW][COL]);		// 배열의 위치와 값을 출력하는 printArray함수

int main(int argc, char *argv[]) {		// main 함수

	int array[ROW][COL] = {  {1,3,5,7,9,11,13,15},		// 2차원 배열 선언 및 각각의 값으로 초기화
							 {2,4,6,8,10,12,14,16} };	// 이 경우에는 2차원배열의 행 크기를 생략할 수 있다.
	
	printArray(array);		// printArray함수 호출로 2차원 배열 출력
	system("pause");		 // 출력창 확인
	return 0;			// 0으로 초기화
}

void printArray(int arr[ROW][COL]) {		// 배열의 위치와 값을 출력하는 printArray함수
	int i, j;				// 반복문에서 사용할 변수
	printf("출력 : \n");		// 배열 출력 전에 출력한다고 출력
	for (i = 0; i < ROW; i++) {			// 2차원 배열 출력함에 있어 중첩 반복문 사용
		for (j = 0; j < COL; j++) {		// 각 반복문은 배열의 각 행과 열만큼 반복한다
			printf("[%d][%d] : %d\t", i, j, arr[i][j]);		// 2차원 배열의 인덱스와 값을 출력
		}
		printf("\n");		// 열을 전부 출력할때마다 줄바꿈
	}
}