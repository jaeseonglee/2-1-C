/*	�ǽ� 4 : findStringArray.c
	�ۼ��� : 2019. 05. 09 ~ 05. 11
	�ۼ��� 20165153 ���缺
	���α׷� ���� : �Է¹��� ������ ���ڿ��� ���� ���ڿ��� ����, ���ĺ�, ����, Ư����ȣ�� ������ ����ϴ� ���α׷�
*/

#define SIZE 100					// define���� ���� SIZE�� 100���� ����
#include <stdio.h>					// ��ó����
#include <ctype.h>					// ����ó���Լ��� ������ ��ó���� ctype.h

void stringInfoPrint(char str[]);		// ���ڿ��� ����,���ĺ�,����,Ư����ȣ�� ������ ����ϴ� stringInfoPrint�Լ�

int main(int argc, char* argv[]) {		// main�Լ�
	char str[SIZE] = "";				//ũ�Ⱑ 100�� ���ڿ� str ���� �� �� ���ڿ��� �ʱ�ȭ

	printf("���ڿ� �Է� \t: ");		// ������ ���ڿ��� �Է��ش޶�� ���
	gets_s(str, sizeof(str));				// gets�Լ��� �Է¹��� ���ڿ��� str�� ����
	printf("�Է¹��� ���ڿ� : %s\n", str);	// �Է¹��� ���ڿ��� ����Ѵ�

	stringInfoPrint(str);			// stringInfoPrint�Լ� ȣ��� �Է¹��� ���ڿ��� ��ҵ��� ������ ���

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}	

void stringInfoPrint(char str[]) {		// ���ڿ��� ����,���ĺ�,����,Ư����ȣ�� ������ ����ϴ� stringInfoPrint�Լ�
	int count = 0;				// ���ڿ��� ���̸� ������ ���� count ���� �� �ʱ�ȭ
	int alphaCount = 0;			// ���ڿ��� ���ĺ��� ������ ������ ���� alphaCount ���� �� �ʱ�ȭ
	int numberCount = 0;		// ���ڿ��� ������ ������ ������ ���� numberCount ���� �� �ʱ�ȭ
	int specialCount = 0;		// ���ڿ��� Ư����ȣ�� ������ ������ ���� specialCount ���� �� �ʱ�ȭ
	int i;					// �ݺ������� ����� ����
	
	for (i = 0; i < SIZE; i++, count++) {// �ݺ������ν� ���ڿ��� ���̸� ���� �����ϰ� SIZE��ŭ �ݺ������� 0���ڸ� ã���� �ݺ�����	
		if (str[i] == '\0') {	 // ���� ���ڿ��� 0 ���ڰ� �ִٸ�
			break;				// �ݺ����� ���������� break�� ����
		}
		else if (isalpha(str[i])) {	// isalpha�� 1�� ��ȯ�ϸ�(���ڰ� ���ĺ��̶��)
			alphaCount++;			// ���ĺ��� ������ �ϳ� ������Ű��
			continue;				// �ٽ� �ݺ��Ѵ�.
		}
		else if (isdigit(str[i])) {	// isdigit�� 1�� ��ȯ�ϸ�(���ڰ� ���ڶ��)
			numberCount++;			// ������ ������ �ϳ� ������Ű��
			continue;				// �ٽ� �ݺ��Ѵ�.
		} 
		else {			// ���ڿ� ���ĺ� �Ѵ� �ƴ϶�� (����, !@#���� ��ȣ�� ���Եȴ�.)
			specialCount++;		// Ư����ȣ�� ������ �ϳ� ����Ű�ð�
			continue;			// �ٽ� �ݺ��Ѵ�.
		}
	}	// �ݺ����� ���� ���� �������� ���
	printf("���ڿ��� ����\t:%d\n", count);		// �ݺ����� ���� ����� count
	printf("���ĺ��� ����\t:%d\n", alphaCount);	// alphaCount
	printf("������ ����\t:%d\n", numberCount);	// numberCount
	printf("Ư����ȣ�� ����\t:%d\n", specialCount);	// specialCount�� ������ ����Ѵ�.
}