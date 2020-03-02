/*	실습 6,7,8 : textInputOutput.c
	작성일 : 2019. 05. 30, 06. 04 ~ 05
	작성자 : 20165153 이재성
	프로그램 설명 :
			- 실습 6 : 텍스트 파일 입력 메뉴 선택 시 저장할 파일명을 입력받고 Ctrl + z를 입력하기 전까지
						키보드로부터 입력받는 내용을 파일로 출력한다.

			- 실습 7 : 파일복사 메뉴는 텍스트 원본파일명과 복사할 파일명을 입력받아 파일을 복사한다.
						입출력 두 개의 파일포인터와 fgetc. fputc를 반복문 처리해 복사
						fgetc로 받은 문자의 정수값이 -1이면 종료

			- 실습 8 : 파일 내용 출력 메뉴를 누르면 출력할 파일명을 선택하면 텍스트 파일의 내용을
						라인번호와 같이 콘솔 화면에 출력하고 파일용량과 라인수를 출력
*/

#define _CRT_SECURE_NO_WARNINGS		// fopen호출시 이 줄을 안쓰면 실행이 안됨?
#include <stdio.h>			// 표준 입출력 전처리문

void menuPrint();			// 메뉴를 출력하는 menuPrint 함수

int main(int argc, char* argv[]) {		 // main 함수
	FILE* textFile = NULL;		// 파일 포인터 선언 및 NULL값으로 초기화
	FILE* copyFile = NULL;		// 실습 7 관련 파일 복사를 위한 copyFile선언 및 NULL값으로 초기화
	int ch;						// 정수형 ch선언
	int num = 0;				// 메뉴를 입력받아 진행할 num 선언 및 0으로 초기화
	char name[128] = "";		// 파일의 이름을 저장할 name 선언 및 초기화
	char copyName[128] = "";	// 실습 7 관련 복사할 파일의 이름 copyName 선언 및 초기화
	int byteCount = 0;			// 실습 8 관련 파일의 용량을 세는 byteCount 선언 및 초기화
	int lineCount = 0;			// 실습 8 관련 파일의 용량을 세는 lineCount 선언 및 초기화
	
	while (1) {					// 무한반복문 
		menuPrint();			// menuPrint 함수 호출로 메뉴 출력
		scanf_s("%d", &num);	// 키보드로부터 받은 정수를 num에 저장
		getchar();				// scanf_s가 읽고 남은 버퍼를 getchar()로 지운다.
		
		switch (num) {			// num값에 따라 스위치문 진행 
		case 1: 				// 실습 6
			printf("저장할 파일명을 입력하세요 : ");		// 파일명을 입력해달라고 출력
			gets_s(name, sizeof(name));					// 입력받은 파일명을 name에 저장

			textFile = fopen(name, "w");		// 입력받은 파일명으로 "w"(쓰기모드)을 통해 파일을 만든다.
			
			while ((ch = fgetc(stdin)) != EOF) {	// 표준 입력(콘솔)에서 ctrl + z를 입력할때 까지 계속 입력받는다.
				fputc(ch, textFile);		// 입력받은 문자를 fputc를 통해 만든 파일에 새로 저장한다.
			}

			fclose(textFile);				// 반복문이 끝나면 fclose를 통해 파일을 닫아준다.

			printf("%s로 저장되었습니다.\n\n\n", name);	// 입력했던 파일명으로 저장된 것을 출력한다.
			break;			

		case 2:					// 실습 7
			printf("복사할 원본 파일명 : ");		// 복사할 파일명을 입력해달라고 출력
			gets_s(name, sizeof(name));			// 입력받은 파일명을 name에 저장

			textFile = fopen(name, "r");		// 입력받은 파일명으로 "r" (읽기모드)를 통해 파일을 연다.

			if (textFile == NULL) {		// 입력받은 파일명의 파일이 없으면 
				printf("원본파일(%s)이 존재하지 않습니다.\n\n\n",name);		//존재하지 않는다고 출력하고
				break;			// swtich문을 빠져나간다.
			}

			printf("복사할 사본 파일명 : ");		// 복사할 사본 파일명을 입력해달라고 출력
			gets_s(copyName, sizeof(copyName));		// 입력받은 파일명을 copyName에 저장

			copyFile = fopen(copyName, "w");		// copyName으로 "w"(쓰기모드)를 통해 파일을 만든다.

			while ( (ch = fgetc(textFile)) != -1) {	// 복사할 기존파일을 읽어서 
				fputc(ch, copyFile);			// fputc를 통해 사본파일로 출력해준다.
			}
				 
			fclose(textFile);			// 반복문이 끝나면 두 파일다 fclose로 닫아준다.
			fclose(copyFile);	

			printf("%s 파일이 %s 파일로 복사되었습니다.\n\n\n",name,copyName);	 // 복사됬다고 출력해준다. 
			break;

		case 3:				// 실습 8
			printf("출력할 파일명을 입력하세요 : ");		// 출력할 파일명을 입력해달라고 출력
			gets_s(name, sizeof(name));			// 입력받는 파일명을 name에 저장

			textFile = fopen(name,"r");		// 입력받은 파일명으로 "r" (읽기모드)를 통해 파일을 연다.

			if (textFile == NULL) {		// 입력받은 파일명의 파일이 없으면 
				printf("파일(%s)이 존재하지 않습니다.\n\n\n", name);		//존재하지 않는다고 출력하고
				break;			// swtich문을 빠져나간다.
			}

			printf("%d : ", ++lineCount);			// 라인수
			while ((ch = fgetc(textFile)) != EOF) {		// 파일에서 ctrl + z일때까지 반복한다.
				fputc(ch, stdout);			// 문자 하나하나 표준 출력(콘솔창)에 출력한다.

				if (ch == '\n') {			// 줄바꿈 문자를 만나면 라인수 증가 및
					printf("%d : ", ++lineCount);		// 줄바꿈 이후 행 앞에 출력
				}
				byteCount++;		// 매 반복마다 문자하나씩 용량수 증가
			}
			printf("\n파일 용량 : %dbyte 라인수 : %d\n\n\n", byteCount, lineCount);
												// 반복문을 통해 증가된 용량수와 라인수 출력
			fclose(textFile);			// 모든 반복이 끝나면 fclose로 파일을 닫는다.
			break;

		default:
			printf("1,2,3번 이외의 숫자 입력입력으로 프로그램을 종료합니다.\n");	
			// 가장 상위의 무한반복을 빠져나가는 조건으로 num값이 1,2,3이 아닐때
			return 0;		// 0을 반환하고 프로그램을 종료한다.
		}
	}

	return 0;		// 0을 반환, main함수를 진행하면서 이 코드를 진행할 수 없다.
}

void menuPrint() {		// 메뉴를 출력하는 menuPrint 함수
	printf("-----------------------------\n");
	printf("\t프로그램 구성\n");
	printf("-----------------------------\n");
	printf("1. 파일 입력 메뉴\n");			// 실습 6
	printf("2. 파일 복사 메뉴\n");			// 실습 7 
	printf("3. 파일 내용 출력 메뉴\n");		// 실습 8
	printf("-----------------------------\n");
	printf("메뉴 선택 : ");
}

