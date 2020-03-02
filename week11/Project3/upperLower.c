/*	�ǽ� 3 : upperLower.c
	�ۼ��� : 2019. 05. 09 ~ 05. 11
	�ۼ��� 20165153 ���缺
	���α׷� ���� :  (1) get�Լ��� ���� ������ ���ڿ��� �Է¹ް�
					(2) �Է¹��� ���ڿ��� �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� �����ϴ� �Լ���
					(3) ���ڿ��� ������ ������ �������� �Լ��� 
					(4) ���ڿ��� �Ųٷ� ����ϴ� �Լ��� �ۼ� �� ȣ���ϴ� ���α׷�
*/

#define SIZE 100					// define���� ���� SIZE�� 100���� ����
#include <stdio.h>					// ��ó����
#include <ctype.h>					// ���ڿ� ��ҹ��� ��ȯó���Լ��� ������ ��ó���� ctype.h

void toUpperLower(char str[]);		// �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� �����ϴ� toUpperLower�Լ�
int spaceCount(char str[]);			// ���ڿ��� ������ ������ ��ȯ�ϴ� spaceCount�Լ�
void reversePrint(char str[]);		// ���ڿ��� �Ųٷ� ����ϴ� reversePrint�Լ�

int main(int argc, char* argv[]) {		// main�Լ�
	char str[SIZE] = "";		//ũ�Ⱑ 100�� ���ڿ� str ���� �� �� ���ڿ��� �ʱ�ȭ

	printf("������ ���ڿ� �Է� : ");		// ������ ���ڿ��� �Է��ش޶�� ���
	gets(str, sizeof(str));					// gets�Լ��� �Է¹��� ���ڿ��� str�� ����
	printf("�Է¹��� ���ڿ�\t: %s\n", str);	// �Է¹��� ���ڿ��� ����Ѵ�

	toUpperLower(str);						// ���ڿ��� toUpperLower�Լ��� �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� �ٲ��ش�.
	printf("���� �� ���ڿ�\t: %s\n", str);	// �ٲ� ���ڿ��� ���

	printf("���ڿ��� ���� ���� %d �Դϴ�.\n",spaceCount(str));	// spaceCount�� ��ȯ�ϴ� ������ ������ ����Ѵ�.

	toUpperLower(str);		// ��ҹ��ڰ� �ٲ� ���� ���ڿ��� �ٽ� �ٲ��ְ�
	reversePrint(str);		// reversePrint�Լ��� ���ڿ��� �Ųٷ� ����Ѵ�.

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}

void toUpperLower(char str[]) {		// �빮�ڴ� �ҹ��ڷ� �ҹ��ڴ� �빮�ڷ� �����ϴ� toUpperLower�Լ�
	int i;				// �ݺ������� ����ϴ� ����
	for (i = 0; i < SIZE; i++) {	// SIZE��ŭ �ݺ��ϴ� �ݺ���
		if (isupper(str[i]) ) {		// isUpper�� 1�� ��ȯ�ϸ�(���ڰ� �빮�ڶ��)
			str[i] = tolower(str[i]);	// �� ���ڸ� tolower�� ���� �ҹ��ڷ� �ٲ��ش�.
		}
		else if (islower(str[i])) {	// islower�� 1�� ��ȯ�ϸ�(���ڰ� �ҹ��ڶ��)
			str[i] = toupper(str[i]);	// �� ���ڸ� toUpper�� ���� �빮�ڷ� �ٲ��ش�.
		}
		else if (str[i] == '\0') {		// ���� ���ڿ��� 0 ���ڰ� �ִٸ�
			break;		// �ݺ����� ���������� break�� ����
		}
	}
}

int spaceCount(char str[]) {		// ���ڿ��� ������ ������ ��ȯ�ϴ� spaceCount�Լ�
	int count = 0;		// ������ ������ ������ count ���� ���� �� 0���� �ʱ�ȭ
	int i;				// �ݺ������� ����� ����
	for (i = 0; i < SIZE; i++) {	// SIZE��ŭ �ݺ��ϴ� �ݺ���
		if (str[i] == '\ ') {		// ���ڰ� '\ '(�������ÿ� �����̽�)����� ���ٸ�
			count++;			// count�� ������Ű�� 
			continue;			// �ٽ� �ݺ��Ѵ�.
		}
		if (str[i] == '\0') {		// ���� ���ڿ��� 0 ���ڰ� �ִٸ�
			break;		// �ݺ����� ���������� break�� ����
		}
	}
	return count;		// �ݺ����� �����鼭 ������ count���� ��ȯ�Ѵ�.
}

void reversePrint(char str[]) {		// ���ڿ��� �Ųٷ� ����ϴ� reversePrint�Լ�
	int i;			//�ݺ������� ����� ����
	printf("���ڿ��� �Ųٷ� ���: ");		// ���ڿ��� �Ųٷ� ����Ѵٰ� ���
	for (i = SIZE-1; i >= 0; i--) {		// SIZE��ŭ �ݺ��ϴ� �ݺ���, �ݺ����� ���ǽ��� ��¦ �ٲپ� �� �������� �ε������� ����Ѵ�.
		if (str[i] == '\0') {		// ���� ���ڿ��� 0���ڰ� �ִٸ�
			continue;		// continue�� ���� �ٽ� �ݺ��Ѵ�.
		} 
		else {		// 0 ���ڰ� �ƴ� ���ڴ� 
			printf("%c", str[i]);	// �� ���ڸ� ������ش�.
		}							// 0���ڰ� �ƴ� ���ڸ� ���� ���� ������ ���ڸ� ������ ���̹Ƿ�  
	}								// ��������� �Ųٷ� ���ڿ��� ������ �� �ִ�.
	printf("\n");					// �ݺ������� ��� ����� ������ �ٹٲ����ش�.
}