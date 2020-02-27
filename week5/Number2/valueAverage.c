/*	�ǽ� 2 : valueAverage.c
	�ۼ��� : 2019. 03. 28 ~ 03. 31
	�ۼ��� :	20165153 ���缺
	���α׷� ���� : �� ���� �Է¹޾� ����� ����ϴ� �Լ��� ó���ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����

double getAverage(double value1, double value2); // ����� ���ϴ� �Լ�, �����Ϸ����� �˷���
void printResult(double valueResult);  // ����� ����ϴ� �Լ�, �����Ϸ����� �˷���

int main(int argc, char* argv[]) {		// main �Լ�

	double num1 = 0;  // �� �Ǽ��� ���� ���� �� �ʱ�ȭ
	double num2 = 0;
	double result = 0;  // ��� ���� ������ �Ǽ��� ���� ���� �� �ʱ�ȭ

	printf("�� �Ǽ����� �Է����ּ��� : \n");  // �� �Ǽ��� ������ �Է��ش޶�� ���
	scanf_s("%lf %lf", &num1, &num2);	// �Է� ���� �Ǽ��� ������ ������ ������ ����
	// scanf ��ſ� scanf_s(secure) �� ����ؼ� ������ ��Ÿ���� �ʰ� �Ѵ�.


	result = getAverage(num1, num2);   // �Է¹��� �� ������ �Լ��� ���� ���� ���� result�� ����

	printResult(result); // �Լ��� ���� ��� ���

	system("pause");	// ���â Ȯ��
	return 0;		// 0�� ��ȯ
}

double getAverage(double value1, double value2) {// �Ǽ����� ��ȯ�ϴ� getAverage �Լ�, ���������� �Ǽ��� ���� �� ���� �ִ�.
	return (value1 + value2) / 2.0;		// �Է� ���� ���������� ���� ���ϰ� �ѷ� ������ ����� ���� ��ȯ�Ѵ�.
}										// �Ǽ������� ��ȯ�ϱ� ���� 2.0���� ����

void printResult(double valueResult) {// printResult �Լ�, ���������� �޾� ��¹��� �����ϴ� �Լ�
	printf("�� �Ǽ��� ��� : %.2lf\n", valueResult); // ���������� ����� ���� �޾� ����Ѵ�.
	// ��µǴ� ���� �Ҽ��� 2�ڸ����� ������� .2, �Ǽ� ������� %lf ���
}