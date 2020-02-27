/*	�ǽ� 6 : bubbleSortArray.c
	�ۼ��� : 2019. 04. 10 ~ 04. 12
	�ۼ��� : 2016153 ���缺
	���α׷� ���� : �־��� �迭�� ���������ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����
#define SIZE 10			// define������ ��ũ�� ���SIZE�� 10���� ����

void bubbleSort(int arr[]);		// �־��� �迭�� ���������ϴ� bubbleSort�Լ� ����
void arrayPrint(int arr[]);		// �迭�� ����ϴ� arrayPrint�Լ� ����

int main(int argc, char* argv[]) {		// main �Լ�
	
	int array[SIZE] = { 1,9,2,8,3,7,4,6,5,0 };		//	ũ�Ⱑ 10�� �迭 ���� �� ������ ������ �ʱ�ȭ

	bubbleSort(array);		// bubbleSort�Լ��� �迭�� ��������
	arrayPrint(array);		// arrayPrint�Լ��� �迭�� ���
	
	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}

void bubbleSort(int arr[]) {	// �迭�� ���������ϴ� bubbleSort�Լ�, ���ĸ� �ϱ⶧���� void��
	int i;		// �ݺ������� ����� ���� i ,j
	int j;
	int temp;		// ������ ���� �ӽ������� temp ����

	// index�� �ٷ� ���� index�� ���ؼ� �ڸ��� �ٲٴ� ���� ����
	for (i = 0; i < SIZE; i++) {		// �迭�� ũ�⸸ŭ �ݺ�
		for (j = 0; j < SIZE-1; j++) {		// �迭�� ũ��-1��ŭ �ݺ� 
			if (arr[j] > arr[j + 1]) {		// j���� ���� j+1������ ������ 
				temp = arr[j + 1];			// ������ ���� arr[j+1]�� ���� ����
				arr[j + 1] = arr[j];		// arr[j+1] ���� arr[j]�� ���� ����
				arr[j] = temp;				// arr[j] ���� arr[j+1]�� ���� ����
			}								// ū ���� ������ ���� �������� ����
								//if (arr[j] > arr[j + 1])
								//�񱳿������� ������ �ٲٸ� ��������
		}
	}
}

void arrayPrint(int arr[]) {  // �迭�� ����ϴ� arrayPrint�Լ�
	int i;			//�ݺ������� ����� ����
	for (i = 0; i < SIZE; i++) {		// �迭�� ũ�⸸ŭ �ݺ�
		printf("%d ", arr[i]);			// �� �迭�� index�� ���
	}
	printf("\n");		// ��� �迭 ����� �ٹٲ�
}