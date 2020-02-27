/*	실습 1 : oddEven.c
	작성일 : 2019. 04. 02 ~ 04. 05
	작성자 : 20165153 이재성
	프로그램 설명 : 반복문과 조건문을 이용하여 1부터 사용자가 입력한 숫자까지의 홀수의 합과 짝수의 합을 각각 출력하는 프로그램.
*/

#include <stdio.h>		//전처리기

int sum(int number, int value);		// sum함수 선언 

int main(int argc, char* argv[]) {		// main 함수

	int num = 0;			// 입력받을 값 num 선언 및 초기화

	printf("합을 출력할 마지막 값을 입력 하세요 : ");		// 숫자을 입력해달라고 출력
	scanf_s("%d", &num);					// 입력받은 숫자를 num에 저장, scanf_s를 통해 오류를 출력하지 않음

	printf("1부터 %d 까지의 \n", num);			// num 값과 함께 
	printf("짝수의 합 : %d\n",  sum(num, 2) );	// 1부터 num까지 짝수의 합을 sum 함수를 통해 반환된 값 출력
	printf("홀수의 합 : %d\n",  sum(num, 1));	// 1부터 num까지 홀수의 합을 sum 함수를 통해 반환된 값 출력
	printf("총합 : %d\n",  sum(num, 0));			// 1부터 num까지 총합을 sum 함수를 통해 반환된 값 출력

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}


int sum(int number, int value) {		// sum함수

	int i ;		//!			// for(반복)문에 쓰일 변수 i 선언
	int sumValue = 0;		// sum함수 반환에 쓰일 sumValue 선언 및 초기화
		
	if (value == 2) {			// 2 입력시 짝수의 합을 계산하는 조건문 
		for (i = 1; i <= number; i++) {		// 1부터 number까지
			if (i % 2 == 0) {				// 짝수인 숫자만
				sumValue += i;				// sumValue에 합을 저장하는 반복문
			}
		}
	}
	else if (value == 1) {		// 1 입력시 홀수의 합을 계산하는 조건문
		for (i = 1; i <= number; i++) {		// 1부터 number까지
			if (i % 2 != 0) {				// 홀수인 숫자만
				sumValue += i;				// sumValue에 합을 저장하는 반복문
			}
		}
	}
	else if (value == 0) {		// 0 입력시 총합을 계산하는 조건문
		for (i = 1; i <= number; i++) {		// 1부터 number까지
			sumValue += i;					// sumValue에 총합을 저장하는 반복문
		}
	}
	return sumValue;		// 조건문들에 따라 저장된 값을 반환, 이때 value가 0,1,2,가 아닌 값이 입력되면 초기값인 0을 반환한다.
}