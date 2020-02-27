/*	실습 5 : randArray.c
	작성일 : 2019. 04. 10 ~ 04. 12
	작성자 : 2016153 이재성
	프로그램 설명 : 난수를 이용해 서로 다른 값(인덱스)를 가진 6개 배열을 저장하고 출력하는 프로그램
*/

#include <stdlib.h>		// 랜덤함수를 위한 전처리문
#include <time.h>		// time을 위한 전처리문
#include <stdio.h>		// 전처리문

#define SIZE 6		// define문으로 매크로 상수 SIZE를 6으로 지정

void  randomArray(int arr[]);		// 랜덤값으로 배열을 저장하는 randomArray함수 선언
void printArray(int arr[]);			// 배열을 출력하는 printArray함수 선언

int main(int argc, char* argv[]) { // main 함수

	int array[SIZE];		// 크기가 6인 배열 선언 
	srand(time(NULL));  // srand를 통해 난수의 범위지정, 범위를 현재 시간으로 지정
	
	randomArray(array);		// randomArray함수로 배열을 랜덤값으로 초기화
	printArray(array);		// printArray함수로 배열을 출력

	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

void  randomArray(int arr[]) {		// 배열을 랜덤값으로 초기화하는 randomArray함수 배열을 매개변수로 받는다.
	int i;			// 반복문에서 사용할 변수
	int j;			// 반복문에서 사용할 변수
	
	for (i = 0; i < SIZE; i++) {		// 배열의 크기만큼 반복
		arr[i] = (rand() % 45) + 1;		// 1~45사이의 랜덤값을 배열에 저장
		for (j = 0; j < i; j++) {			// 매 선언된 index가 다른 index의 값과 같은지 검사하는 반복문
			if (arr[i] == arr[j]) {		// i번째 index의 값이 기존의 index들의 값과 같다면 
				printf("array[%d](=%d)가 중복되어 다시 생성합니다.\n", i, arr[i]);	 // 중복되는 값을 알려주고 
				i -= 1;		// i-1값을 i에 초기화함으로써 다시 arrat[i]에 랜덤값을 저장한다.
				break;		// 중첩반복문을 break로 끝내고 초기화된 i값을 가지고 다시 랜덤값을 배열에 저장하는 반복을 시작한다.
			}
		}
	}
}

void printArray(int arr[]) {		// 배열을 출력하는 printArray함수
	int i;			// 반복문에서 사용할 변수
	printf("서로 다른 정수 %d개의 배열 : \n [ ", SIZE);		// 서로 다른 크기 6의 배열 출력
	for (i = 0; i < SIZE; i++) {		// 배열의 크기만큼 반복
		printf("%d ", arr[i]);		// 각 배열의 index를 출력
	}
	printf("] \n");		// 반복이 끝나면 줄바꿈

}