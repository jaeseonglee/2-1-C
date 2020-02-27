/*	�ǽ� 2 : fibonacciArray.c
	�ۼ��� : 2019. 04. 10 ~ 04. 12
	�ۼ��� : 2016153 ���缺
	���α׷� ���� : �迭 10���� �Ǻ���ġ ������ ���� �����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����

#define SIZE 10		// define������ ��ũ�� ��� SIZE�� 10���� ����

void printArray(int arr[]);		// �迭�� ����ϴ� printArray�Լ�
void setFiboArray(int arr[]);		// �迭�� �Ǻ���ġ������ �����ϴ� setFiboArray�Լ�

int main(int argc, char* argv[]) {		// main�Լ�
	int array[SIZE] = { 0 };		// ũ�Ⱑ 10�� �迭 ���� �� ��� index�� 0���� �ʱ�ȭ

	setFiboArray(array);		// setFiboArray�Լ��� ���� �迭�� �Ǻ���ġ ������ ����
	printArray(array);			// printArray�Լ��� �迭�� ���

	system("pause");			// ���â Ȯ��
	return 0;					// 0�� ��ȯ
}

void setFiboArray(int arr[]) {		// �迭�� �Ǻ���ġ������ �����ϴ� setFiboArray�Լ�, ������ �迭�� �Ű������� �޴´�
	int i;						// �ݺ������� ����� ���� 
	int temp1 = 0;				// �Ǻ���ġ������ 1������ 2,3,4...������ �ٲ�� �ӽú���1 ���� �� �ʱ�ȭ
	int temp2 = 1;				// �Ǻ���ġ������ 2������ 3,4,5...������ �ٲ�� �ӽú���2 ���� �� �ʱ�ȭ
	int sum = temp1 + temp2;	// �Ǻ���ġ������ ���� �� ����, 1�װ� 2���� ������ �ʱ�ȭ

	arr[0] = temp1;		// �Ǻ���ġ������ 1,2���� �� �迭�� index�� ����
	arr[1] = temp2;

	for (i = 2; i < SIZE; i++) {		// �ݺ����� ���� �迭�� �Ǻ���ġ������ ����
		sum = temp1 + temp2;		// �Ǻ���ġ������ �������� ������ �� ���� ���� ������ �ʱ�ȭ
		arr[i] = sum;		// �� i��° ���� �迭�� i���� index�� ����

		temp1 = temp2;		// (i-2)��° ���� (i-1)��° ������ �ʱ�ȭ
		temp2 = sum;		// (i-1)��° ���� (i)��° ������ �ʱ�ȭ
	}
}

void printArray(int arr[]) {		// �迭�� ����ϴ� printArray�Լ�, ������ �迭�� �Ű������� �޴´�.
	int i;					// �ݺ������� ����� ����
	printf("��°�� > \n[ ");		// �迭�� ���
	for (i = 0; i < SIZE; i++) {		// �ݺ����� �̿� �迭���
		printf("%d ", arr[i]);
	}
	printf("]\n");		// ����� ������ �ٹٲ�
}