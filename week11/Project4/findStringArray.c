/*	실습 4 : findStringArray.c
	작성일 : 2019. 05. 09 ~ 05. 11
	작성자 20165153 이재성
	프로그램 설명 : 입력받은 임의의 문자열에 대해 문자열의 길이, 알파벳, 숫자, 특수기호의 개수를 출력하는 프로그램
*/

#define SIZE 100					// define문을 통해 SIZE를 100으로 지정
#include <stdio.h>					// 전처리문
#include <ctype.h>					// 문자처리함수를 포함한 전처리문 ctype.h

void stringInfoPrint(char str[]);		// 문자열의 길이,알파벳,숫자,특수기호의 개수를 출력하는 stringInfoPrint함수

int main(int argc, char* argv[]) {		// main함수
	char str[SIZE] = "";				//크기가 100인 문자열 str 선언 및 널 문자열로 초기화

	printf("문자열 입력 \t: ");		// 영문자 문자열을 입력해달라고 출력
	gets_s(str, sizeof(str));				// gets함수로 입력받은 문자열을 str에 저장
	printf("입력받은 문자열 : %s\n", str);	// 입력받은 문자열을 출력한다

	stringInfoPrint(str);			// stringInfoPrint함수 호출로 입력받은 문자열의 요소들의 개수를 출력

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}	

void stringInfoPrint(char str[]) {		// 문자열의 길이,알파벳,숫자,특수기호의 개수를 출력하는 stringInfoPrint함수
	int count = 0;				// 문자열의 길이를 저장할 변수 count 선언 및 초기화
	int alphaCount = 0;			// 문자열의 알파벳의 개수를 저장할 변수 alphaCount 선언 및 초기화
	int numberCount = 0;		// 문자열의 숫자의 개수를 저장할 변수 numberCount 선언 및 초기화
	int specialCount = 0;		// 문자열의 특수기호의 개수를 저장할 변수 specialCount 선언 및 초기화
	int i;					// 반복문에서 사용할 변수
	
	for (i = 0; i < SIZE; i++, count++) {// 반복함으로써 문자열의 길이를 새로 저장하고 SIZE만큼 반복하지만 0문자를 찾으면 반복종료	
		if (str[i] == '\0') {	 // 만약 문자열중 0 문자가 있다면
			break;				// 반복문을 빠져나가는 break로 종료
		}
		else if (isalpha(str[i])) {	// isalpha가 1을 반환하면(문자가 알파벳이라면)
			alphaCount++;			// 알파벳의 개수를 하나 증가시키고
			continue;				// 다시 반복한다.
		}
		else if (isdigit(str[i])) {	// isdigit이 1을 반환하면(문자가 숫자라면)
			numberCount++;			// 숫자의 개수를 하나 증가시키고
			continue;				// 다시 반복한다.
		} 
		else {			// 숫자와 알파벳 둘다 아니라면 (공백, !@#같은 기호가 포함된다.)
			specialCount++;		// 특수기호의 개수를 하나 증가키시고
			continue;			// 다시 반복한다.
		}
	}	// 반복문을 통해 얻은 변수들을 출력
	printf("문자열의 길이\t:%d\n", count);		// 반복문을 통해 저장된 count
	printf("알파벳의 개수\t:%d\n", alphaCount);	// alphaCount
	printf("숫자의 개수\t:%d\n", numberCount);	// numberCount
	printf("특수기호의 개수\t:%d\n", specialCount);	// specialCount의 개수를 출력한다.
}