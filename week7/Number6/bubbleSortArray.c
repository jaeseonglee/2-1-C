/*	실습 6 : bubbleSortArray.c
	작성일 : 2019. 04. 10 ~ 04. 12
	작성자 : 2016153 이재성
	프로그램 설명 : 주어진 배열을 버블정렬하고 출력하는 프로그램
*/

#include <stdio.h>		// 전처리문
#define SIZE 10			// define문으로 매크로 상수SIZE를 10으로 지정

void bubbleSort(int arr[]);		// 주어진 배열을 버블정렬하는 bubbleSort함수 선언
void arrayPrint(int arr[]);		// 배열을 출력하는 arrayPrint함수 선언

int main(int argc, char* argv[]) {		// main 함수
	
	int array[SIZE] = { 1,9,2,8,3,7,4,6,5,0 };		//	크기가 10인 배열 선언 및 각각의 값으로 초기화

	bubbleSort(array);		// bubbleSort함수로 배열을 버블정렬
	arrayPrint(array);		// arrayPrint함수로 배열을 출력
	
	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

void bubbleSort(int arr[]) {	// 배열을 버블정렬하는 bubbleSort함수, 정렬만 하기때문에 void형
	int i;		// 반복문에서 사용할 변수 i ,j
	int j;
	int temp;		// 정수형 값을 임시저장할 temp 선언

	// index와 바로 뒤의 index를 비교해서 자리를 바꾸는 버블 정렬
	for (i = 0; i < SIZE; i++) {		// 배열을 크기만큼 반복
		for (j = 0; j < SIZE-1; j++) {		// 배열의 크기-1만큼 반복 
			if (arr[j] > arr[j + 1]) {		// j항의 값이 j+1값보다 작으면 
				temp = arr[j + 1];			// 임의의 값에 arr[j+1]의 값을 저장
				arr[j + 1] = arr[j];		// arr[j+1] 값에 arr[j]의 값을 저장
				arr[j] = temp;				// arr[j] 값에 arr[j+1]의 값을 저장
			}								// 큰 값이 앞으로 가는 내림차순 정렬
								//if (arr[j] > arr[j + 1])
								//비교연산자의 방향을 바꾸면 오름차순
		}
	}
}

void arrayPrint(int arr[]) {  // 배열을 출력하는 arrayPrint함수
	int i;			//반복문에서 사용할 변수
	for (i = 0; i < SIZE; i++) {		// 배열의 크기만큼 반복
		printf("%d ", arr[i]);			// 각 배열의 index를 출력
	}
	printf("\n");		// 모든 배열 출력후 줄바꿈
}