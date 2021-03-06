﻿/*	실습 2 : unionExample.c
	작성일 : 2019. 05. 20 ~ 05. 23
	작성자 : 20165153 이재성
	프로그램 설명 : 공용체 union을 사용해 메모리에서 서로 다른 데이터 형식을 고유할 수 있도록 하는 프로그램
					이때 메모리 크기는 가장 큰 자료형에 맞추어진다.
*/

#include <stdio.h>			// 전처리문

int main(int argc, char* argv[]) {		// main 함수
	
	union {					// 공용체 union, 여기서는 태그명을 사용하지 않았다.
		short num;			// short형 멤버 선언
		char chAry[2];		// char형 배열 멤버 선언, 둘다 같은 주소로 할당되고 char형보다
							// short형이 더 큰 메모리를 가지므로 short형에 맞춰진다. (2byte)
	}data;					// main함수에서 선언되었고, 끝으로 data라는 변수가 있다.

	data.num = 16706;		// 변수 data를 통해 멤버 num을 16706으로 초기화 
							// 16706은 short형의 유효범위인 +- 32767안에 드는 값이며 
							// short형의 범위 2byte를 사용했다.	

	printf("short: %hd\n", data.num);		// data.num으로 출력, short형이니 %hd 사용

	data.chAry[0] = 'A';			// data를 통해 chAry[0]에 'A' 저장, 여기서 공용체 2byte중에 1byte를 사용
									// 본래 메모리를 사용중이던 num대신 chAry[0]가 1byte를 사용한다
	data.chAry[1] = 'B';			// data를 통해 chAry[1]에 'B' 저장, 여기서 chAry[0]가 사용하고 남은 1byte를 사용
									// chAry배열에 의해 기존의 data.num에 해당하는 값은 더 이상 사용할 수 없다.

	printf("Ch[0] : %c\n", data.chAry[0]);		// chAry[0]에 저장된 값 출력, 2byte중 chAry[0]에 해당하는 메모리에 담긴 값 출력
	printf("Ch[1] : %c\n", data.chAry[1]);		// chAry[1]에 저장된 값 출력, 2byte중 chAry[1]에 해당하는 메모리에 담긴 값 출력
	printf ("short: %hd\n" , data.num);			// 결과를 확인해 보세요. // -> 16961이 출력되는 것을 알수 있다.
										
	/*	처음 num에 저장했던 16706과 후에 출력된 16961 
		그리고 chAry배열에 저장된 문자들은 ASCII코드로 저장되있고 10진수로 표현가능하다.( A == 65 , B == 66)
		
		이 모두를 2진수로 나타내면, 즉 2byte로 표현가능한 2^16만큼 나타내면

		0100 0001 0100 0010‬ (16706) 
		0100 0010 0100 0001‬ (16961)
		0000 0000 0100 0001 (A)
		0000 0000 0100 0010 (B)			로 나타 낼 수 있고, chAry배열 저장하는 과정에서

		기존 16706의 낮은 자리수의 1byte자리 0100 0010 대신에 0100 0001(A)가 저장되고
		1byte를 쓰고 남은 옆의 1byte자리의 0100 0001 대신에 0100 0010(B)가 저장되었다. 

		결론적으로 16961은 chAry의 index가 그 자리에 새로 저장되어 새로운 값을 가지게 되어
		| 0100 0010(B) | 0100 0001(A) | 가 메모리에서 새로 저장되어 이를 2byte형태로 나타내면
		2진수 0100 0010 0100 0001 이 뜻하는 16961이 출력된 것을 알 수 있다.
		
		그래서 num을 출력하면 기존의 값은 지워지고 새로 입력된 값들로 출력하는데
		저 2진수를 10진수로 계산하면 16961이라는 값을 얻을 수 있다.
	*/
				
	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}
