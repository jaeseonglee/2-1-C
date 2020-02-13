/*  실습 3 : print_calc 프로젝트
	소스파일명 : calc.c
	작성일 : 2018. 3. 07
	작성자 : 이재성
	최종 수정일: 2018. 3. 07
	프로그램 버전 : printCalc v1.0
	프로그램 설명 : 간단한 연산수행과 결과값 출력 프로그램
*/

#include <stdio.h> // 전처리 부분

int main(int argc, char* argv[]) {

	int a = 10, b = 3;		// 정수
	float c = 10, d = 3;	// 실수
	float res1, res2, res3;
	
	res1 = a / b;			// 정수 나누기 정수 : 결과 = 3
	res2 = c / d;			// 실수 나누기 실수
							// 또는 실수 나누기 정수 : 결과 = 3.33
	res3 = (float)a / b;	// 실수를 계산 : 결과 = 3.33

	printf(" %6.2f\n", res1);	// 소수점 2자리 출력
	printf(" %6.2f\n", res2);	// 소수점 2자리 출력
	printf(" %6.2f\n", res3);	// 소수점 2자리 출력

	return 0;
}