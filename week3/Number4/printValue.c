/*	실습 4 : printValue
	작성일 : 2019. 03. 14
	작성자 : 20165153 이재성
	프로그램 설명 : 값을 지정된 자료형에 저장 및 출력
*/

#include <stdio.h>	//전처리기

int main(int argc, char* argv[]) {	// main 함수
	
	int age = 128;					// 128을 int형 변수에 선언 및 초기화
	long long salary = 2500000000;	// 25억을 long lon형 변수에 선언 및 초기화 값이, 21억보다 커서 long long 사용
	double pi = 3.14;				// 3.14를 double형 변수에 선언 및 초기화
	int grade = 2;					// 2를 int형 변수에 선언 및 초기화
	char credit = 'A';				// A를 char형 변수에 선언 및 초기화

	printf("age : %d\n", age );			// 변수 age 출력 위해 %d 사용
	printf("salary : %lld\n", salary);	// 변수 salary 출력 위해 %lld, long long형 출력시 %lld 사용
	printf("pi : %lf\n", pi);			// 변수 pi 출력 위해 %lf 사용
	printf("grade : %d\n", grade);		// 변수 grade 출력 위해 %d 사용
	printf("credit : %c\n", credit);	// 변수 credit 출력 위해 %c 사용

	system("pause"); // 출력창 확인 
	return 0;		 //	0을 반환
}
