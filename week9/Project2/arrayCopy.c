/*	�ǽ� 2 : arrayCopy.c
	�ۼ��� : 2019. 04. 25 ~ 04. 28
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �־��� 2�����迭�� 1�����迭�� �����ϴ� ���α׷�
*/

#include <stdio.h>			// ��ó����
#define ROW 2
#define COL 8			// define������ ��ũ�λ�� ROW�� 2�� ����, COL�� 8�� ����

void copyArray(int twoDimArray[ROW][COL]);		// �־��� �迭�� �����ϴ� copyArray�Լ�

int main(int argc, char *argv[]) {		// main �Լ�
	int twoDimArray[ROW][COL] = { {1,3,5,7,9,11,13,15},		// 2���� �迭 ���� �� ������ ������ �ʱ�ȭ 
								{2,4,6,8,10,12,14,16} };	// �� ��쿡�� 2���� �迭�� �� ũ�⸦ ���������ϴ�.

	copyArray(twoDimArray);		// copyArray �Լ��� 2���� �迭�� 1���� �迭�� ���� �� �ʱ�ȭ, ����� �迭 ���

	system("pause");		// ���â Ȯ�� 
	return 0;				// 0���� �ʱ�ȭ
}

void copyArray(int twoDimArray[ROW][COL]) {		// �־��� �迭�� �����ϴ� copyArray�Լ�
	int oneDimArray[ROW * COL] = { 0 };		// 1���� �迭 ���� �� 0���� �ʱ�ȭ
	int i,j;			// �ݺ������� ����� ����
	for (i = 0; i < ROW; i++) {			// ��ø�ݺ������� 2���� �迭�� 1���� �迭�� ����
		for (j = 0; j < COL; j++) {		// 2���� �迭�� ��� ���� ����ŭ 1���� �迭�� �ʱ�ȭ ���ش�.
			oneDimArray[(i * COL) + j] = twoDimArray[i][j];
		}	// 2���� �迭�� �� �ε����� 1���� �迭�� �ε����� ���� �� �� �ֵ��� 'i*(2���� �迭�� ��ũ��) +j' ���� 
	}		// ����ؼ� 1���� �迭�� �����Ѵ�.

	printf("��� : \n");				// �׷��� ���� ���� ����� 1���� �迭�� ����Ѵٰ� ���
	for (i = 0; i < ROW * COL; i++) {		// 1���� �迭�� ũ�� ��ŭ �ݺ� (ROW * COL) == 2*8 == 16
		printf("%d ", oneDimArray[i]);		// 1���� �迭�� ������ ���� ���
	}
	printf("\n");	// ����� ������ �ٹٲ�
}