/*	실습 1 : print_value.c
	작성일 : 2019. 03. 14
	작성자 : 20165153 이재성
	프로그램 설명 : 상수와 변수의 출력
*/

#include <stdio.h>	// 전처리기

int main(int argc, char* argv[] ) {	// main 함수
	char ch = 'M';				// 문자형 변수
	int	iValue = 95;			// 정수형 변수
	double dValue = 3.14;		// 실수형 변수 (double형)
	float fValue = 1.414f;		// 실수형 변수 (float형)

	printf("\n [Print value] \n");				// [Print value] 출력
	printf("char : %c \n", 'W');				// 상수 W 문자 출력위해 %c 사용
	printf("char variable : %c \n", ch);		// 변수 ch 출력위해 %c 사용
	printf("int value : %d \n", 20);			// 상수 20 출력위해 %d 사용
	printf("int constants formula : %d \n", 10 + 20);	// 10+20의 결과 상수 30 출력위해 %d 사용
	printf("inr variable : %d \n", iValue);		// 변수 iValue 출력위해 %d 사용
	printf("double value : %lf \n", 3.1415);	// 상수 3.1415 출력위해 %lf사용, %lf는 printf 함수에서 float,double 상관없이 실수로 출력. 이하 동일
	printf("double variable : %lf \n", dValue);	// 변수 dValue 출력위해 %lf사용
	printf("float varialbe : %lf \n", fValue);	// 변수 fValue 출력위해 %lf사용
	printf("int variable : %d and float variable : %lf \n", iValue, fValue);	// 정수형 변수 iValue를 위해 %d 사용, 실수형 변수 fVaule를 위해 %lf 사용
	
	system("pause");	// 출력창 확인
	return 0;			// 0 반환
}
