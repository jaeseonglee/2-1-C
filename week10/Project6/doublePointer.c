/*	실습 6 : doublePointer.c
	작성일 : 2019. 05.06 (실작성일 05.02~ 였으나 파일 증발)
	작성자 : 20165153 이재성
	프로그램 내용 : 이중 포인터를 이용해서 키보드로부터 정수를 입력받고 출력하는 프로그램
*/

#include <stdio.h>

int main(int argc, char* argv[]) {

	int value = 0;		// 정수형 변수 선언
	int	*p = &value;	// 정수형 포인터 선언 및 변수 value의 주소로 초기화
	int	**q = &p;		// 정수형 이중 포인터 선언 및 포인터 p의 주소로 초기화

	printf("정수형 변수를 입력해주세요 : ");	// 키보드로부터 정수를 입력해달라고 출력
	scanf_s("%d", &value);					// 입력받은 정수를 value의 주소를 통해 value에 저장
	printf("value 출력 : %p\n", &value);		// value의 주소를 출력, p,*q에도 &value가 저장되어있다.
	printf("value 출력 : %d\n\n", value);	// value를 출력한다.

	printf("정수형 값을 입력해주세요 : ");		// 새로 키보드로부터 정수를 입력해달라고 출력
	scanf_s("%d", p);							// 입력받은 정수를 p에 저장, p == &value이므로 %d사용
	printf("p 출력\t : %p\n", p);				// 포인터 변수 p 출력, value의 메모리상 주소를 출력한다.
	printf("*p 출력\t : %d\n", *p);				// 정수형 변수 *p 출력, 새로 입력받은 value를 출력한다.
	printf("value 출력 : %d\n\n", value);		// p를 통해 변경된 value를 출력

	printf("정수형 값을 입력해주세요 : ");		// 새로 키보드로부터 정수를 입력해달라고 출력
	scanf_s("%d", *q);							// 입력받은 정수를 p에 저장, *q == p == &value이므로 %d사용
	printf("*q 출력\t : %p\n", *q);				// 포인터 변수 *q 출력, value의 메모리상 주소를 출력한다.
	printf("**q 출력 : %d\n", **q);				// 정수형 변수 **q 출력, 새로 입력받은 value를 출력한다.
	printf("p 출력\t : %p\n", p);				// 포인터 변수 p 출력, value의 메모리상 주소를 출력한다.
	printf("*p 출력\t : %d\n", *p);				// 정수형 변수 *p 출력, 새로 입력받은 value를 출력한다.
	printf("value 출력 : %d\n\n", value);		// 새로 입력받은 value를 출력한다.

	system("pause");
	return 0;
}
