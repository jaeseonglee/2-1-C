/*	실습 7,8 : printArrayPointer.c
	작성일 : 2019. 05.06 (실작성일 05.02~ 였으나 파일 증발)
	작성자 : 20165153 이재성
	프로그램 내용 : 포인터를 가지고 배열출력하는 프로그램
				실습 8 : 추가로 forwardPrint함수와 backwardPrint함수 작성
*/

#include <stdio.h>			//전처리문
#define MAXSIZE 10			// MAXSIZE를 10으로 지정

void forwardPrint(int* aryPointer);		// 실습 8: 배열을 오름차순 출력하는 forwardPrint함수
void backwardPrint(int* aryPointer);	// 실습 8: 배열을 내림차순 출력하는 backwardPrint함수

int main(int argc, char* argv[]) {			// main함수
	int ary[] = { 1,2,3,4,5,6,7,8,9,10 };		// 정수형 배열 ary선언 및 각각의 값으로 초기화
	int* pWalk;		// 포인터 변수 pWalk 선언
	int* pEnd;		// 포인터 변수 pEnd 선언

	printf("Array forward");		// Array forward 출력
	for (pWalk = ary, pEnd = ary + MAXSIZE; pWalk < pEnd; pWalk++) {
		//	pWalk에 ary(배열의 이름, 즉 배열의 시작주소), pEnd에 ary+10(배열의 마지막 주소 + 1)를 저장
		//	pEnd에 마지막 주소 +1 인 이유는 반복문의 조건을 맞춰 마지막 원소까지 출력하기 위해서이다.
		//	pWalk++를 통해 배열의 마지막 원소까지 포인터를 통해 출력하는 반복문
		printf("%3d", *pWalk);	// %3d로 3칸중 오른쪽 정렬 출력, *pWalk로 간접참조하여 배열의 값을 출력
	}
	printf("\n");		// 반복문이 끝나면 줄바꿈

	printf("Array backward");		// Array backward 출력
	for (pWalk = pEnd - 1; pWalk >= ary; pWalk--) {
		//	pWalk에 pEnd -1(배열의 마지막 주소)을 저장, pWalk가 ary(배열의 시작주소)와 같아질때까지
		//	pWalk--를 통해 배열의 마지막 원소까지 포인터를 통해 출력하는 반복문
		printf("%3d", *pWalk);	// %3d로 3칸중 오른쪽 정렬 출력, *pWalk로 간접참조하여 배열의 값을 출력
	}
	printf("\n");		// 반복문이 끝나면 줄바꿈

	printf("\n실습 8 : 함수호출\n");		// 실습 8 : 함수로 오름차순 내림차순 배열 출력
	forwardPrint(ary);		// forwardPrintr함수 호출로 배열 오름차순 출력
	backwardPrint(ary);		// backwardPrint함수 호출로 배열 내림차순 출력

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void forwardPrint(int* aryPointer) {	// 실습 8: 배열을 오름차순 출력하는 forwardPrint함수
	int* forwardStart;		// 포인터변수 forwardStart 선언 
	int* forwardEnd;		// 포인터변수 forwardEnd 선언		, 각각 main함수의 pWalk와 pEnd에 해당한다.
	printf("Array forward");		// Array forward 출력
	for (forwardStart = aryPointer, forwardEnd = aryPointer + MAXSIZE; forwardStart < forwardEnd; forwardStart++) {
		printf("%3d", *forwardStart);		// main함수의 반복문과 같은 원리로 반복하여 출력
	}
	printf("\n");		// 반복이 끝나면 줄바꿈
}

void backwardPrint(int* aryPointer) {	// 실습 8: 배열을 내림차순 출력하는 backwardPrint함수
	int* backwardStart;							// 포인터변수 backwardStart 선언 
	int* backwardEnd = aryPointer + MAXSIZE;	// 포인터변수 backwardEnd 선언 및 배열의 마지막주소+1로 초기화	, 각각 main함수의 pWalk와 pEnd에 해당한다.
	printf("Array backward");		// Array backward 출력
	for (backwardStart = backwardEnd-1; backwardStart >= aryPointer; backwardStart--) {
		printf("%3d", *backwardStart);	// main함수의 반복문과 같은 원리로 반복하여 출력
	}
	printf("\n");		// 반복문이 끝나면 줄바꿈
}