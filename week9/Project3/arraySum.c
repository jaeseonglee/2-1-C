/*	�ǽ� 3 : arraySum.c
	�ۼ��� : 2019. 04. 25 ~ 04. 28 
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �־��� 2���� �迭�� �� ��� ���� ���� ����ϰ� �����ϴ� �Լ��� �̿��� ����ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����
#define SIZE 5			// define�� ���� SIZE�� 5�� ����

void sumArray(int arr[][SIZE], int rowSum[], int colSum[]);  // �־��� 2���� �迭�� �� ��� ���� ���� ����ϴ� sumArray�Լ�
void printArray(int arr[][SIZE], int rowSum[], int colSum[]); // 2���� �迭�� �� ��� ���� ���� ����ϴ� printArray�Լ�

int main(int argc, char *argv[]) {		// main �Լ�
	int array[5][5] = { {1,2,3,4,5},	
						{1,3,5,7,9},		// 2���� �迭 ���� �� ������ ������ �ʱ�ȭ
						{2,3,4,5,6},		// �� ��쿡�� ���� 5 ���������ϴ�.
						{2,4,6,8,10},
						{3,6,9,12,15} };
	int row[SIZE] = { 0 };		// ���� ���� ������ �迭 ���� �� 0���� �ʱ�ȭ
	int col[SIZE] = { 0 };		// ���� ���� ������ �迭 ���� �� 0���� �ʱ�ȭ

	sumArray(array, row , col );		// sumArray �Լ� ȣ��
	printArray(array, row, col);		// printArray �Լ� ȣ��
	
	system("pause");		// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void sumArray(int arr[][SIZE], int rowSum[], int colSum[]) {  // �־��� 2���� �迭�� �� ��� ���� ���� ����ϴ� sumArray�Լ�
	int i,j;			// �ݺ������� ����� ����
	for (i = 0; i < SIZE; i++) {		// SIZE��ŭ �ݺ��ϴ� �ݺ���
		for (j = 0; j< SIZE; j++) {		// SIZE��ŭ �ݺ��ϴ� �ݺ���. �־��� 2���� �迭 ��ŭ�̴�.
			rowSum[i] += arr[i][j];		// 2���� �迭�� i��° ���� ��� ���� rowSum[i]�� ���ؼ� ����
			colSum[j] += arr[i][j];		// 2���� �迭�� j��° ���� ���� colSum[j]�� �����Ͽ� ��ø�ݺ����� ���������� ����
		}
	}
}

void printArray(int arr[][SIZE], int rowSum[], int colSum[]) {// 2���� �迭�� �� ��� ���� ���� ����ϴ� printArray�Լ�
	int i,j;		// �ݺ������� ����� ����
	printf("2���� �迭 ��� : \n");		// �־��� 2���� �迭�� ����Ѵٰ� ���
	for (i = 0; i < SIZE; i++) {		// ��ø �ݺ����� ��� 2���� �迭 ���
		for (j = 0; j < SIZE; j++) {	
			printf("[%d][%d] : %d\t", i, j, arr[i][j]);		// ������ �ε����� �Բ� 2���� �迭 ���
		}
		printf("\n");		// �� ���� ����� ���������� �ٹٲ�
	}
	printf("\n"); // 2���� �迭�� ����� ������ �ٹٲ�

	for (i = 0; i < SIZE; i++) {		// ���� ���� ����ϴ� �ݺ���
		printf("%d��° ���� �� : %d\n", i, rowSum[i]);	// ������ �ε����� �Բ� 2���� �迭�� ���� ���� ���		
	}
	printf("\n");		// ��� ���� ���� ����ϰ� �ٹٲ�

	for (i = 0; i < SIZE; i++) {		// ���� ���� ����ϴ� �ݺ���
		printf("%d��° ���� �� : %d\n", i, colSum[i]);	// ������ �ε����� �Բ� 2���� �迭�� ���� ���� ���
	}
	printf("\n");		// ��� ���� ���� ����ϰ� �ٹٲ�
}