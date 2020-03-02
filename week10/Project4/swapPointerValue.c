/*	�ǽ� 4 : swapPointerValue.c
	�ۼ��� : 2019. 05.06 (���ۼ��� 05.02~ ������ ���� ����)
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : swap�Լ��� ���� ������ �ּҸ� �����Ͽ� �� ������ ���� �ٲٴ� ���α׷�
*/

#include <stdio.h>		// ��ó���� 

void swap(int* oneValue, int* anotherValue);	// �����͸� �Ű������� ���� swap�Լ�

int main(int argc, char* argv[]) {		// main�Լ�
	int firstValue = 1234;		// ù��° ������ ���� ���� �� �񱳸� ���� 1234�� �ʱ�ȭ
	int secondValue = 5678;		// �ι�° ������ ���� ���� �� �񱳸� ���� 5678�� �ʱ�ȭ

	printf("%d %d\n", firstValue, secondValue);		// �� ������ ����� ���� Ȯ���ϱ� ���� �� ���� ���

	swap(&firstValue, &secondValue);		// swap�Լ��� �� ������ �ּҸ� �����Ͽ� �� ���� ���� �ٲ��ش�.

	printf("%d %d\n", firstValue, secondValue);	// �ٽ� �� ������ ����� ���� Ȯ���ϱ� ���� �� ���� ���

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}

void swap(int* oneValue, int* anotherValue) {	// �����͸� �Ű������� ���� swap�Լ�, �� ���� �ٲٴ� ����� �Ѵ�.
	int temp;			// ������ ������ ���� ����
	temp = *oneValue;	// ������ ������ *oneValue ���� , firstValue�� �ּҸ� �����Ѵ�.
	*oneValue = *anotherValue;	// *oneValue�� *anotherValue ����, secondValue�� �ּҸ� �����Ѵ�.
	*anotherValue = temp;		// �ٽ� *another�� temp(firstValue�� �ּ�)�� ���������� 
								// main�Լ��� �� ������ �ּҸ����� �� ���� ���� �ٲ��ش�.
}