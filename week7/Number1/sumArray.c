/*	�ǽ� 1 : sumArray.c
	�ۼ��� : 2019. 04. 10 ~ 04. 12
	�ۼ��� : 2016153 ���缺
	���α׷� ���� :  10���� ������ �迭�� ����� ���ÿ� �ʱ�ȭ�ϰ� �迭�� ���� ����ϰ� �迭�� �� ���� ����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����

#define SIZE 10			// define������ SIZE�� 10���� ��ũ�� ����� ����

void printArray(int arr[]);			// �迭�� ����ϴ� printArray�Լ� ����
int sumArray(int arr[]);			// �� �迭�� ���� ���� ���ϴ� sumArray�Լ� ����

int main(int argc, char* argv[]) {			// main �Լ�

	int array[SIZE] = { 4,2,3,1,4,5,6,7,4,3 };		// �迭�� ����, �迭�� ũ�⸸ŭ �ʱⰪ�� �����Ѵ�

	printArray(array);					// printArray�Լ��� ���� �迭�� ���
	printf("�迭 �� : %d\n", sumArray(array));			// sumArray�Լ��� ���� ��ȯ�� ���� ���

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}

void printArray(int arr[]) {		// �迭�� ����ϴ� printArray�Լ�, ������ �迭�� �Ű������� �޴´�.
	int i;		// �ݺ������� ����� ����

	printf("��°�� > \n");			// �迭 ���
	for (i = 0; i < SIZE; i++) {			// �迭�� ����� �ݺ����� ���� ����Ѵ�(for)
		printf("�迭[%d] = %d\n", i, arr[i]);  // �� �ε����� ���� ����Ѵ�.
	}
}

int sumArray(int arr[]) {			// �迭�� ���� ���ϴ� sumArray�Լ�, ������ �迭�� �Ű������� �޴´�.
	int sum = 0;			// �迭�� ������ ������ sum ���� �� �ʱ�ȭ
	int i;			// �ݺ������� ����� ����

	for (i = 0; i < SIZE; i++) {		// �� �迭�� ���ҵ��� ���� sum�� ���ؼ� �����Ѵ�.
		sum += arr[i];
	}
	return	sum;		// �ݺ����� ������ sum�� ��ȯ
}