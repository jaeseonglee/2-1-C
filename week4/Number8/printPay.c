/*	�ǽ� 8 : printPay.c
	�ۼ��� : 2019. 03. 21
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : Ű����κ��� �޿��� �Է¹޾� ������ ���޾��� ����ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS // scanf �Լ� ��뿡 �־� �߻��ϴ� ����� �������� �ʵ��� �����Ϸ����� �����ϴ� ��ó���� - å���� �����Ͽ���.
#include <stdio.h>		// ��ó����

int main(int argc, char*argv[]) {		// main �Լ�

	double pay = 0;		// �޿� ���� ���� �Ǽ��� ����
	double tax = 0;		// ����ῡ ���� �Ǽ��� ����
	double result = 0;	// �ҵ漼,�ֹμ� �� �߰� ����� ���� ������ �Ǽ��� ����

	printf("�� �޿��� �Է����ּ��� : "); // �޿��� �Է��ش޶�� ���
	scanf("%lf", &pay);		// �Է¹��� ���ڸ� %lf�� pay�� ����
	
	printf("\t>> �ѱ޿�(+)	: %8.0lf(��)\n",pay);	// �� �޿� ���
	// /t���� ������, &8.0���� 8���� ���� ���缭 ���, %lf�� �Ǽ��� ���

	tax = (pay/100) * 5.89 ;	// ����� ���̴�. �޿��� 5.89%��ŭ ����Ͽ� �ʱ�ȭ
	result = pay / 10;			// �ҵ漼�� ��Ÿ���� ���� �޿��� 10%��ŭ result�� �ʱ�ȭ, ���� result: �ҵ漼
	pay -= result;				// �޿�-�ҵ漼 ����� ���� pay= pay-result ��� ���� ���� pay�� �ʱ�ȭ
	printf("\t>> �ҵ漼(-)	: %8.0lf(��)\n", result);	// �ҵ漼 ���
	// /t���� ������, &8.0���� 8���� ���� ���缭 ���, %lf�� �Ǽ��� ���

	result = result / 10; // �ҵ漼���� 10%�� ���� �ֹμ��� ��Ÿ�������� 10%��ŭ result�� �ʱ�ȭ, ���� result:�ֹμ�
	pay -= result;		// �ҵ漼�� ���� �޿����� �ֹμ��� ���� ���� pay-result ��� ���� pay�� �ʱ�ȭ
	printf("\t>> �ֹμ�(-)	: %8.0lf(��)\n", result);	// �ֹμ� ���
	// /t���� ������, &8.0���� 8���� ���� ���缭 ���, %lf�� �Ǽ��� ���

	printf("\t>> �����(-)	: %8.0lf(��)\n", tax); // ����� ���,������ ����� ����� ���� tax�� ���
	// /t���� ������, &8.0���� 8���� ���� ���缭 ���, %lf�� �Ǽ��� ���

	pay -= tax; // �� ���޾� ����� ���� tax�� ���� ���ش�.
	printf("\t>> ���޾�	: %8.0lf(��)\n", pay);		// ���޾� ���
	// /t���� ������, &8.0���� 8���� ���� ���缭 ���, %lf�� �Ǽ��� ���

	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}