/*	실습 7 : thinkTureFalse.c
	작성일 : 2019. 03. 21
	작성자 : 20165153 이재성
	프로그램 설명 :	관계연산과 논리연산으로 결과를 출력하는 프로그램
					필요한 변수와 상수를 적절히 선언 및 사용
*/

#define _CRT_SECURE_NO_WARNINGS // scanf 함수 사용에 있어 발생하는 경고를 보여주지 않도록 컴파일러에게 지시하는 전처리기 - 책에서 참조하였음.
#include <stdio.h>		// 전처리기

int main(int argc, char*argv[]) {		// main 함수

	char married = 'n';		// 미혼인가 대한 문자형 변수 
	int age = 0;			// 나이에 대한 정수형 변수
	char gender = 'm';		// 성별에 대한 문자형 변수
	int schoolComputer = 0;	// 컴퓨터 점수에 대한 정수형 변수
	int schoolEngilsh = 0;	// 영어 점수에 대한 정수형 변수
	int schoolMath = 0;		// 수학 점수에 대한 정수형 변수
	int sum = 0;			// 세 과목의 합에 대한 정수형 변수
	double average = 0;		// 세 과목의 평균값을 갖는 실수형 변수
	int day = 0;			// 결석횟수에 대한 정수형 변수
	int num = 0;			// 숫자를 입력받는데 대한 정수형 변수

	printf("결혼 여부를 입력해주세요 ('y' or 'n'): \n");	// 결혼 여부를 입력달라고 출력
	scanf("%c", &married);		// 입력받은 문자을 %c를 이용해 저장
	printf("나이와 성별('m' or 'g')을 입력해주세요  : \n"); // 나이와 성별을 입력해달라고 출력
	scanf("%d %c", &age, &gender);	// 입력받은 나이는 정수형으로 %d, 성별은 문자로 %c 사용해 저장
	printf("컴퓨터와 영어 그리고 수학 점수를 입력해주세요 : \n"); // 세 과목의 점수를 입력해달라고 저장
	scanf("%d %d %d", &schoolComputer, &schoolEngilsh, &schoolMath); // 입력받은 점수를 정수형으로 %d를 사용해 각각의 값에 저장
	sum = schoolComputer + schoolEngilsh + schoolMath; // 세 과목의 합을 정수형 변수 sum에 초기화
	average = (sum) / 3;		// 세 과목의 평균을 실수형 변수 average에 저장
	printf("결석 횟수를 입력해주세요 : \n"); // 결석 횟수를 알려달라고 출력
	scanf("%d", &day);		// 입력받은 횟수를 정수형으로 %d를 사용해 저장
	printf("정수를 입력해주세요 : \n"); // 정수를 입력해달라고 출력
	scanf("%d", &num);		// 입력받은 정수를 정수형으로 %d를 사용해 저장

	printf("1. married == \'y\' = %d\n", married == 'y'); // \(역슬래시)를 사용해 '(따옴표) 출력, married == 'y'는 정수형의 값을 가지므로 %d 사용
	// 입력받은 문자가 'y'라면 1을 출력, 아니라면 0을 출력
	printf("2. age >= 19 && gender == 'm' = %d\n", age >= 19 && gender == 'm'); //논리연산자 &&에 따른 결과 출력
	// 입력받은 나이에 대한 숫자가 19이상이고 성별에 대한 입력받은 문자가 'm'이라면 1을 출력, 아니라면 0을 출력
	printf("3. schoolComputer >= 90 && schoolEngilsh >= 90 && schoolMath >= 90 = %d\n", schoolComputer >= 90 && schoolEngilsh >= 90 && schoolMath >= 90);
	// 입력받은 세 과목의 점수 전부가 90이상이면 1을 출력, 아니면 0을 출력
	printf("4. sum >= 200 || average >= 60 = %d\n", sum >= 200 || average >= 60);
	// 입력받은 세 과목의 점수의 합이 200이상이거나 평균이 60이상이면 1을 출력, 둘다 아니면 0을 출력
	printf("5. (schoolComputer < 60 || schoolEngilsh < 60 || schoolMath < 60) || day >= 4 = %d\n", (schoolComputer < 60 || schoolEngilsh < 60 || schoolMath < 60) || day >= 4 );
	// 세 과목의 점수 중 하나라도 60점 미만이거나 결석횟수가 4이상이면 1을 출력, 둘 다 아니면 0을 출력
	printf("6. current year(2019) == leap year(윤년) = %d\n", ( (2019 % 4 == 0) && (2019 % 100 != 0) ) || 2019 % 400 == 0 );
	/* 6. 현재의 년도가 윤년인가
		윤년의 조건	1. 4로 나누어 떨어져야한다
					2. 4로 나누어 떨어져야하면서도 100으로 나누어떨어지면 안된다.
					3. 단, 400으로 나누어 떨어지면 윤년이다.
		2019년은 4로 나누어 떨어지지도, 100으로 나누어 떨어지지도, 400으로 나누어 떨어지지도 않으므로 윤년이 아니다.
		2019년이 위의 논리 연산자에 전부 0(F)의 값을 갖기 때문에 0을 출력 */
	printf("7. %d %% 2 == 0 = %d\n", num ,num % 2 == 0); // '%'를 출력하기 위해 %%를 사용
	// 입력받은 정수가 2로 나누어 떨어지면 짝수기 때문에, 나누어 떨어지면 1을 출력 아니면 0을 출력
	printf("8. %d %% 3 == 0 && %d %% 5 == 0 = %d\n", num, num, num % 3 == 0 && num % 5 == 0); // '%'를 출력하기 위해 %%를 사용
	// 입력받은 정수가 3으로 나누어 떨어지면 3의 배수, 5로 나누어 떨어지면 5의 배수기 때문에, 두 조건을 둘다 만족하면 공배수이다.

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}