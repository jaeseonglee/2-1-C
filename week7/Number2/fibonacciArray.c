/*	실습 2 : fibonacciArray.c
	작성일 : 2019. 04. 10 ~ 04. 12
	작성자 : 2016153 이재성
	프로그램 설명 : 배열 10개에 피보나치 수열의 값을 저장하고 출력하는 프로그램
*/

#include <stdio.h>		// 전처리문

#define SIZE 10		// define문으로 매크로 상수 SIZE를 10으로 지정

void printArray(int arr[]);		// 배열을 출력하는 printArray함수
void setFiboArray(int arr[]);		// 배열에 피보나치수열로 저장하는 setFiboArray함수

int main(int argc, char* argv[]) {		// main함수
	int array[SIZE] = { 0 };		// 크기가 10인 배열 선언 및 모든 index를 0으로 초기화

	setFiboArray(array);		// setFiboArray함수를 통해 배열을 피보나치 수열로 저장
	printArray(array);			// printArray함수로 배열을 출력

	system("pause");			// 출력창 확인
	return 0;					// 0을 반환
}

void setFiboArray(int arr[]) {		// 배열을 피보나치수열로 저장하는 setFiboArray함수, 정수형 배열을 매개변수로 받는다
	int i;						// 반복문에서 사용할 변수 
	int temp1 = 0;				// 피보나치수열의 1항이자 2,3,4...항으로 바뀌는 임시변수1 선언 및 초기화
	int temp2 = 1;				// 피보나치수열의 2항이자 3,4,5...항으로 바뀌는 임시변수2 선언 및 초기화
	int sum = temp1 + temp2;	// 피보나치수열의 다음 항 선언, 1항과 2항의 합으로 초기화

	arr[0] = temp1;		// 피보나치수열의 1,2항을 각 배열의 index에 저장
	arr[1] = temp2;

	for (i = 2; i < SIZE; i++) {		// 반복문을 통해 배열을 피보나치수열로 저장
		sum = temp1 + temp2;		// 피보나치수열의 다음항은 이전의 두 항을 더한 값으로 초기화
		arr[i] = sum;		// 그 i번째 항을 배열의 i번때 index에 저장

		temp1 = temp2;		// (i-2)번째 항을 (i-1)번째 항으로 초기화
		temp2 = sum;		// (i-1)번째 항을 (i)번째 항으로 초기화
	}
}

void printArray(int arr[]) {		// 배열을 출력하는 printArray함수, 정수형 배열을 매개변수로 받는다.
	int i;					// 반복문에서 사용할 변수
	printf("출력결과 > \n[ ");		// 배열의 출력
	for (i = 0; i < SIZE; i++) {		// 반복문을 이용 배열출력
		printf("%d ", arr[i]);
	}
	printf("]\n");		// 출력이 끝나면 줄바꿈
}