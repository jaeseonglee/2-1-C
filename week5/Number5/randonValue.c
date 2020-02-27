/*	실습 5 : randomValue.c
	작성일 : 2019. 03. 28 ~ 03. 31
	작성자 : 20165153 이재성
	프로그램 설명 : 정수를 입력받아 그 정수 사이의 랜덤값을 출력하는 함수를 선언, 호출하는 프로그램
*/

#include <stdlib.h>		// 랜덤함수를 위한 전처리문
#include <time.h>		// time을 위한 전처리문
#include <stdio.h>		// 전처리기
	
int getRandom(int num);		// 함수 선언

int main(int argc, char* argv[]) {		//main 함수

	int value = 0;		//	정수형 변수

	srand(time(NULL));		// srand를 통해 난수 생성의 범위 지정,	범위가 항상 바뀌게 하기 위해 현재 시간으로 지정
	printf("정수 범위를 결정하세요 : 1 ~ \n");		// 정수 범위를 입력해달라고 출력
	scanf_s("%d", &value);			// 입력받은 정수를 value에 저장
	
	value = getRandom(value);		// 1부터 value 까지의 랜덤값을 value에 저장

	printf("입력된 범위 중 결정된 랜덤값은 %d입니다.\n", value);	// value 값 출력위해 %사용, 출력

	system("pause"); // 출력창 확인
	return 0;		// 0을 반환
}

int getRandom(int num) { // 랜덤 값을 반환하는 getRandom함수, 입력받은 값을 통해 출력값을 달리한다.
	return rand(num) % num + 1; /*	 랜덤값을 반환하는 rand 함수를 통해 랜덤값을 얻고,
									 나머지가 0일 수도 있어서 +1을 해주고 그 값을 반환
									 ex) 10%10 == 0 이므로 0을 반환하기 때문에 +1을 하도록 하자 */
}