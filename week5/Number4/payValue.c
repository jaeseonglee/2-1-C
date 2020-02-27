/*	�ǽ� 4 : payValue.c
	�ۼ��� : 2019. 03. 28 ~ 03. 31
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �޿��� �Է¹޾� ����ϴ� �Լ��� ���� �� ȣ���ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����

int getIncomeTax(int pay1);				// �ҵ漼�� ����ϴ� �Լ�
int getLocalinhabitantsTax(int pay2);	// �ֹμ��� ����ϴ� �Լ�
int getInsurnace(int pay3);				// ����Ḧ ����ϴ� �Լ�
int getPay(int pay4);					// �� �޿����� ����ϴ� �Լ�
void printResult(int pay5, int incomeTax, int localinhabitantsTax, int insurnace, int resultPay); // ��� ���� ����ϴ� �Լ�
 
// main ���� �Լ����� ���������ν� �����Ϸ����� �˷���

int main(int argc, char* argv[]) { //  main �Լ�

	int pay = 0;		// �� �޿��� ������ ������ ���� ���� �� �ʱ�ȭ
	int result = 0;		// ��� ���� ������ ������ ���� ���� �� �ʱ�ȭ
	
	printf("�� �޿��� �Է����ּ��� : ");		// �� �޿��� �Է��ش޶�� ���
	scanf_s("%d", &pay);		// �Է¹��� ����  pay�� ����, scanf_s�� ����ؼ� ������ ��Ÿ���� �ʰ� �Ѵ�.
	
	result = getPay(pay);		// �� �޿����� ����ϴ� �Լ��� ���� ���� ���� result�� ����
	printResult(pay, getIncomeTax(pay), getLocalinhabitantsTax(getIncomeTax(pay)), getInsurnace(pay), result);  
	// ����� ����ϴ� �Լ��� ���� ������� �ѱ޿�,�ҵ漼,�ֹμ�,�����,���޾��� ���
	// ������ �Լ��� ������� ���� ���� printResultȣ�� �� ����
	
	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

int getIncomeTax(int pay1) { // �ҵ漼�� ����Ͽ� ��ȯ�ϴ� getIncomeTac�Լ� 
	return pay1 / 10;		// ���������� �Է¹��� ���� 1/10�� ����Ͽ� ��ȯ
}

int getLocalinhabitantsTax(int pay2) {	// �ֹμ��� ����Ͽ� ��ȯ�ϴ� getLocalinhabitantsTax�Լ�
	return pay2 / 10; // ���������� �Է¹��� ���� 1/10�� ����Ͽ� ��ȯ
					  // ���������δ� �ҵ漼�� �޾� �ֹμ��� ����Ѵ�.
}

int getInsurnace(int pay3) { // ����Ḧ ����Ͽ� ��ȯ�ϴ� getInsurnace�Լ�
	return (int) (pay3 / 100 * 5.89);  // ���������� �Է¹��� ���� 5.89%�� ����Ͽ� ��ȯ 
}

int getPay(int pay4) { // �Ǳ޿����� ����ϴ� getPay�Լ� , �ٸ� �Լ����� ��ȯ�ϴ� ���� ����Ͽ� ��ȯ�Ѵ�.
	return pay4 - getIncomeTax(pay4) - getLocalinhabitantsTax(getIncomeTax(pay4)) - getInsurnace(pay4);
			// �ѱ޿����� �ҵ漼,�ֹμ�,����Ḧ ���� �� ���� ��ȯ�Ѵ�. 
}

void printResult(int pay5, int incomeTax, int localinhabitantsTax, int insurnace, int resultPay) {
	// ����� ����ϴ� printResult�Լ�, ���������� �ѱ޿�,�ҵ漼,�ֹμ�,�����,�Ǳ޿����� �޴´�.
	// �̶� ������������ �ٸ� �Լ��� ���� ���� �޴´�.
	printf("\t>> �ѱ޿�(+)	: %8d(��)\n", pay5);
	printf("\t>> �ҵ漼(-)	: %8d(��)\n", incomeTax);
	printf("\t>> �ֹμ�(-)	: %8d(��)\n", localinhabitantsTax);
	printf("\t>> �����(-)	: %8d(��)\n", insurnace);
	printf("\t>> ���޾�	: %8d(��)\n", resultPay);
	// ���� ���߱� ���� %8d ����Ͽ� ���� �������� ������ش�.
}