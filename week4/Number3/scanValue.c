/*	실습 3 : scanValue.c
	작성일 : 2019. 03. 21
	작성자 : 20165153 이재성
	프로그램 설명 : 키보드로부터 값을 입력받아 주어진 다항식을 계산하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS // scanf 함수 사용에 있어 발생하는 경고를 보여주지 않도록 컴파일러에게 지시하는 전처리기 - 책에서 참조하였음.
#include <stdio.h>		// 전처리기 

int main(int argc, char* argv[]) {	// main 함수

	int x = 0;		// 입력받을 정수형 변수
	int result = 0;	// 결과 변수
	
	printf("정수 x를 입력해주세요 : ");		// 정수 x를 입력해달라고 출력
	scanf("%d", &x);						// 입력받은 정수를 x에 저장

	result = (x * x - 4) * (x * x - 10 * x + 21) + 100;		// 주어진 x에 따른 방정식의 결과를 저장
	printf("\n(x * x - 4) * (x * x - 10 * x + 21) + 100의 값은 %d 입니다.\n", result);		// 주어진 방정식의 형태와 x의 값에 따른 결과를 출력,정수 출력위해 %d 사용
	
	system("pause");	// 출력창 확인
	return 0;			// 0 반환
}