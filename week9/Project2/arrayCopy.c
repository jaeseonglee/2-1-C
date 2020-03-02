/*	실습 2 : arrayCopy.c
	작성일 : 2019. 04. 25 ~ 04. 28
	작성자 : 20165153 이재성
	프로그램 설명 : 주어진 2차원배열을 1차원배열로 복사하는 프로그램
*/

#include <stdio.h>			// 전처리문
#define ROW 2
#define COL 8			// define문으로 매크로상수 ROW를 2로 지정, COL를 8로 지정

void copyArray(int twoDimArray[ROW][COL]);		// 주어진 배열을 복사하는 copyArray함수

int main(int argc, char *argv[]) {		// main 함수
	int twoDimArray[ROW][COL] = { {1,3,5,7,9,11,13,15},		// 2차원 배열 선언 및 각각의 값으로 초기화 
								{2,4,6,8,10,12,14,16} };	// 이 경우에는 2차원 배열의 행 크기를 생략가능하다.

	copyArray(twoDimArray);		// copyArray 함수로 2차원 배열을 1차원 배열로 복사 및 초기화, 복사된 배열 출력

	system("pause");		// 출력창 확인 
	return 0;				// 0으로 초기화
}

void copyArray(int twoDimArray[ROW][COL]) {		// 주어진 배열을 복사하는 copyArray함수
	int oneDimArray[ROW * COL] = { 0 };		// 1차원 배열 선언 및 0으로 초기화
	int i,j;			// 반복문에서 사용할 변수
	for (i = 0; i < ROW; i++) {			// 중첩반복문으로 2차원 배열을 1차원 배열로 복사
		for (j = 0; j < COL; j++) {		// 2차원 배열의 행과 열의 곱만큼 1차원 배열에 초기화 해준다.
			oneDimArray[(i * COL) + j] = twoDimArray[i][j];
		}	// 2차원 배열의 각 인덱스를 1차원 배열의 인덱스에 저장 할 수 있도록 'i*(2차원 배열의 열크기) +j' 식을 
	}		// 사용해서 1차원 배열로 저장한다.

	printf("출력 : \n");				// 그렇게 새로 값이 저장된 1차원 배열을 출력한다고 출력
	for (i = 0; i < ROW * COL; i++) {		// 1차원 배열의 크기 만큼 반복 (ROW * COL) == 2*8 == 16
		printf("%d ", oneDimArray[i]);		// 1차원 배열의 각각의 값을 출력
	}
	printf("\n");	// 출력이 끝나면 줄바꿈
}