/*	실습 6 : tesCalculate.c
	작성일 : 2019. 04. 06
	작성자 : 20165153 이재성
	프로그램 설명 : 종료가 선택될 때까지 계산하는 계산기 프로그램
*/

#include <stdio.h>		//전처리문

void printMain();		// 메뉴를 출력하는 printMain함수

int main(int argc, char* argv[]) {		// main 함수

	int num = 0;		// 메뉴선택값을 저장할 변수 선언 및 초기화
	int value1 = 0;		// 계산에서 필요한 변수 선언 및 초기화
	int value2 = 0;		// 계산에서 필요한 변수 선언 및 초기화
	int result = 0;		// 각 계산의 결과를 저장할 변수 선언 초기화 
	
	do {		// do while 반복문
		printMain();		// printMain을 호출해서 메뉴 출력
		scanf_s("%d", &num);		// 메뉴를 보고 입력되는 값을 num에 저장, scanf_s를 사용해서 오류를 출력하지 않음

		switch (num) {		// switch 조건문, num 값에 의해 결정
		case 1:							// num이 1일때
			printf("계산할 값 두 개를 입력하세요 : ");		// 값 두개를 입력해달라고 출력
			scanf_s("%d %d", &value1, &value2);			// 입력받은 두 값을 각각 value1, value2에 저장, %d 사이에 빈칸을 사용해서 값을 정확히 저장한다.
			break;										// switch문 종료
		case 2:						// num이 2일때
			result = value1 + value2;			// 입력받은 두 값의 합을 result에 저장
			printf("결과 : %d\n", result);		// result값 출력
			break;								// switch문 종료
		case 3:					// num이 3일때
			if (value1 >= value2) {				// vlaue1과 value2 중 높은 값에서 작은 값을 빼게하기 위한 조건문
				result = value1 - value2;		// 두 값의 차를 result에 저장
			} 
			else {								// value2가 value1보다 크다면
				result = value2 - value1;		// 두값의 차를 result에 저장
			}
			printf("결과 : %d\n", result);		// result값 출력
			break;								// switch문 종료
		case 4:						// num이 4일때
			result = value1 * value2;			// 두 값의 곱을 result에 저장
			printf("결과 : %d\n", result);		// result 값 출력
			break;								// switch문 종료
		case 5:					// num이 3일때
			if (value1 >= value2) {				// value1과 value2 중 높은 값을 작은 값으로 나누게 하기 위한 조건문
				result = value1 / value2;		// (value1 / value2) 의 값을 reslut에 저장
			}
			else {								// value2가 value1보다 크다면
				result = value2 / value1;		// (value2 / value1) 의 값을 reslut에 저장
			}
			printf("결과 : %d\n", result);		// result 값 출력
			break;								// switch문 종료
		case 6:					// num이 6일때
			printf("종료\n");	// 종료를 출력하고 
			break;				// switch문 종료
		default:	// 그 외의 값이 입력되면 
			break;		// switch문 종료
		}
		printf("\n");	//	매 반복이 끝나면 줄바꿈
	} while (num !=6);		// 6의 값이 입력되면 do while의 반복을 종료한다
	
	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}

void printMain(void) {			// 메뉴를 출력하는 printMain 함수, 메뉴만 출력하기 때문에 void형 매개변수도 void형이다.

	printf("1. 숫자입력\n");		// 각각의 해당하는 번호와 메뉴를 출력한다.
	printf("2. 더하기\n");		// 한줄한줄 출력시마다 줄바꿈
	printf("3. 빼기\n");			// 별도의 반환값이나 매개변수가 필요없다.
	printf("4. 곱하기\n");		
	printf("5. 나누기\n");
	printf("6. 종료\n");
	printf(">>메뉴선택 : ");		// 메뉴선택까지 출력 까지가 printMain함수의 호출
}