/*	실습 5 : arrayMaxPointer.c
	작성일 : 2019. 05.06 (실작성일 05.02~ 였으나 파일 증발)
	작성자 : 20165153 이재성
	프로그램 내용 : 주어진 1차원 배열의 가장 큰 값의 메모리 주소를 반환하는 findMax함수를 통해 가장 큰 값을 출력하는 프로그램
*/


#include <stdio.h>		// 전처리문
#define SIZE 10			// define문으로 SIZE를 10으로 지정

int* findMax(int* arrayAddress);		// 가장 큰 값 출력 및 그 메모리 주소를 반환하는 findMax함수

int main(int argc, char argv[]) {		// main함수

	int array[SIZE] = { 12,22,4,54,17,1,19,44,29,37 };	// 1차원 배열 선언 및 초기화, 이 경우엔 SIZE를 생략가능하다.

	printf("주어진 배열의 가장 큰 값의 메모리 주소 : %p\n",findMax(array));	
	// 주어진 배열의 가장 큰 값(54)의 메모리상의 주소를 findMax함수를 통해 반환받아 출력한다.

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

int* findMax(int* arrayPointer) {	// 가장 큰 값 출력 및 그 메모리 주소를 반환하는 findMax함수
	int i;		// 반복문에서 사용할 변수
	int temp = arrayPointer[0];		// 임의의 정수형 변수 temp에 배열의 이름(배열의 시작주소이자 &array[0])으로 초기화한다.

	for (i = 1; i < SIZE; i++) {		// 주어진 배열에서 가장 큰 값을 찾는 반복문 두번째 인덱스부터 마지막 인덱스까지 반복
		if (temp < arrayPointer[i]) {	// temp값에 저장된 배열의 주소와 i번째 항의 주소와 값을 비교하여 
			temp = arrayPointer[i];		// 더 큰 값을 temp에 저장 
		}
	}
	printf("가장 큰 값 : %d\n", temp);	// 반복문 후 저장된 temp(array의 값)를 출력

	return &temp;	// 그리고 findMax함수를 temp(가장 큰 값)의 주소를 반환한다.
					// 이 경우엔 컴파일러가 지역변수인 temp를 반환하므로 경고를 나타낸다.
}