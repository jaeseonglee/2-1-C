/*	실습 2 : upperString.c
	작성일 : 2019. 05. 09 ~ 05. 11
	작성자 20165153 이재성
	프로그램 설명 :  (1) 키보드로부터 scanf함수를 이용해 영문자 문자열을 입력받고
					(2) 입력받은 문자열을 모두 대문자로 변경하는 함수
					(3) 문자열의 길이를 계산하는 함수를 작성 및 호출하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS		// scanf사용으로 오류를 출력하지 않게 지정
#define SIZE 100					// define문을 통해 SIZE를 100으로 지정
#include <stdio.h>					// 전처리문
#include <ctype.h>					// 문자열 대소문자 변환처리함수를 포함한 전처리문 ctype.h

void toUpperCase(char str[]);	// 입력받은 문자열을 모두 대문자로 변경하는 toUpperCase함수
int length(char str[]);			// 문자열의 길이를 계산하는 lenght함수

int main(int argc, char* argv[]) {		// main함수
	char str[SIZE] = "";		//	크기가 100인 문자열 str 선언 및 널 문자열로 초기화, char str[SIZE] = {0); 과 같다.

	printf("영문자 문자열 입력: ");		// 영문자 문자열을 입력해달라고 출력
	scanf("%s", str);			// scanf함수로 입력받은 문자열을 %s를 통해 str에 저장, 중간에 공백이 생기면 생기기 전까지의
								// 문자열만 저장한다. ex) Hello C -> HEllo까지만 저장
	printf("입력받은 문자열\t: %s\n", str);		// 입력받은 문자열을 출력한다.

	toUpperCase(str);			// toUpperCase함수 호출로 입력받은 문자열을 모두 대문자로 변경해준다.
	length(str);				// length함수 호출로 입력받은 문자열의 길이를 출력한다.
		
	system("pause");			// 출력창 확인
	return 0;					// 0을 반환
}

void toUpperCase(char str[]) {		// 입력받은 문자열을 모두 대문자로 변경하는 toUpperCase함수
	int i;			// 반복문에서 사용할 변수
	for (i = 0; i < SIZE; i++) {		// SIZE만큼 반복하지만 0문자를 만나면 종료하는 반복문
		str[i] = toupper(str[i]);		// toupper함수 호출로 문자열의 각 값마다 대문자로 변환하여 그 인덱스에 저장
		if (str[i] == '\0') {		// 만약 문자열중 0 문자가 있다면
			break;		// 반복문을 빠져나가는 break로 종료
		}
	}
	printf("변경 후 문자열\t: %s\n", str);		// 대문자로 변경된 str을 출력한다.
}

int length(char str[]) {	// 문자열의 길이를 계산하는 lenght함수
	int count = 0;			// 문자열의 길이를 저장하는 정수형 count 변수 선언 및 0으로 초기화
	int i;					// 반복문에서 사용할 변수
											// 반복할때마다 count++로 문자열의 길이를 증가시키는 반복문
	for (i = 0; i < SIZE; i++, count++)	{	// SIZE만큼 반복하지만 0문자를 만나면 종료한다.
		if (str[i] == '\0') {		// // 만약 문자열중 0 문자가 있다면
			break;			// 반복문을 빠져나가는 break로 종료
		}
	}
	printf("문자열의 길이\t: %d\n", count);		// 반복문을 통해 저장된 count의 값을 출력
}