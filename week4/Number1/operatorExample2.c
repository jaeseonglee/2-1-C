/*  실습 1 : operatorExample2.c
	작성일 : 2019. 03. 21
	작성자 : 20165153 이재성
	프로그램 설명 : 증감 연산자를 이용한 프로그램
*/

#include <stdio.h>	// 전처리기

int main(int argc, char*argv[]) {	// main 함수
	int a, b, c = 0;		// 정수형 변수 선언

	a = 20;		// a의 값을 20으로 초기화

	a++;		// 증가되기전 a의 값에 1을 증가시킨다.		a = 21
	++a;		// a값을 1 증가시킨다						a = 22
	b = a++;	// 증가되기 전의 a의 값을 b에 초기화, a의 값 1증가	b = 22 , a=23 
	c = ++a;	// a의 값 1증가,증가된 a의 값을 c에 초기화		a = 24, c = 24

	printf("a = %d, b = %d, c = %d\n", a, b, c); // 최종적인 a,b,c의 값 출력

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환	
}

