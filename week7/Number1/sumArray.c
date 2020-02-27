/*	실습 1 : sumArray.c
	작성일 : 2019. 04. 10 ~ 04. 12
	작성자 : 2016153 이재성
	프로그램 설명 :  10개의 정수형 배열을 선언과 동시에 초기화하고 배열의 값을 출력하고 배열의 총 합을 계산하고 출력하는 프로그램
*/

#include <stdio.h>		// 전처리문

#define SIZE 10			// define문으로 SIZE를 10으로 매크로 상수로 지정

void printArray(int arr[]);			// 배열을 출력하는 printArray함수 선언
int sumArray(int arr[]);			// 각 배열의 값의 합을 구하는 sumArray함수 선언

int main(int argc, char* argv[]) {			// main 함수

	int array[SIZE] = { 4,2,3,1,4,5,6,7,4,3 };		// 배열의 선언, 배열의 크기만큼 초기값을 지정한다

	printArray(array);					// printArray함수를 통해 배열을 출력
	printf("배열 합 : %d\n", sumArray(array));			// sumArray함수를 통해 반환된 값을 출력

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

void printArray(int arr[]) {		// 배열을 출력하는 printArray함수, 정수형 배열을 매개변수로 받는다.
	int i;		// 반복문에서 사용할 변수

	printf("출력결과 > \n");			// 배열 출력
	for (i = 0; i < SIZE; i++) {			// 배열의 출력은 반복문과 같이 사용한다(for)
		printf("배열[%d] = %d\n", i, arr[i]);  // 각 인덱스의 값을 출력한다.
	}
}

int sumArray(int arr[]) {			// 배열의 합을 구하는 sumArray함수, 정수형 배열을 매개변수로 받는다.
	int sum = 0;			// 배열의 총합을 저장할 sum 선언 및 초기화
	int i;			// 반복문에서 사용할 변수

	for (i = 0; i < SIZE; i++) {		// 각 배열의 원소들의 합을 sum에 더해서 저장한다.
		sum += arr[i];
	}
	return	sum;		// 반복문이 끝나면 sum을 반환
}