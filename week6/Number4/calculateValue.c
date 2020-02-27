/*	실습 4 : calculateValue.c
	작성일 : 2019. 04. 02 ~ 04. 06
	작성자 : 20165153 이재성
	프로그램 설명 : 값을 입력받아 주어진 수식을 계산하는 프로그램
*/

#include <stdio.h>		// 전처리문

int calc(int number);		// 수식을 계산하는 calc함수 선언

int main(int argc, int argv[]) {		 // main 함수

	int num = 0;		// 값을 입력받는 변수 선언 및 초기화

	printf("값을 입력해주세요 : ");		// 값을 입력해달라고 출력
	scanf_s("%d", &num);			// 입력받은 값을 num에 저장, scanf_s를 통해 오류를 출력하지 않음

	printf("결과 : %d\n", calc(num));		//결과를 calc 함수를 통해 반환하여 출력

	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

int calc(int number) {  // int형을 반환하는 calc 함수, 값을 입력받고 주어진 수식의 결과를 반환한다.
	
	int sum = 0;		// 수식의 값을 저장할 변수 선언 및 초기화
	int i;			// 반복문에서 사용될 변수

	for (i = 1; i <= number; i++) {		// 1부터 입력받은 number 만큼 반복한다.
		sum += (i * i + 1);		// (i의 제곱) +1 의 결과를  sum에 저장 
	}
	return sum;		// 반복문이 끝난 뒤의 sum값을 반환한다.
}