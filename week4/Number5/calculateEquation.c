/*	실습 5 : calculateEquation.c
	작성일 : 2019. 03. 21
	작성자 : 20165153 이재성
	프로그램 설명 : 키보드로부터 2차 방정식의 계수 a,b,c를 실수로 입력받아 2차 방정식의 근을 계산,출력하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS // scanf 함수 사용에 있어 발생하는 경고를 보여주지 않도록 컴파일러에게 지시하는 전처리기 - 책에서 참조하였음.
#include <stdio.h>		// 전처리기
#include <math.h>		// 루트 계산을 위해 math 라이브러리 추가

int main(int argc, char*argv[]) {		// main 함수

	double a = 0;			// 실수형 변수 x^2항의 계수 a
	double b = 0;			// 실수형 변수 x항의 계수 b
	double c = 0;			// 실수형 변수 상수항의 계수 c 
	double result1 = 0;		// 결과 변수 선언
	double result2 = 0;		// 결과 변수 선언

	printf("2차 방정식 ax*x + bx + c의 판별식 D = b*b-4*a*c가 0보다 크게 입력해주세요.\n");
	// 판별식 D = b*b-4*a*c가 0이면 중근, 0보다 작은 경우 허근(허수)를 갖게 되므로 0보다 크게 입력받아야한다.
	printf("2차 방정식 ax*x + bx + c 의 계수 a를 입력해주세요 : \n"); // x*x항의 계수 a를 입력해달라고 출력
	scanf("%lf", &a);			// 입력받은 값을 a에 저장 
	
	printf("2차 방정식 ax*x + bx + c 의 계수 b를 입력해주세요 : \n"); // x항의 계수 b를 입력해달라고 출력
	scanf("%lf", &b);			// 입력받은 값을 b에 저장 

	printf("2차 방정식 ax*x + bx + c 의 계수 c를 입력해주세요 : \n"); // 상수항의 계수 c를 입력해달라고 출력
	scanf("%lf", &c);			// 입력받은 값을 c에 저장

	result1 = ( (-b) + sqrt(b * b  - 4 * a * c) ) / (2 * a); // 근의 공식에 의한 두 개의 결과를 각각 저장 
	result2 = ( (-b) - sqrt(b * b  - 4 * a * c) ) / (2 * a); 

	printf("방정식 %.2lfx*x + %.2lfx + %.2lf의 근 x = %.2lf ,%.2lf\n", a, b, c, result1, result2);
	// 입력받은 계수들로 계산된 근을 출력, 각각의 변수들이 실수형이므로 보기 편하게 하기위해 소수점 아래 2자리까지 출력위해 %.2lf 사용

	system("pause");	// 출력창 확인 
	return 0;			// 0을 반환
}