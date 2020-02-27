/*	실습 6 : printSize.c
	작성일 : 2019. 03. 14
	작성자 : 20165153 이재성
	프로그램 설명 : 너비,높이,깊이를 변수로 선언하고 값을 저장하고 부피를 계산하고 출력하는 프로그램을 작성하시오.(출력에서의 숫자는 변수의 출력 값)
*/

#include <stdio.h>	// 전처리기

int main(int argc, char* argv[]) {		// main 함수

	int width	= 2;	// 2의 값을 가진 int형 변수 너비
	int height	= 3;	// 3의 값을 가진 int형 변수 높이
	int depth	= 2;	// 2의 값을 가진 int형 변수 깊이
	int volume	= width * height * depth;	// 너비 * 높이 * 깊이의 값인 부피

	printf("너비 %d 높이 %d 깊이 %d의 부피는 %d입니다.\n", width, height, depth, volume);	// 지정된 너비, 높이, 깊이 그리고 계산된 부피를 출력하는 출력문

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}
