/*	�ǽ� 1 : oddEven.c
	�ۼ��� : 2019. 04. 02 ~ 04. 05
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �ݺ����� ���ǹ��� �̿��Ͽ� 1���� ����ڰ� �Է��� ���ڱ����� Ȧ���� �հ� ¦���� ���� ���� ����ϴ� ���α׷�.
*/

#include <stdio.h>		//��ó����

int sum(int number, int value);		// sum�Լ� ���� 

int main(int argc, char* argv[]) {		// main �Լ�

	int num = 0;			// �Է¹��� �� num ���� �� �ʱ�ȭ

	printf("���� ����� ������ ���� �Է� �ϼ��� : ");		// ������ �Է��ش޶�� ���
	scanf_s("%d", &num);					// �Է¹��� ���ڸ� num�� ����, scanf_s�� ���� ������ ������� ����

	printf("1���� %d ������ \n", num);			// num ���� �Բ� 
	printf("¦���� �� : %d\n",  sum(num, 2) );	// 1���� num���� ¦���� ���� sum �Լ��� ���� ��ȯ�� �� ���
	printf("Ȧ���� �� : %d\n",  sum(num, 1));	// 1���� num���� Ȧ���� ���� sum �Լ��� ���� ��ȯ�� �� ���
	printf("���� : %d\n",  sum(num, 0));			// 1���� num���� ������ sum �Լ��� ���� ��ȯ�� �� ���

	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}


int sum(int number, int value) {		// sum�Լ�

	int i ;		//!			// for(�ݺ�)���� ���� ���� i ����
	int sumValue = 0;		// sum�Լ� ��ȯ�� ���� sumValue ���� �� �ʱ�ȭ
		
	if (value == 2) {			// 2 �Է½� ¦���� ���� ����ϴ� ���ǹ� 
		for (i = 1; i <= number; i++) {		// 1���� number����
			if (i % 2 == 0) {				// ¦���� ���ڸ�
				sumValue += i;				// sumValue�� ���� �����ϴ� �ݺ���
			}
		}
	}
	else if (value == 1) {		// 1 �Է½� Ȧ���� ���� ����ϴ� ���ǹ�
		for (i = 1; i <= number; i++) {		// 1���� number����
			if (i % 2 != 0) {				// Ȧ���� ���ڸ�
				sumValue += i;				// sumValue�� ���� �����ϴ� �ݺ���
			}
		}
	}
	else if (value == 0) {		// 0 �Է½� ������ ����ϴ� ���ǹ�
		for (i = 1; i <= number; i++) {		// 1���� number����
			sumValue += i;					// sumValue�� ������ �����ϴ� �ݺ���
		}
	}
	return sumValue;		// ���ǹ��鿡 ���� ����� ���� ��ȯ, �̶� value�� 0,1,2,�� �ƴ� ���� �ԷµǸ� �ʱⰪ�� 0�� ��ȯ�Ѵ�.
}