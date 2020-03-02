/*	실습 3 : upperLower.c
	작성일 : 2019. 05. 09 ~ 05. 11
	작성자 20165153 이재성
	프로그램 설명 :  (1) get함수를 통해 영문자 문자열을 입력받고
					(2) 입력받은 문자열을 대문자는 소문자로 소문자는 대문자로 변경하는 함수와
					(3) 문자열의 공백의 개수를 세기위한 함수와 
					(4) 문자열의 거꾸로 출력하는 함수를 작성 및 호출하는 프로그램
*/

#define SIZE 100					// define문을 통해 SIZE를 100으로 지정
#include <stdio.h>					// 전처리문
#include <ctype.h>					// 문자열 대소문자 변환처리함수를 포함한 전처리문 ctype.h

void toUpperLower(char str[]);		// 대문자는 소문자로 소문자는 대문자로 변경하는 toUpperLower함수
int spaceCount(char str[]);			// 문자열의 공백의 개수를 반환하는 spaceCount함수
void reversePrint(char str[]);		// 문자열을 거꾸로 출력하는 reversePrint함수

int main(int argc, char* argv[]) {		// main함수
	char str[SIZE] = "";		//크기가 100인 문자열 str 선언 및 널 문자열로 초기화

	printf("영문자 문자열 입력 : ");		// 영문자 문자열을 입력해달라고 출력
	gets(str, sizeof(str));					// gets함수로 입력받은 문자열을 str에 저장
	printf("입력받은 문자열\t: %s\n", str);	// 입력받은 문자열을 출력한다

	toUpperLower(str);						// 문자열을 toUpperLower함수로 대문자는 소문자로 소문자는 대문자로 바꿔준다.
	printf("변경 후 문자열\t: %s\n", str);	// 바뀐 문자열을 출력

	printf("문자열의 공백 수는 %d 입니다.\n",spaceCount(str));	// spaceCount가 반환하는 공백의 개수를 출력한다.

	toUpperLower(str);		// 대소문자가 바뀐 기존 문자열을 다시 바꿔주고
	reversePrint(str);		// reversePrint함수로 문자열을 거꾸로 출력한다.

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

void toUpperLower(char str[]) {		// 대문자는 소문자로 소문자는 대문자로 변경하는 toUpperLower함수
	int i;				// 반복문에서 사용하는 변수
	for (i = 0; i < SIZE; i++) {	// SIZE만큼 반복하는 반복문
		if (isupper(str[i]) ) {		// isUpper가 1을 반환하면(문자가 대문자라면)
			str[i] = tolower(str[i]);	// 그 문자를 tolower를 통해 소문자로 바꿔준다.
		}
		else if (islower(str[i])) {	// islower가 1을 반환하면(문자가 소문자라면)
			str[i] = toupper(str[i]);	// 그 문자를 toUpper를 통해 대문자로 바꿔준다.
		}
		else if (str[i] == '\0') {		// 만약 문자열중 0 문자가 있다면
			break;		// 반복문을 빠져나가는 break로 종료
		}
	}
}

int spaceCount(char str[]) {		// 문자열의 공백의 개수를 반환하는 spaceCount함수
	int count = 0;		// 공백의 개수를 저장할 count 변수 선언 및 0으로 초기화
	int i;				// 반복문에서 사용할 변수
	for (i = 0; i < SIZE; i++) {	// SIZE만큼 반복하는 반복문
		if (str[i] == '\ ') {		// 문자가 '\ '(역슬래시와 스페이스)공백과 같다면
			count++;			// count를 증가시키고 
			continue;			// 다시 반복한다.
		}
		if (str[i] == '\0') {		// 만약 문자열중 0 문자가 있다면
			break;		// 반복문을 빠져나가는 break로 종료
		}
	}
	return count;		// 반복문이 끝나면서 결정된 count값을 반환한다.
}

void reversePrint(char str[]) {		// 문자열을 거꾸로 출력하는 reversePrint함수
	int i;			//반복문에서 사용할 변수
	printf("문자열을 거꾸로 출력: ");		// 문자열을 거꾸로 출력한다고 출력
	for (i = SIZE-1; i >= 0; i--) {		// SIZE만큼 반복하는 반복문, 반복문의 조건식을 살짝 바꾸어 맨 마지막의 인덱스부터 계산한다.
		if (str[i] == '\0') {		// 만약 문자열중 0문자가 있다면
			continue;		// continue를 통해 다시 반복한다.
		} 
		else {		// 0 문자가 아닌 문자는 
			printf("%c", str[i]);	// 그 문자만 출력해준다.
		}							// 0문자가 아닌 문자를 만날 때는 마지막 문자를 만나는 것이므로  
	}								// 결과적으로 거꾸로 문자열을 나열할 수 있다.
	printf("\n");					// 반복문에서 모든 출력이 끝나면 줄바꿈해준다.
}