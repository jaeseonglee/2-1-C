/*	실습 3 : coneVolume.c
	작성일 : 2019. 03. 28 ~ 03. 31
	작성자 :	20165153 이재성
	프로그램 설명 : 원뿔의 높이와 반지름을 입력받아 부피를 계산하는 함수를 선언 및 호출하는 프로그램
*/

#include <stdio.h>		// 전처리기
#define PI 3.141592		// PI의 값을 매크로 상수로 지정

double getVolume(double r, double h);  // 부피의 값을 구하는 함수, 컴파일러에게 알려줌
void printResult(double valueReult);  // 결과를 출력하는 함수, 컴파일러에게 알려줌

int main(int argc, char* argv[]) {  // main 함수

	double r = 0;		// 원뿔의 반지름 값, 실수형 변수 선언 및 초기화
	double h = 0;		// 원뿔의 높이 값, 실수형 변수 선언 및 초기화
	double result = 0;  // 결과값을 저장한 실수형 변수 선언 및 초기화 

	printf("원뿔의 반지름과 높이를 입력해주세요 : \n"); // 원뿔의 반지름과 높이입력해달라고 출력
	scanf_s("%lf %lf", &r, &h);	// 입력받은 값을 각각의 변수에 저장
	// scanf 대신에 scanf_s를 사용해서 오류가 나타나지 않게 한다.

	result = getVolume(r, h);	// getVolume 함수를 통해 얻은 값을 result에 저장

	printResult(result);		// 결과를 출력하는 함수

	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

double getVolume(double r, double h) { // 실수형을 반환하는 getVolume함수, 원뿔의 부피를 계산한다.
	return ( ( r * r * h * PI ) / 3.0 );
	// 지역변수를 통해 입력받은 반지름과 높이, 매크로 변수인 PI를 통해 원뿔의 부피를 구하고 그 값을 반환한다.
}

void printResult(double valueResult) { // 결과를 출력하는 printResult 함수
	printf("원뿔의 부피는 : %.2lf\n", valueResult); // 출력되는 값이 소수점 2자리까지 출력위해 .2, 실수 출력위해 %lf 사용
}