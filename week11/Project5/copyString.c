/*	실습 5 : copyString.c
	작성일 : 2019. 05. 11
	작성자 20165153 이재성
	프로그램 설명 : 문자열을 다른 배열에 복사하는 프로그램
*/

#define SIZE 50					// define문을 통해 SIZE를 50으로 지정
#include <stdio.h>				// 전처리문

int main(int argc, char argv[]) {	// main함수
	char* str = "copy string";		// 문자 포인터 배열 str 선언 및 "copy string"이라는 문자열로 초기화
	char dest[SIZE];				// 문자열을 복사할 배열 dest 선언
	int i;		// 반복문에서 사용할 변수

	for (i = 0; i < SIZE; i++) {	// SIZE만큼 반복하지만 0문자를 만나면 종료하는 반복문
		dest[i] = str[i];			// 배열의 인덱스 마다 문자 포인터 배열을 순서대로 저장
		if (str[i] == '\0') {		// str이 0문자라면
			break;					// 반복문을 break로 빠져나온다.
		}
	}

	printf("문자열 : %s\n", str);			// 기존 문자열과
	printf("복사된 배열 : %s\n", dest);		// 복사한 배열을 둘다 출력해줌으로써 반복문이 잘 수행됬는지 확인
	
	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}