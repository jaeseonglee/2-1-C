/*	실습 7 : factorialValuec
	작성일 : 2019. 04. 06
	작성자 : 20165153 이재성
	프로그램 설명 : 입력받은 값까지의 팩토리얼을 구하는 프로그램, 실습 5주차에서 함수를 사용했기 때문에 반복문 사용.
*/

#include <stdio.h>		// 전처리문

int main(int argc, char* argv[]) {		// main 함수

	int num = 0;			// 입력받을 값 변수 선언 및 초기화
	long long result = 1;	// 총 팩토리얼 값을 계산할 변수 선언 및 초기화, 값이 순식간에 커지므로 long long형으로 선언
	int i;					// 반복문에서 사용할 변수

	printf("팩토리얼 값을 입력해주세요 : ");		// 팩토리얼 값을 입력해달라고 출력
	scanf_s("%d", &num);			// 입력받은 값에 num에 저장, scanf_s를 사용해서 오류를 출력하지 않음
	
	for (i = 1; i <= num; i++) {		// 팩토리얼을 계산하는 반복문
		result = result * i;		// 팩토리얼 값 = 팩토리얼 값 * i , i가 입력받은 값이 될 때까지 곱한다.
	}

	printf("%d! = %lld\n", num, result);		// 결과를 출력

	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}