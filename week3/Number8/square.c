/*	실습 8 : square.c
	작성일 : 2019. 03. 14
	작성자 : 20165153 이재성
	프로그램 설명 : 두 정수를 입력받아서 사각형의 넓이를 계산하는 프로그램을 작성하시오.
*/

#define _CRT_SECURE_NO_WARNINGS // scanf 함수 사용에 있어 발생하는 경고를 보여주지 않도록 컴파일러에게 지시하는 전처리기 - 책에서 참조하였음.
#include <stdio.h>		// 전처리기

int main(int argc, char* argv[]) {	// main 함수

	int width	= 0;			// int형 변수 너비
	int height	= 0;			// int형 변수 높이
	int area	= 0;			// int형 변수 사각형의 넓이

	printf("사각형의 너비를 입력해주세요(단, 정수) : ");		// 사격형의 너비를 입력해달라고 출력
	scanf("%d", &width);									// 입력받은 너비를 int형 숫자를 변수 width에 대입
	printf("사각형의 높이를 입력해주세요(단, 정수) : ");		// 사격형의 높이를 입력해달라고 출력
	scanf("%d", &height);									// 입력받은 높이를 int형 숫자를 변수 height에 대입

	area = width * height; // 입력받은 너비와 높이로 넓이를 계산하여 초기화

	printf("\n너비 %d, 높이 %d를 가진 사각형의 넓이는 %d입니다.\n", width, height, area);		// 입력받은 너비와 높이로 넓이를 계산하여 출력

	system("pause");		// 출력창 확인
	return 0;				// 0 반환
}
