/*	실습 6 : factorialValue.c
	작성일 : 2019. 03. 31
	작성자 : 20165153 이재성
	프로그램 설명 : 팩토리얼 계산을 재귀호출을 통해 출력하는 프로그램
*/

#include <stdio.h>		// 전처리기

long long factorial(int number);		// 재귀함수 factorial의 선언, 값이 순식간에 커지므로 long long형으로 사용

int main(int argc, char* argv[]) {	// main 함수
	int num = 0;			// 정수형 변수 num 선언 및 초기화
	long long fact = 0;		// 팩토리얼 결과값을 저장할 변수 fact 선언 및 초기화

	printf("계산할 팩토리얼의 크기를 입력하세요 : \n");  // 팩토리얼의 크기를 입력해달라고 출력
	scanf_s("%d", &num);			// 입력받은 정수를 num에 저장, scan_s를 통해 오류가 생기지 않게 함
	fact = factorial(num);			// factorial함수를 통해 계산된 팩토리얼 값을 fact에 저장 

	printf("1부터 %d 까지의 팩토리얼 값은 %lld입니다. \n", num, fact); // 입력된 정수의 팩토리얼 값을 출력, 변수 각각의 타입에 맞춰 %d 와 %lld(long long) 사용
		
	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

long long factorial(int number) {		// long long형 정수를 반환하는 factorial 재귀함수 
	if (number <= 1) {	//  재귀함수는 무한리 자기 자신을 호출해서는 안되기 때문에 종료조건이 필요하다
		return 1;	// 0!(0의 팩토리얼) == 1 이라는 조건을 만든다.
	}
	return number * factorial(number - 1); // 재귀함수의 형태, number-1 라는 값을 통해 자기 자신을 반복하여 계산한다.
}