/*	실습 6 : printSameString.c
	작성일 : 2019. 05. 11
	작성자 20165153 이재성
	프로그램 설명 : 두 개의 문자열을 입력받아 두 문자열이 같은지 확인하는 프로그램
*/

#define SIZE 100					// define문을 통해 SIZE를 50으로 지정
#include <stdio.h>				// 전처리문

int main(int argc, char* argv[]) {		// main 함수
	char str[SIZE] = "";			// 크기가 100인 문자열 str 선언 및 널 문자열로 초기화
	char sameStr[SIZE] = "";		// str와 같은지 비교할 문자열 sameStr 선언 및 널 문자열로 초기화
	int i;			// 반복문에서 사용할 변수

	printf("문자열 입력 : ");		// 문자열을 입력해달라고 출력
	gets_s(str, sizeof(str));		// gets_s함수로 입력받은 문자열을 str에 저장
	printf("문자열 확인 : ");		// 문자열을 확인한다고 출력하지만
	gets_s(sameStr, sizeof(sameStr));		// 실제로는 gets_s함수로 입력받은 문자열을 sameStr에 저장

	for (i = 0; i < SIZE; i++) {		// SIZE만큼 반복하지만 두 문자열의 각 문자가 다르거나 0문자를 만나면 종료
		if (str[i] != sameStr[i]) {		// 길이가 다르면 0문자와 비교하고, 그냥 문자가 달라도 조건문 실행
			printf("두 문자열은 다릅니다.\n");		// 하나라도 다르면 다르다고 출력한 뒤
			break;		// brak로 반복문을 빠져나온다.
		}
		if (str[i] == '\0') {	// str이 0문자 라는 뜻은 위의 if문을 통해 sameStr과 다른 값이 없었으므로
			printf("두 문자열은 같습니다.\n");	// 두 문자열이 같다고 출력하고
			break;				// 반복문을 빠져나가는 break로 종료
		}
	}

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}