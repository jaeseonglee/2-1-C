/*	�ǽ� 9 : multiplyArrayPointer.c
	�ۼ��� : 2019. 05.06 (���ۼ��� 05.02~ ������ ���� ����)
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �迭 ��ҿ� 2�� ���ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����
#define SIZE 5			// define������ SIZE�� 5�� ����

void multiply(int* pAry, int size);		// �迭 ��ҿ� 2�� ���ϴ� multiply�Լ�

int main(int argc, char argv[]) {		// main�Լ�

	int ary[SIZE];	// ũ��5�� ������ �迭 ary ����
	int* pLast;		// ������ ���� pLast ����
	int* pWalk;		// ������ ���� pWalk ����

	pLast = ary + SIZE - 1;		// pLast�� �迭aty�� ������ �ּҸ� ����
	for (pWalk = ary; pWalk <= pLast; pWalk++) {	// pWalk�� �迭�� �����ּҸ� ����, �������ּұ��� �ݺ��ϴ� �ݺ���
		printf("Please enter an integer: ");		// ������ �Է��ش޶�� ���
		scanf_s("%d", pWalk);		// �Է¹��� ������ ������ ���� pWalk�� ���� �迭�� �� �ε����� ���� ����
	}

	multiply(ary, SIZE);		// multiply�Լ� ȣ��� �迭�� �� ���� 2�� �����ش�.
	printf("Doubled value is : \n");		// 2�� ������ ���� ����Ѵٰ� ���
	for (pWalk = ary; pWalk <= pLast; pWalk++) {	// multiply�Լ��� 2�� ������ �迭�� ������ ������ ���� ����ϴ� �ݺ���
		printf("%3d", *pWalk);		// ������ ���� pWalk�� ���� �迭 ���
	}

	printf("\n");		// �ٹٲ�
	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void multiply(int* pAry, int size) {	// �迭 ��ҿ� 2�� ���ϴ� multiply�Լ�
	int* pWalk;		// ������ ���� pWalk ����
	int* pLast;		// ������ ���� pLast ����

	pLast = pAry + size - 1;	// pLast�� �迭aty�� ������ �ּҸ� ����
	for (pWalk = pAry; pWalk <= pLast; pWalk++) {	// pWalk�� �迭�� �����ּҸ� ����, �������ּұ��� �ݺ��ϴ� �ݺ���
		*pWalk = *pWalk * 2;		// ������ ������ ���� ���� ������ �迭�� �� ���� 2�� ���� ������ �ʱ�ȭ�Ѵ�.
	}
	return;
}