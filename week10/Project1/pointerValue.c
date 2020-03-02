/*	실습 1 : pointerValue.c
	작성일 : 2019. 05.06 (실작성일 05.02~ 였으나 파일 증발)
	작성자 : 20165153 이재성
	프로그램 내용 : 리턴값이 없이 포인터를 이용해서 결과를 결정하는 프로그램
			9주차 실습 8번과 동일.
*/

#include <stdio.h>

void mul(double* , double* , double* );		// 포인터를 매개변수로 받아 곱을 구하는 void형 mul함수

int main(int argc, char* argv[]) {			//main함수
	double res, a, b;						// main함수에서 사용할 실수형 변수 선언 
	printf("두 개의 숫자를 입력하세요 : ");	// 값을 입력해달라고 출력 
	scanf_s("%lf %lf", &a, &b);				// 입력받은 값을 a와 b에 저장, 실수형이므로 %lf 사용, scanf_s로 오류를 출력하지 않게함
	mul(&res, &a, &b);						// mul 함수 호출로 res값을 저장한다.
	printf("두 수의 곱은 : %.2lf\n", res);	// mul함수를 통해 얻은 res값을 출력, 소수점아래 2자리까지 출력 위해 %.2lf 사용

	system("pause");			// 출력창 확인
	return 0;					// 0을 반환
}

void mul(double* rp, double* ap, double* bp) {	// 포인터를 매개변수로 받아 곱을 구하는 void형 mul함수
	
	*rp = *ap * *bp;

	/*	rp, ap, bp 에는 각각 res, a, b의 주소가 저장되어 있고
		역참조 연산자 *를 통해 main함수에서 사용하는 변수들의 주소를 통해 연산을 진행
		따로 값을 반환하지 않아도 res의 주소가 저장된 rp를 통해 res의 값이 새로 저장되므로
		void형의 함수가 된다.
	*/
}