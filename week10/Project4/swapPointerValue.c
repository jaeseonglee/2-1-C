/*	실습 4 : swapPointerValue.c
	작성일 : 2019. 05.06 (실작성일 05.02~ 였으나 파일 증발)
	작성자 : 20165153 이재성
	프로그램 내용 : swap함수를 통해 변수의 주소를 전달하여 두 변수의 값을 바꾸는 프로그램
*/

#include <stdio.h>		// 전처리문 

void swap(int* oneValue, int* anotherValue);	// 포인터를 매개변수로 가진 swap함수

int main(int argc, char* argv[]) {		// main함수
	int firstValue = 1234;		// 첫번째 정수형 변수 선언 및 비교를 위해 1234로 초기화
	int secondValue = 5678;		// 두번째 정수형 변수 선언 및 비교를 위해 5678로 초기화

	printf("%d %d\n", firstValue, secondValue);		// 두 변수에 저장된 값을 확인하기 위해 두 값을 출력

	swap(&firstValue, &secondValue);		// swap함수로 두 변수의 주소를 전달하여 두 값을 서로 바꿔준다.

	printf("%d %d\n", firstValue, secondValue);	// 다시 두 변수에 저장된 값을 확인하기 위해 두 값을 출력

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

void swap(int* oneValue, int* anotherValue) {	// 포인터를 매개변수로 가진 swap함수, 두 값을 바꾸는 기능을 한다.
	int temp;			// 임의의 정수형 변수 선언
	temp = *oneValue;	// 임의의 변수에 *oneValue 저장 , firstValue의 주소를 저장한다.
	*oneValue = *anotherValue;	// *oneValue에 *anotherValue 저장, secondValue의 주소를 저장한다.
	*anotherValue = temp;		// 다시 *another에 temp(firstValue의 주소)를 저장함으써 
								// main함수의 두 변수의 주소만으로 두 값을 서로 바꿔준다.
}