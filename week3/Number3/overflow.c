/*	실습 3 : overflow
	작성일 : 2019. 03. 14
	작성자 : 20165153 이재성
	프로그램 설명 : 오버플로와 언더플로 출력
*/

#include <stdio.h>		// 전처리기

int main(int argc, char* argv[]) {		// main 함수
	
	unsigned char uc = 255 + 1;	// 오버플로하는 문자형 변수
	short s = 32767 + 1;		// 오버플로하는 정수형 변수
	float min = 1.125E-50;		// 언더플로하는 실수형 변수
	float max = 3.403E39;		// 오버플로하는 실수형 변수
	
	printf("%u\n", uc);			// unsiged char의 최댓값인 255에 오버플로하면 0, 부호없는 정수를 출력하기 위해 %u를 사용 
	printf("%d\n", s);			// short의 최댓값인 32767에 오버플로하면 -32768, 정수를 출력하기위해 %d 사용
	printf("%e\n", min);		// 실수의 언더플로시 0으로 수렴하는 값을 가짐, 지수 표기 방식의 출력하기위해 %e 사용
	printf("%lf\n", max);		// 실수의 오버플로시 무한대 값을 가짐, 실수 출력을 위해 %lf 사용
	/*	자료형의 최댓값을 넘기는 값 설정시 오버플로
		자료형의 최솟값에 값을 더 빼게하면 언더플로
	*/
	system("pause");	// 출력창 확인
	return 0;			// 0 반환
}