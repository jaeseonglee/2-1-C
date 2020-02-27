/*	실습 4 : payValue.c
	작성일 : 2019. 03. 28 ~ 03. 31
	작성자 : 20165153 이재성
	프로그램 설명 : 급여를 입력받아 계산하는 함수를 선언 및 호출하는 프로그램
*/

#include <stdio.h>		// 전처리기

int getIncomeTax(int pay1);				// 소득세를 계산하는 함수
int getLocalinhabitantsTax(int pay2);	// 주민세를 계산하는 함수
int getInsurnace(int pay3);				// 보험료를 계산하는 함수
int getPay(int pay4);					// 실 급여액을 계산하는 함수
void printResult(int pay5, int incomeTax, int localinhabitantsTax, int insurnace, int resultPay); // 모든 값을 출력하는 함수
 
// main 전에 함수들을 선언함으로써 컴파일러에게 알려줌

int main(int argc, char* argv[]) { //  main 함수

	int pay = 0;		// 총 급여를 저장할 정수형 변수 선언 및 초기화
	int result = 0;		// 결과 값을 저장할 정수형 변수 선언 및 초기화
	
	printf("월 급여를 입력해주세요 : ");		// 월 급여를 입력해달라고 출력
	scanf_s("%d", &pay);		// 입력받은 값을  pay에 저장, scanf_s를 사용해서 오류가 나타나지 않게 한다.
	
	result = getPay(pay);		// 실 급여액을 계산하는 함수를 통해 얻은 값을 result에 저장
	printResult(pay, getIncomeTax(pay), getLocalinhabitantsTax(getIncomeTax(pay)), getInsurnace(pay), result);  
	// 결과를 출력하는 함수를 통해 순서대로 총급여,소득세,주민세,보험료,지급액을 출력
	// 각각의 함수로 얻어지는 값을 통해 printResult호출 및 실행
	
	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

int getIncomeTax(int pay1) { // 소득세를 계산하여 반환하는 getIncomeTac함수 
	return pay1 / 10;		// 지역변수로 입력받은 값을 1/10로 계산하여 반환
}

int getLocalinhabitantsTax(int pay2) {	// 주민세를 계산하여 반환하는 getLocalinhabitantsTax함수
	return pay2 / 10; // 지역변수로 입력받은 값을 1/10로 계산하여 반환
					  // 지역변수로는 소득세를 받아 주민세를 계산한다.
}

int getInsurnace(int pay3) { // 보험료를 계산하여 반환하는 getInsurnace함수
	return (int) (pay3 / 100 * 5.89);  // 지역변수로 입력받은 값을 5.89%로 계산하여 반환 
}

int getPay(int pay4) { // 실급여액을 계산하는 getPay함수 , 다른 함수들이 반환하는 값을 사용하여 반환한다.
	return pay4 - getIncomeTax(pay4) - getLocalinhabitantsTax(getIncomeTax(pay4)) - getInsurnace(pay4);
			// 총급여에서 소득세,주민세,보험료를 빼서 그 값을 반환한다. 
}

void printResult(int pay5, int incomeTax, int localinhabitantsTax, int insurnace, int resultPay) {
	// 결과를 출력하는 printResult함수, 지역변수로 총급여,소득세,주민세,보험료,실급여액을 받는다.
	// 이때 지역변수들은 다른 함수를 통해 값을 받는다.
	printf("\t>> 총급여(+)	: %8d(원)\n", pay5);
	printf("\t>> 소득세(-)	: %8d(원)\n", incomeTax);
	printf("\t>> 주민세(-)	: %8d(원)\n", localinhabitantsTax);
	printf("\t>> 보험료(-)	: %8d(원)\n", insurnace);
	printf("\t>> 지급액	: %8d(원)\n", resultPay);
	// 줄을 맞추기 위해 %8d 사용하여 각각 정수형을 출력해준다.
}