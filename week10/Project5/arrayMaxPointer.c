/*	�ǽ� 5 : arrayMaxPointer.c
	�ۼ��� : 2019. 05.06 (���ۼ��� 05.02~ ������ ���� ����)
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �־��� 1���� �迭�� ���� ū ���� �޸� �ּҸ� ��ȯ�ϴ� findMax�Լ��� ���� ���� ū ���� ����ϴ� ���α׷�
*/


#include <stdio.h>		// ��ó����
#define SIZE 10			// define������ SIZE�� 10���� ����

int* findMax(int* arrayAddress);		// ���� ū �� ��� �� �� �޸� �ּҸ� ��ȯ�ϴ� findMax�Լ�

int main(int argc, char argv[]) {		// main�Լ�

	int array[SIZE] = { 12,22,4,54,17,1,19,44,29,37 };	// 1���� �迭 ���� �� �ʱ�ȭ, �� ��쿣 SIZE�� ���������ϴ�.

	printf("�־��� �迭�� ���� ū ���� �޸� �ּ� : %p\n",findMax(array));	
	// �־��� �迭�� ���� ū ��(54)�� �޸𸮻��� �ּҸ� findMax�Լ��� ���� ��ȯ�޾� ����Ѵ�.

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}

int* findMax(int* arrayPointer) {	// ���� ū �� ��� �� �� �޸� �ּҸ� ��ȯ�ϴ� findMax�Լ�
	int i;		// �ݺ������� ����� ����
	int temp = arrayPointer[0];		// ������ ������ ���� temp�� �迭�� �̸�(�迭�� �����ּ����� &array[0])���� �ʱ�ȭ�Ѵ�.

	for (i = 1; i < SIZE; i++) {		// �־��� �迭���� ���� ū ���� ã�� �ݺ��� �ι�° �ε������� ������ �ε������� �ݺ�
		if (temp < arrayPointer[i]) {	// temp���� ����� �迭�� �ּҿ� i��° ���� �ּҿ� ���� ���Ͽ� 
			temp = arrayPointer[i];		// �� ū ���� temp�� ���� 
		}
	}
	printf("���� ū �� : %d\n", temp);	// �ݺ��� �� ����� temp(array�� ��)�� ���

	return &temp;	// �׸��� findMax�Լ��� temp(���� ū ��)�� �ּҸ� ��ȯ�Ѵ�.
					// �� ��쿣 �����Ϸ��� ���������� temp�� ��ȯ�ϹǷ� ����� ��Ÿ����.
}