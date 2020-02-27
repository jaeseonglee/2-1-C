/*	�ǽ� 3 : coneVolume.c
	�ۼ��� : 2019. 03. 28 ~ 03. 31
	�ۼ��� :	20165153 ���缺
	���α׷� ���� : ������ ���̿� �������� �Է¹޾� ���Ǹ� ����ϴ� �Լ��� ���� �� ȣ���ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����
#define PI 3.141592		// PI�� ���� ��ũ�� ����� ����

double getVolume(double r, double h);  // ������ ���� ���ϴ� �Լ�, �����Ϸ����� �˷���
void printResult(double valueReult);  // ����� ����ϴ� �Լ�, �����Ϸ����� �˷���

int main(int argc, char* argv[]) {  // main �Լ�

	double r = 0;		// ������ ������ ��, �Ǽ��� ���� ���� �� �ʱ�ȭ
	double h = 0;		// ������ ���� ��, �Ǽ��� ���� ���� �� �ʱ�ȭ
	double result = 0;  // ������� ������ �Ǽ��� ���� ���� �� �ʱ�ȭ 

	printf("������ �������� ���̸� �Է����ּ��� : \n"); // ������ �������� �����Է��ش޶�� ���
	scanf_s("%lf %lf", &r, &h);	// �Է¹��� ���� ������ ������ ����
	// scanf ��ſ� scanf_s�� ����ؼ� ������ ��Ÿ���� �ʰ� �Ѵ�.

	result = getVolume(r, h);	// getVolume �Լ��� ���� ���� ���� result�� ����

	printResult(result);		// ����� ����ϴ� �Լ�

	system("pause");		// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

double getVolume(double r, double h) { // �Ǽ����� ��ȯ�ϴ� getVolume�Լ�, ������ ���Ǹ� ����Ѵ�.
	return ( ( r * r * h * PI ) / 3.0 );
	// ���������� ���� �Է¹��� �������� ����, ��ũ�� ������ PI�� ���� ������ ���Ǹ� ���ϰ� �� ���� ��ȯ�Ѵ�.
}

void printResult(double valueResult) { // ����� ����ϴ� printResult �Լ�
	printf("������ ���Ǵ� : %.2lf\n", valueResult); // ��µǴ� ���� �Ҽ��� 2�ڸ����� ������� .2, �Ǽ� ������� %lf ���
}