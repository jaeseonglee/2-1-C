/*  실습 2 : print_result 프로젝트
	소스파일명 : print.c
	작성일 : 2018. 3. 07
	작성자 : 이재성
	최종수정일 : 2018. 3. 07
	프로그램 설명 : C의 기본구성에 대한 실습으로 
					간단한 산술 계산 후 출력을 하는 프로그램
*/

#include <stdio.h> // 전처리 부분

int main(int argc, char* argv[]) {

	int result; // 변수 선언

	result = 100 - 50; 
	printf(" %d \n", result);  // 출력

	return 0;
}


