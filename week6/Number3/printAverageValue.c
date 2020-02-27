/*	�ǽ� 3 : printAverageValue.c
	�ۼ��� : 2019. 04. 02 ~ 04. 06
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : 0�� �ƴ� ������ �Էµ� �������� �հ� ����� ����ϰ� ����ϴ� ���α׷�
*/

#include <stdio.h>		//��ó����

double averageResult(double total, int count);	// ����� ����ϴ� averageResult�Լ� ����

int main(int argc, char* argv[]) {		// main �Լ�

	int num = 0;		// �Է¹��� ������ ���� ���� �� �ʱ�ȭ
	int sum = 0;		// �Է¹��� �������� �� ���� ���� �� �ʱ�ȭ
	double countValue = 0; // �ݺ����� �ݺ��� ������ �����ϴ� ���� ���� �� �ʱ�ȭ

	do {		// do while �ݺ���
		printf("���� �Է� : ");		// ������ �Է��ش޶�� ���
		scanf_s("%d", &num);		// �Է¹��� ������ num�� ����, scanf_s�� ���� ������ ������� ����

		if (num == 0) {			// ���� �Է¹��� ������ 0�̸�
			continue;			// continue �� ����� while�� ���ǽ��� �˻��Ѵ�.
		}

		sum += num;			// �Է¹��� (0���� ū) num�� sum���� ���ؼ� ����, �Է¹޴� �������� ���̴�.
		printf("-> ��: %d ���: %.1lf\n", sum, averageResult(sum, ++countValue));	// �Է¹��� �������� �հ� ����� ���
		// sum ������� %d, double���� ��ȯ�ϴ� �Լ��� ���� %lf ���, �Ҽ��� �Ʒ� 1�ڸ��� ������� .1 ���,
		// �� �ݺ����� �ݺ�Ƚ���� �����ϴ� ���� averageResult�Լ����� �˷��ֱ� ���� ++countValue�� ���� ������Ų�� �����Ѵ�.

	} while (num != 0);		// �־��� ���ǽ��� true�� �ݺ��ϴ� do while��, do while���� while�� ���ǽ��� TURE/FALSE�� ���� �ϴ� 
	printf("-> ����\n");		// do�� �ݺ��� ������ �ݺ��Ѵ�. ������ 0�� �Էµ� ���� ��հ��� ������ ��ġ�Ƿ� do������ if�� ���� continue�� ���
							// while�� ���ǽ��� �˻��ؼ� false�� ��� "-> ����"�� ����ϰ� �ݺ��� ��ģ��.

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}

double averageResult(double total, int count) { // double���� ��ȯ�ϴ� averageResult �Լ�, ���������δ� �������� �հ� �ݺ�Ƚ���� ������ �޴´�.
	total = total / count;			// ���� �Էµ� �������� ���� �ݺ�Ƚ��, �� ������ ��� �ԷµǾ������� ������.
	return total;		// �������� ���� �Է�Ƚ���� ���� ���� ��ȯ�Ѵ�.
}