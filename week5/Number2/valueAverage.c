/*	실습 2 : valueAverage.c
	작성일 : 2019. 03. 28 ~ 03. 31
	작성자 :	20165153 이재성
	프로그램 설명 : 두 값을 입력받아 평균을 계산하는 함수를 처리하는 프로그램
*/

#include <stdio.h>		// 전처리기

double getAverage(double value1, double value2); // 평균을 구하는 함수, 컴파일러에게 알려줌
void printResult(double valueResult);  // 결과를 출력하는 함수, 컴파일러에게 알려줌

int main(int argc, char* argv[]) {		// main 함수

	double num1 = 0;  // 두 실수형 변수 선언 및 초기화
	double num2 = 0;
	double result = 0;  // 결과 값을 저장할 실수형 변수 선언 및 초기화

	printf("두 실수형를 입력해주세요 : \n");  // 두 실수형 변수를 입력해달라고 출력
	scanf_s("%lf %lf", &num1, &num2);	// 입력 받은 실수형 변수를 각각의 변수에 저장
	// scanf 대신에 scanf_s(secure) 를 사용해서 오류가 나타나지 않게 한다.


	result = getAverage(num1, num2);   // 입력받은 두 변수를 함수를 통해 얻은 값을 result에 저장

	printResult(result); // 함수를 통해 결과 출력

	system("pause");	// 출력창 확인
	return 0;		// 0을 반환
}

double getAverage(double value1, double value2) {// 실수형을 반환하는 getAverage 함수, 지역변수로 실수형 변수 두 개가 있다.
	return (value1 + value2) / 2.0;		// 입력 받은 지역변수의 값을 더하고 둘로 나누어 평균을 구해 반환한다.
}										// 실수형으로 반환하기 위해 2.0으로 나눔

void printResult(double valueResult) {// printResult 함수, 지역변수를 받아 출력문을 실행하는 함수
	printf("두 실수의 평균 : %.2lf\n", valueResult); // 지역변수에 저장된 값을 받아 출력한다.
	// 출력되는 값이 소수점 2자리까지 출력위해 .2, 실수 출력위해 %lf 사용
}