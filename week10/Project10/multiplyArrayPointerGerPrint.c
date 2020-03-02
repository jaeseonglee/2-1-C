/*	실습 10 : multiplyArrayPointerGetPrint.c
	작성일 : 2019. 05.06 (실작성일 05.02~ 였으나 파일 증발)
	작성자 : 20165153 이재성
	프로그램 내용 : 실습 9의 입출력 부분을 각각 getData, printData함수로 변경한 프로그램
*/

#include <stdio.h>		// 전처리문
#define SIZE 5			// define문으로 SIZE를 5로 지정

void getData(int* pAry, int size);		// 배열을 정수형으로 입력받아 초기화하는 getData함수
void printData(int* pAry, int size);	// 배열을 출력하는 printData함수
void multiply(int* pAry, int size);		// 배열 요소에 2를 곱하는 multiply함수

int main(int argc, char argv[]) {		// main함수

	int ary[SIZE];	// 크기5의 정수형 배열 ary 선언

	getData(ary, SIZE);			// getData함수 호출로 배열을 정수형으로 입력받아 초기화한다.
	multiply(ary, SIZE);		// multiply함수 호출로 배열의 각 값에 2를 곱해준다.
	printData(ary, SIZE);		// printData함수 호출로 값이 바뀐 배열을 출력한다.

	printf("\n");		// 줄바꿈
	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void getData(int* pAry, int size) {		// 배열을 정수형으로 입력받아 초기화하는 getData함수
	int* pWalk;		// 포인터 변수 pWalk 선언
	int* pLast;		// 포인터 변수 pLast 선언
	pLast = pAry + SIZE - 1;		// pLast에 배열aty의 마지막 주소를 저장

	for (pWalk = pAry; pWalk <= pLast; pWalk++) {	// pWalk에 배열의 시작주소를 저장, 마지막주소까지 반복하는 반복문
		printf("Please enter an integer: ");		// 정수를 입력해달라고 출력
		scanf_s("%d", pWalk);		// 입력받은 정수를 포인터 변수 pWalk를 통해 배열의 각 인덱스에 값을 저장
	}
}

void printData(int* pAry, int size) {		// 배열을 출력하는 printData함수
	int* pWalk;		// 포인터 변수 pWalk 선언
	int* pLast;		// 포인터 변수 pLast 선언
	pLast = pAry + SIZE - 1;		// pLast에 배열aty의 마지막 주소를 저장

	printf("Doubled value is : \n");		// 2를 곱해준 값을 출력한다고 출력
	for (pWalk = pAry; pWalk <= pLast; pWalk++) {	// multiply함수로 2가 곱해진 배열을 포인터 변수를 통해 출력하는 반복문
		printf("%3d", *pWalk);		// 포인터 변수 pWalk를 통해 배열 출력
	}
}


void multiply(int* pAry, int size) {	// 배열 요소에 2를 곱하는 multiply함수
	int* pWalk;		// 포인터 변수 pWalk 선언
	int* pLast;		// 포인터 변수 pLast 선언

	pLast = pAry + size - 1;	// pLast에 배열aty의 마지막 주소를 저장
	for (pWalk = pAry; pWalk <= pLast; pWalk++) {	// pWalk에 배열의 시작주소를 저장, 마지막주소까지 반복하는 반복문
		*pWalk = *pWalk * 2;		// 포인터 변수를 통한 간접 참조로 배열의 각 값에 2를 곱한 값으로 초기화한다.
	}
}