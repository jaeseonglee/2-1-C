/*  �ǽ� 1 : operatorExample2.c
	�ۼ��� : 2019. 03. 21
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : ���� �����ڸ� �̿��� ���α׷�
*/

#include <stdio.h>	// ��ó����

int main(int argc, char*argv[]) {	// main �Լ�
	int a, b, c = 0;		// ������ ���� ����

	a = 20;		// a�� ���� 20���� �ʱ�ȭ

	a++;		// �����Ǳ��� a�� ���� 1�� ������Ų��.		a = 21
	++a;		// a���� 1 ������Ų��						a = 22
	b = a++;	// �����Ǳ� ���� a�� ���� b�� �ʱ�ȭ, a�� �� 1����	b = 22 , a=23 
	c = ++a;	// a�� �� 1����,������ a�� ���� c�� �ʱ�ȭ		a = 24, c = 24

	printf("a = %d, b = %d, c = %d\n", a, b, c); // �������� a,b,c�� �� ���

	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ	
}
