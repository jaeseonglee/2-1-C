/*	실습 1 : enumExample.c
	작성일 : 2019. 05. 20 ~ 05. 23
	작성자 : 20165153 이재성
	프로그램 설명 : 열거체 enum을 사용해서 숫자를 기호로 나타내어 좀 더 읽기 쉽게 만든 프로그램
*/

//#define _CRT_SECURE_NO_WARINNING   // scanf 사용시 오류를 출력하지 않게 한다.
#include <stdio.h>		// 전처리문

int main(int argc, char* argv[]) {		// main함수
	int channel = 0;		// 정수형 변수 channel 선언 및 0으로 초기화
	
	enum TV {							// 열거체 enum, 태그명으로 TV를 사용한다.
		fox = 2, nbc = 4, cbs = 5,				// 정수형의 초기화된 멤버들을 선언 및 각각의 값으로 선언한다.
		abc = 11, hbo = 15, show = 17,			// 현재의 경우에는 따로 지정하여 값이 증가되는 형식이 아닌
		max = 31, espn = 39, cnn = 51			// 직접 초기화 하여 각각의 값을 갖게 된다.
	};						// ex) #define FOX 2 매크로 상수로 정의하는 것보다 좀 더 쉬운 방법이라는 것을 알 수 있다.
							// 세미콜론(;)을 사용해서 구조체 TV 선언 및 초기화, main 함수에서 선언되었음을 알자.
	printf("Here are my favorite cable stations: \n");		// 열거체 TV가 갖는 멤버들을 토대로 출력
	printf(" ABC: \t%2d\n", abc);				// \t(수평탭)과 %2d(두자리 정수형 주소 구하기)를 통해 일관성있게 정렬
	printf(" CBS: \t%2d\n", cbs);				// 각각의 출력에 맞는 채널명 멤버들을 출력 
	printf(" CNN: \t%2d\n", cnn);				// 실제로 가리키는 것이 정수(열거체 내에서 초기화됨)이므로
	printf(" ESPN: \t%2d\n", espn);				// 일반적인 정수형으로 사용되는 %d사용
	printf(" FOX: \t%2d\n", fox);
	printf(" HBO: \t%2d\n", hbo);
	printf(" MAX: \t%2d\n", max);
	printf(" NBC: \t%2d\n", nbc);
	printf(" SHOW: \t%2d\n", show);
	printf(" Select channel : ");				// 채널을 입력해달라고 출력
	scanf_s("%d", &channel);					// scanf_s를 사용해 오류를 출력하지 않고 입력받은 정수를 channel에 저장

	switch (channel) {					// switch 조건문을 통해 새로 입력된 channel의 값을 찾는다.
		case abc:						// 각각의 멤버에 맞는 값이 있다면
			printf("ABC channel");		// 그 채널명을 출력하고
			break;						// switch 조건문을 빠져나간다.
		case cbs: 
			printf("CBS channel"); 
			break;
		case cnn:
			printf("CNN channel");
			break;
		case espn:
			printf("ESPN channel");
			break;
		case fox:
			printf("FOX channel");
			break;
		case hbo:
			printf("HBO channel");
			break;
		case max:
			printf("MAX channel");
			break;
		case nbc:
			printf("NBC channel");
			break;
		case show:
			printf("show channel");
			break;
		default:						// 물론 위의 어떤 자료형과도 같지 않다면
			printf("no service");		// 서비스를 제공하지 않는다고 출력
			break;					// 마찬가지로 switch를 빠져나간다.
	}
	
	printf("\n");  // switch 조건문을 빠져나오면 줄바꿈 줄바꿈해준다.

	system("pause");		// 출력창 확인
	return 0;				// 0을 반환
}