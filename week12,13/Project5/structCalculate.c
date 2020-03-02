/*	실습 5 : strucCalculate.c
	작성일 : 2019. 05. 20 ~ 05. 23
	작성자 : 20165153 이재성
	프로그램 설명 : 실습 3번에서 계산부분을 함수로 재작성하고 이때 구조체 포인터를 사용하는 프로그램
*/

#include <stdio.h>		//전처리문

typedef struct {		// typedef형 구조체 
	int numerator;		// 정수형 멤버 numerator 선언
	int denominator;	// 정수형 멤버 demoninator 선언
} FRACTION;				// 구조체형 이름 FRACTION 선언을 끝으로 구조체 선언, main밖에서 선언되었다.
						// typedef 정의할 때 구조체형 이름을 모두 대문자로 쓰기로 약속했다.

void multiplication(FRACTION* f1, FRACTION* f2, FRACTION* res);		// 분수의 곱을 계산하는 multiplication 함수, 구조체 포인터를 변수로 갖는다.

int main(int argc, char* argv[]) {		// main함수

	FRACTION fr1;		// 구조체형 fr1, fr2, res 선언 
	FRACTION fr2;
	FRACTION res;

	printf("Key first fraciton in the form of x/y: ");		// 첫번째 분수의 x,y를 입력해달라고 출력
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator);		// 입력받은 값은 fr1 변수를 이용해서 fr1의 멤버에 각각 저장
	printf("Key second fraciton in the form of x/y: ");		// 두번째 분수의 x,y를 입력해달라고 출력
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator);		// 입력받은 값은 fr2 변수를 이용해서 fr1의 멤버에 각각 저장
															//scanf_s를 이용해서 경고를 출력하지 않게함

	multiplication(&fr1, &fr2, &res);		// multiplication함수 호출로 두 분수를 곱한다. 구조체의 위치을 전달하기 위해 주소로 전달한다.

	printf("\n The result of %d/%d * %d/%d is %d/%d\n",		// 입력했던 두 분자들을 출력, 첫번째,두번째 분자와 그 곱을 출력한다.
		fr1.numerator, fr1.denominator,					// 각각의 구조체 변수의 멤버들이 정수형이기 때문에 %d 사용
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);


	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void multiplication(FRACTION* f1, FRACTION* f2, FRACTION* res) {		// 분수의 곱을 계산하고 출력하는 multiplication 함수,  구조체 포인터를 변수로 갖는다.

	(*res).numerator = (*f1).numerator * (*f2).numerator;	// res의 멤버 numerator에 두 분수의 분자의 곱을 저장 
	res->denominator = f1->denominator * f2->denominator;	// res의 멤버 denominator에 두 분수의 분모의 곱을 저장 
			
	// 구조체의 멤버로 역참조하여 식을 계산한다. (*f1).numerator를 축약시킨 형태가 f1->numerator 이다.					
}
