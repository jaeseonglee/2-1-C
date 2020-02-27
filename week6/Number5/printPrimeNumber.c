/*	실습 5 : printPrimeNumber.c
	작성일 : 2019. 04. 04 ~ 04. 06
	작성자 : 20165153 이재성
	프로그램 설명 : 1부터 입력받은 숫자까지 소수(1과 자기자신으로만 나누어 떨어지는 수)를 출력하는 프로그램
				실습 설명에서는	(1) 이중 반복문과 조건문 if와 continue의 사용 
								(2) isPrimeNumber 함수의 반환값은 0 또는 1     //(1),(2)를 둘다 적용해서 작성하는 것인데
								작성자가 실력이 부족하여 (1)을 적용하면 (2)가 안되고, (2)를 적용하면 (1)가 안되기에 
								(1)을 적용한 코드를 작성하고, (2)를 적용한 코드는 맨 아래 주석으로 저장하겠습니다.
*/

#include <stdio.h>			// 전처리문

void isPrimeNumber(int number);		// number까지의 숫자들 중 소수를 출력하는 isPrimeNumber함수 선언

int main(int argc, int argv[]) {		// main 함수

	int num = 0;		// 입력된 값을 저장하는 변수 선언 및 초기화

	printf("출력 최대값 입력 : ");		// 값을 입력해달라고 출력
	scanf_s("%d", &num);		// 입력된 값을 num에 저장, scanf_s를 통해 오류를 출력하지 않는다.
	
	printf("소수 :\t");		// 1부터 number까지의 소수를 출력
	isPrimeNumber(num);		// isPrimeNumber함수를 통해 결과 출력

	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

void isPrimeNumber(int number) {	// isPrimeNumber는 1부터 number까지 소수를 출력하는 함수, 출력만 하기 때문에 void형 사용
	int i;		// 반복문에서 사용할 변수
	int	j;		// 반복문에서 사용할 변수
	for (i = 2; i < number; i++) {		// 1은 소수가 아니므로 2부터 소수인지 검사한다.
		for (j = 2; j < i; j++) {		
			if (i % j == 0) { // if문을 통해 약수가 있다면 소수가 아니므로 
				i++;		// 소수가 아닌 i의 값을 1증가시키고
				j = 2;		// 다음 i의 값의 소수여부를 확인하기 위해 j의 값을 다시 2로 초기화
				continue;	// continue를 통해 중첩반복을 다시 시작한다. 물론 위에서 j값이 2가 되었기 때문에 새로 시작하는 것과 다름없다.
			}
		}
		if (i >= number) {	// number-1 값이 소수가 아닐 경우 i값이 number보다 같거나 커지므로, number보다 큰 다음 소수를 출력하기 전에
			break;			// break를 사용하여 바깥의 반복을 끝낸다.
		}
		printf("%d ",i);		// 중첩반복문을 빠져나온 i값은 소수이므로 출력
	}
	printf("\n");	// 1부터 number까지의 소수 출력이 끝났으므로 줄바꿈을 통해 함수 호출의 종료를 알림
}

/*
// isPrimeNumber의 반환형이 int를 사용함으로써 0이나 1을 반환하는 함수일 경우의 printPrimeNumber.c

#include <stdio.h>			// 전처리문

int isPrimeNumber(int number);		// 입력된 number가 소수여부를 확인하여 int형을 반환하는 isPrimeNumber함수 선언

int main(int argc, int argv[]) {		// main 함수

	int num = 0;		// 입력된 값을 저장하는 변수 선언 및 초기화
	int i;				// 반복문에서 사용할 변수

	printf("출력 최대값 입력 : ");	// 값을 입력해달라고 출력
	scanf_s("%d", &num);			// 입력된 값을 num에 저장, scanf_s를 통해 오류를 출력하지 않는다.

	printf("소수 :\t");		// 1부터 number까지의 소수를 출력

	for(i = 2; i < num; i++) {		// 2부터 num까지의 소수를 출력하는 반복문
		if (isPrimeNumber(i) == 1) {	// isPrimeNumber(i)가 1일 경우, 즉 소수일 경우
			printf("%d ", i);			// 그 값을 출력한다.
		}
	}
	printf("\n");		// 반복문이 끝나서 소수의 출력이 끝나면 줄바꿈

	system("pause");		// 출력창 확인
	return 0;			// 0을 반환
}

int isPrimeNumber(int number) {	// number의 값이 소수여부에 따라 int형을 반환하는 isPrimeNumber함수 
	int i;		// 반복문에서 사용하는 변수

	for(i = 2; i < number; i++ ) {		// 입력된 number가 약수를 가지는지, 즉 소수인지 확인하는 반복문
		if(number % i == 0) {		// number가 약수를 가진다면
			return 0;			// 0을 반환
		}
	}
	return 1;		// 모든 반복을 끝냈다면 number가 소수이기 때문에 1을 반환
}
*/