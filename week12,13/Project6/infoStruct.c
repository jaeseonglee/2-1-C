/*	�ǽ� 6 : infoStruct.c
	�ۼ��� : 2019. 05. 22 ~ 05. 23
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : 1. 5���� ������ ������ �� �ִ� ����ü �迭 ���� �� �ݺ����� ���� �Է¹ް�
					2. 5���� ������ ����, ����� �����Ͽ� ����ϰ�
					3. �Է°� ���, ������ ����� �Լ��� �̿��Ͽ� ó���ϴ� ���α׷�
*/

#define _CRT_SECURE_NO_WARNINGS		// scanf�� ����Կ� �־� ������ ������� �ʰ���
#include <stdio.h>					// ��ó����
#define SIZE 5						// SIZE�� ��ũ�� ��� 5�� ����

typedef struct {	// typedef�� ����ü
	char name[20];	// ���ڿ� ��� ����, �̸��� ����Ų��.
	int age;		// ������ ��� ����, ���̸� ����Ų��.
	int score[2];	// �߰��� �⸻ ������ ����Ű�� ������ �迭 ��� ����
}STUDENT;			// ����ü�� �̸� STUDENT ������ ������ ����ü ����, �빮�ڷ� ���� �Ϳ� ����, main�Լ� �ۿ��� �����

void getInfo(STUDENT* st);			// ������ �Է¹޴� getInfo�Լ�
void printInfo(STUDENT st);			// ������ ����ϴ� printInfo�Լ�
int getTotal(STUDENT st);			// ������ ����Ͽ� ��ȯ���ִ� getTotal�Լ�
double getAverage(STUDENT st);		// ����� ����Ͽ� ��ȯ���ִ� getAverage�Լ�

int main(int argc, char* argv[]) {			// main�Լ�
	STUDENT arr[SIZE] = { "", 0, 0  };		// ����ü �迭 ���� �� �ʱ�ȭ
	int i;		// �ݺ������� ����� ����

	for (i = 0; i < SIZE; i++) {	// ������ �Է¹ޱ� ���� �迭�� ũ�⸸ŭ �ݺ��ϴ� �ݺ���
		getInfo(&arr[i]);			// getInfo�Լ� ȣ��� ����ü �迭���� �����ر���, �迭�� �ּҸ� �������־� main���� ������ �� �ְ� �Ѵ�.
	}
	
	printf("�̸�\t����\t�߰�\t�⸻\t����\t���\n");		// �Է¹��� ������ ����� �� ���� Ȯ���ϱ� ���ϰ� ��� 

	for (i = 0; i < SIZE; i++) {	// ���� ������ ����ϱ� ���� �迭�� ũ�⸸ŭ �ݺ��ϴ� �ݺ���
		printInfo(arr[i]);
	}

	printf("\n");	// �ݺ��� ������ �ٹٲ�
	
	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void getInfo(STUDENT* st) {		// ������ �Է¹޴� getInfo�Լ�, ����ü �����͸� ������ ������.
	printf("�̸��� �Է����ּ��� : ");		// �̸��� �Է��ش޶�� ���
	scanf("%s", st->name);			// �Է¹��� �̸��� ����ü �����͸� ���� name�� ����, �� main�� ����ü �迭�� �����Ͽ� �����Ѵ�.
	//scanf_s("%s", st->name, 20);	scanf_s�� ����ϸ� ��Ÿ�� �� �ִ� ����
	printf("���̸� �Է����ּ��� : ");		// ���̸� �Է��ش޶�� ���	
	scanf_s("%d", &st->age);			// �Է¹��� ���̸� ����ü �����͸� ���� age�� ����, �� main�� ����ü �迭�� �����Ͽ� ����
	printf("�߰����� �⸻��� ������ �Է����ּ��� : ");	// �߰���� ������ �⸻��� ������ �Է��ش޶�� ���
	scanf_s("%d %d", &st->score[0], &st->score[1]);		// �Է¹��� �� ������ ����ü �����͸� ���� ���� 
														// (*st).name �� st->name �� ����.
}

void printInfo(STUDENT st) {			// ������ ����ϴ� printInfo�Լ�, ����ü�� ������ ������.
	printf("%s\t", st.name);			// �Ű������� ���� ����ü�� ������ ����� ����Ѵ�.
	printf("%d\t", st.age);
	printf("%d\t", st.score[0]);
	printf("%d\t", st.score[1]);
	printf("%d\t", getTotal(st));		// getTotal�Լ� ȣ��� ������ ����Ѵ�.
	printf("%.2lf\n", getAverage(st));	// getAverage�Լ� ȣ��� ����� ����Ѵ�, �������Ʒ� 2�ڸ����� ������� %.2lf���
}

int getTotal(STUDENT st) {			// ������ ����Ͽ� ��ȯ���ִ� getTotal�Լ�, ����ü�� ������ ���´�.
	return st.score[0] + st.score[1];		// ����ü ����� score�� �� index�� ���� ��ȯ�Ѵ�.
}

double getAverage(STUDENT st) {		// ����� ����Ͽ� ��ȯ���ִ� getAverage�Լ�, ����ü�� ������ ���´�.
	return getTotal(st) / 2;		// getTotal�Լ� ȣ��� ����ü ��� score�� ������ ��� 2�� ������ ��ȯ�Ѵ�.
}