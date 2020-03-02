/*	�ǽ� 5 : ArrayPlus.c
	�ۼ��� : 2019. 04. 28
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �� 2���� �迭�� ���� �迭�� �����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����
#define SIZE 3			// define������ ��ũ�� ��� SIZE�� 3���� ����

int sumIndex(int oneIndex, int twoIndex);		// �迭�� �ε����� ���Ͽ� int������ ��ȯ�ϴ� sumIndex�Լ�
void printArray(int arr[][SIZE]);			// 2���� �迭�� ����ϴ� printArray�Լ�

int main(int argc, char* argv[]) {		// main�Լ� 
	int arrayBlack[SIZE][SIZE] = { {1,5,6},		// 2���� �迭 arrayBlack ���� �� ������ ������ �ʱ�ȭ
								   {9,2,4},		// �� ��쿡�� ���� ũ�⸦ ������ �� �ִ�.
								   {8,7,3} };

	int arrayWhite[SIZE][SIZE] = { {3,4,9},		// 2���� �迭 arrayWhite ���� �� ������ ������ �ʱ�ȭ
								   {2,5,8},		// �� ��쿡�� ���� ũ�⸦ ������ �� �ִ�.
								   {1,6,7} };

	int arrayGray[SIZE][SIZE] = { {0}, {0}, {0} };	// 2���� �迭 arrayGray ���� �� 0���� �ʱ�ȭ
	int i, j;		// �ݺ������� ����� ���� 

	for (i = 0; i < SIZE; i++) {		// ��ø �ݺ����� ����� �� �迭�� ���� arrayGray�� ����
		for (j = 0; j < SIZE; j++) {	// 2���� �迭�� ��� ����ŭ �ݺ��ϰ�
			arrayGray[i][j] = sumIndex(arrayBlack[i][j], arrayWhite[i][j]);
		}	// sumIndex �Լ� ȣ���� ���� �� �迭�� �ε��� ���� arrayGray �迭�� �����Ѵ�
	}

	printf("��� A : \n");		// �־��� �迭�� ��� A�� ����Ѵٰ� ���
	printArray(arrayBlack);		// printArray�Լ� ȣ��� arrayBlack ���

	printf("��� B : \n");		// �־��� �迭�� ��� B�� ����Ѵٰ� ���
	printArray(arrayWhite);		// printArray�Լ� ȣ��� arrayWhite ���

	printf("��� A�� ��� B�� �� : \n");		// ��� A�� ��� B�� ���� ����Ѵٰ� ���
	printArray(arrayGray);		//  printArray�Լ� ȣ��� arrayGray ���

	system("pause");			// ���â Ȯ��
	return 0;					// 0�� ��ȯ
}

int sumIndex(int oneIndex, int twoIndex) {		// �迭�� �ε����� ���Ͽ� int������ ��ȯ�ϴ� sumIndex�Լ�
	return oneIndex + twoIndex;		// �Ű������� ���� �� ���� ���Ͽ�  ���������� ��ȯ�Ѵ�.
}

void printArray(int arr[][SIZE]) {		// 2���� �迭�� ����ϴ� printArray�Լ�
	int i, j;					// �ݺ������� ����� ����
	for (i = 0; i < SIZE; i++) {		// �Ű������� SIZE(��ũ��) ��ŭ �ݺ�
		for (j = 0; j < SIZE; j++) {	// �Ű������� SIZE(��ũ��) ��ŭ �ݺ�	
			printf("%d\t", arr[i][j]);		// ������ �ش��ϴ� �ε����� ��� \t���� ������ �����ش�.
		}
		printf("\n");		// �ϳ��� �� ����� ���������� �ٹٲ�
	}
}