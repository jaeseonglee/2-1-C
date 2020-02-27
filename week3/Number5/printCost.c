/*	실습 5 : printCost.c
	작성일 : 2019. 03. 14
	작성자 : 20165153 이재성
	프로그램 설명 : cost이름을 가진 변수가 총계 값 172.53을 가지고 있고 cost를 출력하는 프로그램
*/

#include <stdio.h>	// 전처리기

int main(int srgc, char* argv[]) {		// main 함수

	double cost = 172.53;	// 172.53을 가지는 실수형 변수 cost

	printf("The sales tatal is: $\t%lf\n", cost); 
	// cost 출력을 위해 %lf 사용, 그 앞에 제시하는 문장과 같게 /t를 사용해 수평 탭

	system("pause");	// 출력창 확인
	return 0;			// 0을 반환
}