/*	�ǽ� 3,4 : scanArray.c
	�ۼ��� : 2019. 04. 10 ~ 04.12
	�ۼ��� : 2016153 ���缺
	���α׷� ���� : ������ �迭 10���� �����κ��� ���� �Է¹޾� �ʱ�ȭ�ϰ� ����ϴ� ���α׷� (�ǽ� 3)
					�迭���� ã���� �ϴ� ���� �Է¹ް� �ش� �ε������� �����ϴ� ���α׷� �߰�(�ǽ� 4)
*/

#include <stdio.h>		// ��ó����
#define SIZE 10			// define������ ��ũ�� ��� SIZE�� 10���� ����

void scanArr(int arr[]);		// �迭�� �Է¹޴� scanArr�Լ�
void printArray(int arr[]);			//	�迭�� ����ϴ� printArray�Լ�
int findArray(int arr[], int key);		// �ǽ�4) ã�����ϴ� ���� ã�� findArray�Լ�

int main(int argc, char* argv[]) {		// main �Լ�

	int array[SIZE] = { 0 };		// ũ�Ⱑ 10�� �迭 ���� �� ��� index�� 0���� �ʱ�ȭ
	int num = 0;				//	�ǽ�4) ã�����ϴ� ���� ������  num ���� �� �ʱ�ȭ

	scanArr(array);			// scanArr�Լ��� ���� �迭�� �Է¹޴´�.
	printArray(array);			// printArray�Լ��� �迭�� ����Ѵ�.

	printf("\nã�� key ���� �Է����ּ��� : ");	// �ǽ�4) ã�����ϴ� ���� �Է��ش޶�� ���
	scanf_s("%d", &num);			// �ǽ�4) �Է¹��� ���� num�� ����, scanf_s�� ���� ������ ��������ʴ´�.

	if (findArray(array, num) == -1) {						// �ǽ�4) findArray�Լ��� -1�� ��ȯ�Ѵٸ� 
		printf("ã���� �ϴ� ���� �迭�� �������� �ʽ��ϴ�.\n");		// �ǽ�4) �迭���� �Էµ� ���� ���ٴ� �� �˸�
	}
	else {		// �ǽ�4) -1���� �ƴ� �ٸ� ��ȯ�� ���� �� ���� �ش��ϴ� index�̱� ������
		printf("%d�� �迭�� [%d]�ε����� �ֽ��ϴ�.\n", num, findArray(array, num)); // �ǽ�4) �Էµ� ���� ��� index�� �ִ��� ���� �˷��ָ� ���
	}

	system("pause");		// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void scanArr(int arr[]) {		// scanArr�Լ�, �Ű������� �迭�� �Է¹��� ������ �ʱ�ȭ�Ѵ�.
	int i;		// �ݺ������� ����� ����

	for (i = 0; i < SIZE; i++) {			// �迭�� ũ�⸸ŭ �ݺ�
		printf("�迭�� %d��° index�� �Է����ּ��� : ", i);		// �� index���� ���� �Է��ش޶�� ���
		scanf_s("%d", &arr[i]);		// �Է¹��� ������ �ش� index�� ����, scanf_s�� ������ ������� ����
	}
}

void printArray(int arr[]) {		// �迭�� ����ϴ� printArray�Լ�, �Ű������� ���� �迭�� ���
	int i;		// �ݺ������� ����� ����
	printf("��°�� > \n[ ");		// �ݺ��� ���
	for (i = 0; i < SIZE; i++) {	// �迭�� ũ�⸸ŭ �ݺ�
		printf("%d ", arr[i]);		// �迭�� �� index�� ���� ����Ѵ�.
	}
	printf("]\n");		
}

int findArray(int arr[], int key) {		// �ǽ�4) �Էµ� key���� �迭�� �ִ��� ã�� findArray�Լ�
	int i;		// �ǽ�4) �ݺ������� ����� ����

	for (i = 0; i < SIZE; i++) { // �ǽ�4) �迭�� ũ�⸸ŭ �ݺ�
		if (arr[i] == key) {  // ���� key���� ���� �迭�� �ִٸ�
			return i;		// �� �迭�� index�� ��ȯ 
		}	
	}
	return -1;		// �ش��ϴ� ���� ���ٸ� -1�� ��ȯ
}
