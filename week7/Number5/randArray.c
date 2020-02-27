/*	�ǽ� 5 : randArray.c
	�ۼ��� : 2019. 04. 10 ~ 04. 12
	�ۼ��� : 2016153 ���缺
	���α׷� ���� : ������ �̿��� ���� �ٸ� ��(�ε���)�� ���� 6�� �迭�� �����ϰ� ����ϴ� ���α׷�
*/

#include <stdlib.h>		// �����Լ��� ���� ��ó����
#include <time.h>		// time�� ���� ��ó����
#include <stdio.h>		// ��ó����

#define SIZE 6		// define������ ��ũ�� ��� SIZE�� 6���� ����

void  randomArray(int arr[]);		// ���������� �迭�� �����ϴ� randomArray�Լ� ����
void printArray(int arr[]);			// �迭�� ����ϴ� printArray�Լ� ����

int main(int argc, char* argv[]) { // main �Լ�

	int array[SIZE];		// ũ�Ⱑ 6�� �迭 ���� 
	srand(time(NULL));  // srand�� ���� ������ ��������, ������ ���� �ð����� ����
	
	randomArray(array);		// randomArray�Լ��� �迭�� ���������� �ʱ�ȭ
	printArray(array);		// printArray�Լ��� �迭�� ���

	system("pause");		// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void  randomArray(int arr[]) {		// �迭�� ���������� �ʱ�ȭ�ϴ� randomArray�Լ� �迭�� �Ű������� �޴´�.
	int i;			// �ݺ������� ����� ����
	int j;			// �ݺ������� ����� ����
	
	for (i = 0; i < SIZE; i++) {		// �迭�� ũ�⸸ŭ �ݺ�
		arr[i] = (rand() % 45) + 1;		// 1~45������ �������� �迭�� ����
		for (j = 0; j < i; j++) {			// �� ����� index�� �ٸ� index�� ���� ������ �˻��ϴ� �ݺ���
			if (arr[i] == arr[j]) {		// i��° index�� ���� ������ index���� ���� ���ٸ� 
				printf("array[%d](=%d)�� �ߺ��Ǿ� �ٽ� �����մϴ�.\n", i, arr[i]);	 // �ߺ��Ǵ� ���� �˷��ְ� 
				i -= 1;		// i-1���� i�� �ʱ�ȭ�����ν� �ٽ� arrat[i]�� �������� �����Ѵ�.
				break;		// ��ø�ݺ����� break�� ������ �ʱ�ȭ�� i���� ������ �ٽ� �������� �迭�� �����ϴ� �ݺ��� �����Ѵ�.
			}
		}
	}
}

void printArray(int arr[]) {		// �迭�� ����ϴ� printArray�Լ�
	int i;			// �ݺ������� ����� ����
	printf("���� �ٸ� ���� %d���� �迭 : \n [ ", SIZE);		// ���� �ٸ� ũ�� 6�� �迭 ���
	for (i = 0; i < SIZE; i++) {		// �迭�� ũ�⸸ŭ �ݺ�
		printf("%d ", arr[i]);		// �� �迭�� index�� ���
	}
	printf("] \n");		// �ݺ��� ������ �ٹٲ�

}