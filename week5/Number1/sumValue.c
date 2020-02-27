/*	실습 1 : sumValue.c
	작성일 : 2019. 03. 28 ~ 03. 31
	작성자 : 20165153 이재성
	프로그램 설명 : 두 수의 합을 계산하는 함수를 선언 및 호출하는 프로그램
*/

#include <stdio.h>		// 전처리기

int sumTwo(int a, int b);		// main함수 선언 이전에 함수를 선언, 컴파일러에게 알려줌

int main(int argc, char* argv[]) {		// main 함수

	int x = 10;		// 정수형 변수 x에 10을 저장
	int y = 5;		// 정수형 변수 y에 5를 저장
	int value = 0;	// 두 수의 합을 저장할 변수 선언 및 초기화

	value = sumTwo(x, y);  // sumTwo 함수를 호출하여 value에 저장
	printf("두 수의 합은 : %d\n", value);		// value에 저장된 수를 출력

	system("pause");  // 출력창 확인
	return 0;		// 0을 반환
}

int sumTwo(int a, int b) { // 정수형을 반환하는 sumTwo 함수,지역변수로는 정수형 변수 두개가 있다.
	
	int result = 0; // 두 값의 합을 저장할 변수 선언 및 최기화
	result = a + b; // 지역변수에 저장될 두 값의 합을 result에 저장

	return result; // result 값을 반환
}
