/*	실습 3 : pointerAddress.c
	작성일 : 2019. 05.06 (실작성일 05.02~ 였으나 파일 증발)
	작성자 : 20165153 이재성
	프로그램 내용 : main함수에서 변수를 각각 선언하고 printAddress함수를 통해 메모리상의 주소를 출력하는 프로그램
*/

#include <stdio.h>	// 전처리문

void printAddress(int* intPointer, double* douPointer, char* charPointer);		// 각각의 변수형을 매개변수로 받는 printAddress함수

int main(int argc, char* argv[]) {		// main 함수

	int intVaule;				// 정수형, 실수형, 문자형 변수 선언
	double douValue;			
	char charValue;

	printAddress(&intVaule, &douValue, &charValue);	// printAddress함수에 각각의 변수 전달

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void printAddress(int* intPointer, double* douPointer, char* charPointer) {	// 각각의 변수형을 매개변수로 받는 printAddress함수

	printf("정수 값의 주소 : %p\n", intPointer);	// main함수에서 받은 intValue의 주소를 출력
	printf("실수 값의 주소 : %p\n", douPointer);	// main함수에서 받은 douValue의 주소를 출력
	printf("문자 값의 주소 : %p\n", charPointer);	// main함수에서 받은 charValue의 주소를 출력

}