/*	실습 3 : printAverageValue.c
	작성일 : 2019. 04. 02 ~ 04. 06
	작성자 : 20165153 이재성
	프로그램 설명 : 0이 아닌 정수가 입력될 때까지의 합과 평균을 계산하고 출력하는 프로그램
*/

#include <stdio.h>		//전처리문

double averageResult(double total, int count);	// 평균을 계산하는 averageResult함수 선언

int main(int argc, char* argv[]) {		// main 함수

	int num = 0;		// 입력받은 정수의 변수 선언 및 초기화
	int sum = 0;		// 입력받은 정수들의 합 변수 선언 및 초기화
	double countValue = 0; // 반복문을 반복할 때마다 증가하는 변수 선언 및 초기화

	do {		// do while 반복문
		printf("정수 입력 : ");		// 정수를 입력해달라고 출력
		scanf_s("%d", &num);		// 입력받은 정수를 num에 저장, scanf_s를 통해 오류를 출력하지 않음

		if (num == 0) {			// 만약 입력받은 정수가 0이면
			continue;			// continue 를 사용해 while의 조건식을 검사한다.
		}

		sum += num;			// 입력받은 (0보다 큰) num을 sum값에 더해서 저장, 입력받는 정수들의 합이다.
		printf("-> 합: %d 평균: %.1lf\n", sum, averageResult(sum, ++countValue));	// 입력받은 정수들의 합과 평균을 출력
		// sum 출력위해 %d, double형을 반환하는 함수를 위해 %lf 사용, 소수점 아래 1자리만 출력위해 .1 사용,
		// 매 반복마다 반복횟수가 증가하는 것을 averageResult함수에게 알려주기 위해 ++countValue을 값을 증가시킨뒤 저장한다.

	} while (num != 0);		// 주어진 조건식이 true면 반복하는 do while문, do while문은 while의 조건식의 TURE/FALSE를 떠나 일단 
	printf("-> 종료\n");		// do의 반복할 문장을 반복한다. 문제는 0이 입력된 순간 평균값에 영향이 미치므로 do문장의 if를 통해 continue를 사용
							// while의 조건식을 검사해서 false일 경우 "-> 종료"를 출력하고 반복을 마친다.

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}

double averageResult(double total, int count) { // double형을 반환하는 averageResult 함수, 지역변수로는 정수들의 합과 반복횟수의 변수를 받는다.
	total = total / count;			// 현재 입력된 정수들의 합을 반복횟수, 즉 정수가 몇번 입력되었는지로 나눈다.
	return total;		// 정수들의 합을 입력횟수로 나눈 값을 반환한다.
}