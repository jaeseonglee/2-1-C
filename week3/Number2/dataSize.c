/*	실습 2 : dataSize.c
	작성일 : 2019. 03 .14
	작성자 : 20165153 이재성
	프로그램 설명 : sizeof 연산자를 이용한 각 자료형의 크기 확인
*/

#include <stdio.h>	// 전처리기

int main(int argc, char* argv[]) {	// main 함수
	
	char ch = 'A';		// 문자형 변수
	int i = 65;			// 정수형 변수
	double d = 3.14;	// 실수형 변수

	printf("\n [THE SIZE OF DATATYPE ] \n");		// [THE SIZE OF DATATYPE ] 출력
	printf("char : %d\n", sizeof(char));			// 자료형 char의 크기를 출력위해 %d 사용, sizeof가 정수형이기 때문. 이하 같은 이유
	printf("char ch = \'A\': %d\n", sizeof(ch));	// 변수 ch의 크기를 출력
	printf("int : %d\n", sizeof(int));				// 자료형 int의 크기를 출력
	printf("int i = 65 : %d\n", sizeof(i));			// 변수 i의 크기를 출력
	printf("short int : %d\n", sizeof(short int));	// 자료형 short int의 크기를 출력
	printf("long int : %d\n", sizeof(long int));	// 자료형 long int의 크기를 출력
	printf("float : %d\n", sizeof(float));			// 자료형 float의 크기를 출력
	printf("double : %d\n", sizeof(double));		// 자료형 double의 크기를 출력
	printf("double d = 3.14: %d\n", sizeof(d));		// 변수 d의 크기를 출력
	printf("long double : %d\n", sizeof(long double));	// 자료형 long double의 크기를 출력
	printf("string \'Hello\' : %d\n", sizeof("Hello"));	// "Hello"의 크기를 출력, hello의 크기에 \0 까지 출력 -> 6
	printf("default constant 1 : %d\n", sizeof(7));		// 상수 7의 크기를 출력, 그러나 정수형이기 때문에 int형의 크기인 4(4byte)로 출력
	printf("default constant 2 : %d\n", sizeof(10.12)); // 상수 10.12의 크기를 출력, 그러나 실수형이기 때문에 double형의 크기인 8(8byte)로 출력

	system("pause");	// 출력창 확인
	return 0;			// 0 반환
}

