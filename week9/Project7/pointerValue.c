/*	실습 7 : pointerValue.c
	작성일 : 2019. 04. 28
	작성자 : 20165153 이재성
	프로그램 설명 : 포인터를 이용한 값을 변경하는 프로그램 
*/

#include <stdio.h>				//전처리문

int main(int argc, char *argv[]) {		// main 함수
	int i = 10;							// 정수형 변수 i 선언 및 10 으로 초기화
	int *ptr = &i;						// 정수형 포인터 변수 ptr 선언 및 i의 주소를 저장
	*ptr = i + 20;						// 포인터 *ptr을 통해 i의 값에 20을 더한다.
	printf("i의 값은 : %d \n", i);		// 그렇게 증가된 i의 값을 출력
	i = i + 20;							// 직접 i 값에 20을 더한다.
	printf("i의 값은 : %d \n", *ptr);	// 다시 i 값을 출력
										// i와 *ptr 둘다 정수형 변수이기 때문에 %d 사용
	system("pause");			// 출력창 확인
	return 0;					// 0을 반환
}