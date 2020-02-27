/*	실습 7 : scanExample.c
	작성일 : 2019. 03. 14
	작성자 : 20165153 이재성
	프로그램 설명 : 자료형에 따른 scanf 형식 지정자 사용
*/

#define _CRT_SECURE_NO_WARNINGS // scanf 함수 사용에 있어 발생하는 경고를 보여주지 않도록 컴파일러에게 지시하는 전처리기 - 책에서 참조하였음.
#include <stdio.h>		// 전처리기 

int main(int argc, char* argv[] ) {		// main 함수

	short	s = 0;;			// short형 변수 선언
	long	l = 0;			// long형 변수 선언, int형과 크기가 같다.
	unsigned 	u = 0;		// unsigned int형 변수 선언, unsigned int의 약자이다.

	printf("Enter a short number : ");		// short형 숫자를 입력해달라고 출력
	scanf("%hd", &s);						// 입력받은 short형 숫자를 변수 s에 대입
	printf("Enter a long number : ");		// long형 숫자를 입력해달라고 출력
	scanf("%ld", &l);						// 입력받은 long형 숫자를 변수 l에 대입
	printf("Enter a unsigned number : ");	// unsigned int형 숫자를 입력해달라고 출력
	scanf("%u", &u);						// 입력받은 unsigned int형 숫자를 변수 u에 대입

	printf("\n%hd %ld %u \n", s, l, u);		
	/*  입력받은 s,l,u 값을 출력한다. 이때 %hd(half d)는 short형을 나타내기 사용
		%ld는 long 값을 나타내기 위해 사용, %u는 부호없는 정수(unsigned)를 출력하기 위해 %u를 사용 
	*/
	
	system("pause");		// 출력창 확인
	return 0;				// 0 반환
}