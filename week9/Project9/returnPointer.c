/*	실습 9 : returnPointer.c
	작성일 : 2019. 04. 28
	작성자 : 20165153 이재성
	프로그램 설명 : 포인터를 리턴하는 함수를 쓰는 프로그램
*/

#include <stdio.h>				// 전처리문

double *mul(double *ap, double *bp);		// 정수형 포인터 mul 함수, 매개변수도 포인터이다.

int main(int argc, char *argv[]) {			// main 함수
	double a, b;							// 실수형 변수 a,b 선언
	double *res = NULL;						// 실수형 포인터 *res 선언 및 NULL(가리키는 변수가 없을 때) 로 초기화
	printf("두 개의 숫자를 입력하세요 : ");	// 두 개의 숫자를 입력해달라고 출력
	scanf_s("%lf %lf", &a, &b);				// 입력받은 값을 a와 b에 저장, 실수형이므로 %lf 사용, scanf_s로 오류를 출력하지 않게함
	res = mul(&a, &b);						// mul 포인터 함수 호출 및 res 값에 값을 실수형 값을 저장
	printf("두 수의 곱은 : %.2lf\n", *res);	// mul함수를 통해 얻은 res값을 출력, 소수점아래 2자리까지 출력 위해 %.2lf 사용

	system("pause");			// 출력창 확인
	return 0;					// 0을 반환
}

double *mul(double *ap, double *bp) { // 포인터는 함수 포인터로 사용가능함, 실수형 포인터 mul함수 
	double rp;				// 실수형 변수 rp 선언
	rp = *ap * *bp;
	return &rp;
	/* 변수 rp에 *ap와 *bp의 곱을 저장
		실습 8과는 달리 rp라는 변수에 저장하고
		rp의 주소를 가리키는 &rp를 반환함으로써 포인터 함수로 사용된다.
		하지만 mul함수의 지역변수를 반환시켰으므로 컴파일러는 이것을 경고로 출력한다.
	*/
}