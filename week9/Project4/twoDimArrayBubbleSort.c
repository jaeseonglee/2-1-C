/*	�ǽ� 4 : twoDimArrayBubbleSort.c
	�ۼ��� : 2019. 04. 25 ~ 04. 28
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : 2���� �迭�� 1���� ������ bubbleSort�� �����Ͽ� �����ϴ� ���α׷�
*/

#include <stdio.h>			// ��ó����
#define ROW 3			
#define COL 6				// define������ ��ũ�� ��� ROW�� COL�� ���� 3�� 6���� ����

void bubbleSort(int arr[]);			// �־��� �迭�� ���������ϴ� bubbleSort�Լ�
void printArray(int arr[ROW][COL]);	// 2���� �迭�� ����ϴ� printAraay�Լ�

int main(int argc, char *argv[]) {		// main �Լ�
	int twoDimArray[ROW][COL] = { {2,3,1,4,5,7},		// 2���� �迭 ���� �� ������ ������ �ʱ�ȭ
							      {4,6,3,2,1,5},		// �� ��쿡�� 2���� �迭�� ��ũ�⸦ ������ �� �ִ�. 
								  {1,2,6,7,3,4} };
	
	int i;	 // 2���� �迭�� 1������ ���·� �������Ŀ� ����� �ݺ������� ����� ����

	printArray(twoDimArray);	// �־��� 2�����迭�� printArray �Լ��� ���� ���
		
	printf("\n�־��� �迭�� bubbleSort, ");		// �����ѵ��� 2���� �迭�� ����Ѵٰ� ���
	for (i = 0; i < ROW; i++) {		// �ݺ����� ���� 2���� �迭�� 1������ ���·� bubbleSort�Լ�ȣ�� ��������
		bubbleSort(twoDimArray[i]);	// 2���� �迭�� 1�����迭�� ���·� ����
	}
	printArray(twoDimArray);		// ������ 2�����迭�� printArray �Լ��� ���� ���

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}

void bubbleSort(int arr[]) {		// �־��� �迭�� ���������ϴ� bubbleSort�Լ�
	int i, j;	// �ݺ������� ����� ����
	int temp;	// ������ ���� ����� �ӽð�
	
	for (i = 0; i < COL; i++) {		// ��ø �ݺ����� ���� ���� ����
		for (j = 0; j < COL - 1; j++) {
			if (arr[i] < arr[j]) {// ���� �������� �����ϱ� ���� '<' ������ ��� 
				temp = arr[j];		// ���ǹ��� ����� ture�� �ӽð��� arr[j] ����
				arr[j] = arr[i];	// arr[j]�� arr[i] ����
				arr[i] = temp;		// arr[i]�� temp�� ����, ���� �ٲ��ش�.
			}
		}
	}
}
void printArray(int arr[ROW][COL]) {		// 2���� �迭�� ����ϴ� printAraay�Լ�
	int i, j;			// �ݺ������� ����� ����
	printf("2���� �迭 ��� : \n");		// �־��� 2���� �迭�� ����Ѵٰ� ���
	for (i = 0; i < ROW; i++) {		// ��ø �ݺ����� ��� 2���� �迭 ���
		for (j = 0; j < COL; j++) {
			printf("[%d][%d] : %d\t", i, j, arr[i][j]);		// ������ �ε����� �Բ� 2���� �迭 ���
		}
		printf("\n");		// �� ���� ����� ���������� �ٹٲ�
	}
}