/*	�ǽ� 1 : sumValue.c
	�ۼ��� : 2019. 03. 28 ~ 03. 31
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �� ���� ���� ����ϴ� �Լ��� ���� �� ȣ���ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����

int sumTwo(int a, int b);		// main�Լ� ���� ������ �Լ��� ����, �����Ϸ����� �˷���

int main(int argc, char* argv[]) {		// main �Լ�

	int x = 10;		// ������ ���� x�� 10�� ����
	int y = 5;		// ������ ���� y�� 5�� ����
	int value = 0;	// �� ���� ���� ������ ���� ���� �� �ʱ�ȭ

	value = sumTwo(x, y);  // sumTwo �Լ��� ȣ���Ͽ� value�� ����
	printf("�� ���� ���� : %d\n", value);		// value�� ����� ���� ���

	system("pause");  // ���â Ȯ��
	return 0;		// 0�� ��ȯ
}

int sumTwo(int a, int b) { // �������� ��ȯ�ϴ� sumTwo �Լ�,���������δ� ������ ���� �ΰ��� �ִ�.
	
	int result = 0; // �� ���� ���� ������ ���� ���� �� �ֱ�ȭ
	result = a + b; // ���������� ����� �� ���� ���� result�� ����

	return result; // result ���� ��ȯ
}
