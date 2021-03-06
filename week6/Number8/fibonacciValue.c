/*	실습 8 : fibonacciValue.c
	작성일 : 2019. 04. 06
	작성자 : 20165153 이재성
	프로그램 설명 : 피보나치 수열을 출력하는 프로그램, 피보나치 수열은 첫번 째의 항의 값이 0이고 두번째의 항의 값이 1일때 
				이후의 항들은 이전의 두 항을 더한 값으로 이루어지는 수열을 말한다.
*/

#include <stdio.h>			// 전처리문

int main(int argc, char* argv[]) {		//  main 함수

	int num = 0;		// 피보나치수열의 항을 저장할 변수 선언 및 초기화
	int result = 0;		// 피보나치수열 값을 저장할 변수 선언 및 초기화
	
	int temp1 = 0;		// 피보나치수열의 1항이자 2,3,4항으로 바뀌어가는 임시 변수1 선언 및 초기화
	int temp2 = 1;		// 피보나치수열의 2항이자 3,4,5항으로 바뀌어가는 임시 변수2 선언 및 초기화
	int sum = temp1 + temp2;		// 피보나치 수열의 합 , 1항과 2항의 합으로 선언 및 초기화
	int i;			// 반복문에서 사용할 변수

	printf("피보나치수열의 마지막 항을 입력하시오 : ");		// 피보나치수열의 마지막을 입력해달라고 출력
	scanf_s("%d", &num);			// 입력받은 변수를 num에 저장, scanf_s를 사용해서 오류를 출력하지 않게함

	printf("피보나치 수열 : %d , %d ", temp1, temp2);		// 피보나치수열의 1항과 2항 출력

	for (i = 3; i <= num; i++) {		// 피보나치 수열을 출력하고 합을 저장하는 반복문 
		result = temp1 + temp2;		// 피보나치 수열의 항 = 이전의 두 항을 더한 값으로 초기화
		sum = sum + result;		//  i번째 항과 sum을 더한 값을 sum에 저장

		printf(" , %d", result);	// i번째 항을 출력

		temp1 = temp2;			// (i-2)번째 항을 (i-1)번째 항으로 초기화
		temp2 = result;			// (i-1)번째 항을 (i)번째 항으로 초기화
	}
	printf("\n수열 합계 : %d\n", sum);	// 반복이 끝나면 피보나치 수열의 합을 출력

	system("pause");			// 출력창 확인
	return 0;				// 0을 반환
}


// 한글파일에는 수열 합계가 10번째 항까지의 합계가 89로 나와있는데, 실제 10번째 항까지 더한 값은 88이다.... ?