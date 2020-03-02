/*	실습 4 : strucCalculPrint.c
	작성일 : 2019. 05. 20 ~ 05. 23
	작성자 : 20165153 이재성
	프로그램 설명 : 실습 3번에서 계산 및 출력부분을 함수로 재작성한 프로그램 
*/

#include <stdio.h>		//전처리문

typedef struct {		// typedef형 구조체 
	int numerator;		// 정수형 멤버 numerator 선언
	int denominator;	// 정수형 멤버 demoninator 선언
} FRACTION;				// 구조체형 이름 FRACTION 선언을 끝으로 구조체 선언, main밖에서 선언되었다.
						// typedef 정의할 때 구조체형 이름을 모두 대문자로 쓰기로 약속했다.

void multiplication(FRACTION f1, FRACTION f2);			// 분수의 곱을 계산하고 출력하는 multiplication 함수 

int main(int argc, char* argv[]) {		// main함수

	FRACTION fr1;		// 구조체형 fr1, fr2선언 
	FRACTION fr2;
	
	printf("Key first fraciton in the form of x/y: ");		// 첫번째 분수의 x,y를 입력해달라고 출력
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator);		// 입력받은 값은 fr1 변수를 이용해서 fr1의 멤버에 각각 저장
	printf("Key second fraciton in the form of x/y: ");		// 두번째 분수의 x,y를 입력해달라고 출력
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator);		// 입력받은 값은 fr2 변수를 이용해서 fr1의 멤버에 각각 저장
															//scanf_s를 이용해서 경고를 출력하지 않게함

	multiplication(fr1, fr2);				// multiplication함수 호출을 통해 입력받은 분수의 곱과 그 값을 출력한다.

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void multiplication(FRACTION f1, FRACTION f2) {		// 분수의 곱을 계산하고 출력하는 multiplication 함수
	FRACTION res;			// 구조체형 res 선언

	res.numerator = f1.numerator * f2.numerator;			// res의 멤버 numerator에 두 분수의 분자의 곱을 저장 
	res.denominator = f1.denominator * f2.denominator;	// res의 멤버 denominator에 두 분수의 분모의 곱을 저장 

	printf("\n The result of %d/%d * %d/%d is %d/%d\n",		// 입력했던 두 분자들을 출력, 첫번째,두번째 분자와 그 곱을 출력한다.
		f1.numerator, f1.denominator,					// 각각의 구조체 변수의 멤버들이 정수형이기 때문에 %d 사용
		f2.numerator, f2.denominator,
		res.numerator, res.denominator);
}
