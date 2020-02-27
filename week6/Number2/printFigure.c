/*	실습 2 : printFigure.c
	작성일 : 2019. 04. 02 ~ 04.06
	작성자 : 20165153 이재성
	프로그램 설명 : 높이와 너비를 입력받아 도형들을 출력하는 프로그램
*/

#include <stdio.h>		// 전처리기
														// 출력만 하기때문에 void형	
void printRect(int height, int width);					// 사각형 모양을 출력하는 함수	 선언
void printRightAngledTriangle(int height, int width);	// 직각삼각형 모양을 출력하는 함수 선언
void printIsoscelesTriangle(int height, int  width);	// 이등변삼각형 모양을 출력하는 함수 선언
void printInvertedTriangle(int height, int width);		// 역삼각형 모양을 출력하는 함수 선언

/* printRightAngledTriangle함수, printIsoscelesTriangle함수, printInvertedTriangle함수에서 실제로 너비(width)값이
	사용되지 않으나, 일관성을 위해 지역변수로 사용
*/


int main(int argc, char* argv[]) {		// main 함수
	
	int heightValue = 0;		// 입력받을 높이의 값 heightValue 선언 및 초기화
	int widthValue = 0;			// 입력받을 높이의 값 widthValue 선언 및 초기화

	printf("도형의 높이 : ");		// 높이를 입력해달라고 출력
	scanf_s("%d", &heightValue);// 입력받은 높이를 heightValue에 저장, scanf_s를 통해 오류를 출력하지 않음
	printf("도형의 너비 : ");		// 너비를 입력해달라고 출력
	scanf_s("%d", &widthValue); // 입력받은 높이를 widthValue에 저장, scanf_s를 통해 오류를 출력하지 않음

	printf("사각형 \n");			// 사각형 출력
	printRect(heightValue, widthValue);	// printRect함수를 통해 사각형 모양 출력

	printf("직각삼각형 \n");		// 직각삼각형 출력
	printRightAngledTriangle(heightValue, widthValue); // printRightAngledTriangle함수를 통해 직각삼각형 모양 출력

	printf("이등변삼각형 \n");	// 이등변삼각형 출력
	printIsoscelesTriangle(heightValue, widthValue); // printIsoscelesTriangle함수를 통해 이등변삼각형 모양 출력

	printf("역삼각형 \n");		// 역삼각형 출력
	printInvertedTriangle(heightValue, widthValue); // printInvertedTriangle함수를 통해 역삼각형 모양 출력

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void printRect(int height, int width) {		// 사각형 모양을 출력하는 printRect 함수, 출력만 하기때문에 void형
	int i;		// 반복문에서 사용할 변수, 반복문앞에 선언한다.
	int j;		// 반복문에서 사용할 변수
	for (i = 0; i < height; i++) {		// 입력받은 height만큼 반복하는 반복문
		for (j = 0; j < width; j++) {	// 입력받은 width만큼 "*"를 출력하는 반복문
			printf("*");			// 매 반복마다 *을 출력한다.
		}
		printf("\n");		// 중첩 반복문이 끝날때마다 줄바꿈
	}
}

void printRightAngledTriangle(int height, int width) {	// 직각삼각형 모양을 출력하는 printRightAngledTriangle함수, 출력만 하기 때문에 void형
	int i;	// 반복문에서 사용
	int j;	// 반복문에서 사용
	for (i = 0; i < height; i++) { // 입력받은 height만큼 반복하는 반복문, 실제로는 너비(width)값이 쓰이지 않는다.
		for (j = 0; j <= i; j++) { // 직각삼각형 모양을 출력하는 반목문 , j가 i만큼 반복한다.
			printf("*");		 // 매 반복마다 *을 출력한다.
		}
		printf("\n");		// 중첩 반복문이 끝날때마다 줄바꿈
	}

}

void printIsoscelesTriangle(int height, int  width) {  // 이등변삼각형 모양을 출력하는 printIsoscelesTriangle함수, 출력만 하기 때문에 void형
	int i;	// 반복문에서 사용
	int j;	// 반복문에서 사용
	for (i = 0; i < height; i++) {		// 입력받은 height만큼 반복, 실제로는 width 값이  쓰이지 않는다.
		/*	   *    높이 4 일 때의 예시. 아래 반복문에서는      * 
			  ***	오른쪽의 삼각형처럼 앞의 *앞의 빈칸,		** *
			 *****		앞쪽의 * 이렇게 계산한다.			   *** **	
		    *******		뒤쪽의 * 이렇게 계산한다.			  **** ***
		
				i의 값이 커질 때마다 이등변삼각형의 밑변이 늘어난다.
		*/

		for (j = 1; j < height - i; j++) {  // 앞쪽의 *의 앞의 빈칸을 출력하는 반복문
			printf(" ");			// height가 클수록 빈칸을 많이 출력, i의 값이 커질 때마다 출력횟수가 줄어든다.
		}
		for (j = 0; j <= i; j++) {		// 앞쪽의 *을 출력하는 반복문
			printf("*");			// i+1만큼 *을 출력, i의 값이 커질수록 많이 출력한다.
		}
		for (j = 0; j < i; j++) {		// 뒤쪽의 *을 출력하는 반복문
			printf("*");			// i만큼 *을 출력, i의 값이 커질수록 많이 출력한다.
		}
		printf("\n");		// 중첩반복문이 끝날때마다 줄바꿈
	}
}

void printInvertedTriangle(int height, int width) {  // 역삼각형 모양을  printInvertedTriangle함수, 출력만 하기 때문에 void형
	int i;	// 반복문에서 사용
	int j;	// 반복문에서 사용

	for (i = 0; i < height; i++) { // 입력받은 height만큼 반복, 실제로는 width 값이  쓰이지 않는다.
	/*	   *******	 높이 4 일 때의 예시. 아래 반복문에서는     **** ***
			*****	오른쪽의 삼각형처럼 앞의 *앞의 빈칸,		  *** **
			 ***		앞쪽의 * 이렇게 계산한다.			       ** *
			  *			뒤쪽의 * 이렇게 계산한다.					*

				i의 값이 커질 때마다 역삼각형의 밑변(윗변)이 늘어난다.
	*/
		for (j = 0; j < i; j++) {	// 앞쪽의 *의 앞의 빈칸을 출력하는 반복문
			printf(" ");			// i의 값이 커질 때마다 출력횟수가 늘어난다.
		}
		for (j = 1; j <= height - i; j++) {	// 앞쪽의 *을 출력하는 반복문
			printf("*");				// height가 클수록 많이 *을 출력, i의 값이 커질수록 적게 출력한다.
		}
		for (j = 1; j < height - i; j++) {	// 뒤쪽의 *을 출력하는 반복문
			printf("*");			// height가 클수록 많이 *을 출력, i의 값이 커질수록 많이 출력하고 바로 위의 반복문보다 한번 적게 반복한다.
		}
		printf("\n");			// 중첩반복문이 끝날때마다 줄바꿈
	}
} 