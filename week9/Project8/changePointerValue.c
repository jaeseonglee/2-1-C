/*	실습 8 : changePointerValue.c
	작성일 : 2019. 04. 28
	작성자 : 20165153 이재성
	프로그램 설명 : 리턴 값이 포인터를 이용해서 갈과 값을 결정하는 프로그램
*/

#include <stdio.h>				// 전처리문

void mul(double *rp, double *ap, double *bp);		// 포인터의 합을 구하는 void형 mul함수

int main(int argc, char *argv[]) {			//main함수
	double res, a, b;						// main함수에서 사용할 실수형 변수 선언 
	printf("두 개의 숫자를 입력하세요 : ");	// 값을 입력해달라고 출력 
	scanf_s("%lf %lf", &a, &b);				// 입력받은 값을 a와 b에 저장, 실수형이므로 %lf 사용, scanf_s로 오류를 출력하지 않게함
	mul(&res, &a, &b);						// mul 함수 호출로 res값을 저장한다.
	printf("두 수의 곱은 : %.2lf\n", res);	// mul함수를 통해 얻은 res값을 출력, 소수점아래 2자리까지 출력 위해 %.2lf 사용

	system("pause");			// 출력창 확인
	return 0;					// 0을 반환
}

void mul(double *rp, double *ap, double *bp) {		// 매개변수 포인터들를 통해 값을 정하는 mul함수
	/*	*rp에는 &res, *ap에는 &a, *bp에는 &b 가 매개변수에 저장되어 각각의 main함수에서 사용되는
		변수의 주소를 저장하는 역할을 한다. 
		mul함수의 각 매개변수 포인터에는 main함수에서 사용하는 변수의 주소가 저장되었으므로 
		mul함수에 선언되지 않은 변수들의 계산을 포인터를 통해 값을 저장한다.				*/
	
	*rp = *ap * *bp;	

	/* 실제 계산은 &res = &a * &b 이 수행되고
	&a는 a의 주소, &b는 b의 주소가 저장되어 있다.
	그리고 *rp, *ap, *bp 는 각각 실수형 변수이므로 
	*rp라는 실수형 변수에 *ap 와 *bp 라는 변수의 곱으로 저장된다.
	*ap 와 *bp를 통해 a와 b의 값을 참조해서 식을 수행함으로써
	return을 사용하지 않는 void형으로 함수가 된다.
	*/

}