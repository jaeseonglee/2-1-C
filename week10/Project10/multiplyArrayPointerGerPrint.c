/*	�ǽ� 10 : multiplyArrayPointerGetPrint.c
	�ۼ��� : 2019. 05.06 (���ۼ��� 05.02~ ������ ���� ����)
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �ǽ� 9�� ����� �κ��� ���� getData, printData�Լ��� ������ ���α׷�
*/

#include <stdio.h>		// ��ó����
#define SIZE 5			// define������ SIZE�� 5�� ����

void getData(int* pAry, int size);		// �迭�� ���������� �Է¹޾� �ʱ�ȭ�ϴ� getData�Լ�
void printData(int* pAry, int size);	// �迭�� ����ϴ� printData�Լ�
void multiply(int* pAry, int size);		// �迭 ��ҿ� 2�� ���ϴ� multiply�Լ�

int main(int argc, char argv[]) {		// main�Լ�

	int ary[SIZE];	// ũ��5�� ������ �迭 ary ����

	getData(ary, SIZE);			// getData�Լ� ȣ��� �迭�� ���������� �Է¹޾� �ʱ�ȭ�Ѵ�.
	multiply(ary, SIZE);		// multiply�Լ� ȣ��� �迭�� �� ���� 2�� �����ش�.
	printData(ary, SIZE);		// printData�Լ� ȣ��� ���� �ٲ� �迭�� ����Ѵ�.

	printf("\n");		// �ٹٲ�
	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void getData(int* pAry, int size) {		// �迭�� ���������� �Է¹޾� �ʱ�ȭ�ϴ� getData�Լ�
	int* pWalk;		// ������ ���� pWalk ����
	int* pLast;		// ������ ���� pLast ����
	pLast = pAry + SIZE - 1;		// pLast�� �迭aty�� ������ �ּҸ� ����

	for (pWalk = pAry; pWalk <= pLast; pWalk++) {	// pWalk�� �迭�� �����ּҸ� ����, �������ּұ��� �ݺ��ϴ� �ݺ���
		printf("Please enter an integer: ");		// ������ �Է��ش޶�� ���
		scanf_s("%d", pWalk);		// �Է¹��� ������ ������ ���� pWalk�� ���� �迭�� �� �ε����� ���� ����
	}
}

void printData(int* pAry, int size) {		// �迭�� ����ϴ� printData�Լ�
	int* pWalk;		// ������ ���� pWalk ����
	int* pLast;		// ������ ���� pLast ����
	pLast = pAry + SIZE - 1;		// pLast�� �迭aty�� ������ �ּҸ� ����

	printf("Doubled value is : \n");		// 2�� ������ ���� ����Ѵٰ� ���
	for (pWalk = pAry; pWalk <= pLast; pWalk++) {	// multiply�Լ��� 2�� ������ �迭�� ������ ������ ���� ����ϴ� �ݺ���
		printf("%3d", *pWalk);		// ������ ���� pWalk�� ���� �迭 ���
	}
}


void multiply(int* pAry, int size) {	// �迭 ��ҿ� 2�� ���ϴ� multiply�Լ�
	int* pWalk;		// ������ ���� pWalk ����
	int* pLast;		// ������ ���� pLast ����

	pLast = pAry + size - 1;	// pLast�� �迭aty�� ������ �ּҸ� ����
	for (pWalk = pAry; pWalk <= pLast; pWalk++) {	// pWalk�� �迭�� �����ּҸ� ����, �������ּұ��� �ݺ��ϴ� �ݺ���
		*pWalk = *pWalk * 2;		// ������ ������ ���� ���� ������ �迭�� �� ���� 2�� ���� ������ �ʱ�ȭ�Ѵ�.
	}
}