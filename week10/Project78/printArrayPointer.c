/*	�ǽ� 7,8 : printArrayPointer.c
	�ۼ��� : 2019. 05.06 (���ۼ��� 05.02~ ������ ���� ����)
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �����͸� ������ �迭����ϴ� ���α׷�
				�ǽ� 8 : �߰��� forwardPrint�Լ��� backwardPrint�Լ� �ۼ�
*/

#include <stdio.h>			//��ó����
#define MAXSIZE 10			// MAXSIZE�� 10���� ����

void forwardPrint(int* aryPointer);		// �ǽ� 8: �迭�� �������� ����ϴ� forwardPrint�Լ�
void backwardPrint(int* aryPointer);	// �ǽ� 8: �迭�� �������� ����ϴ� backwardPrint�Լ�

int main(int argc, char* argv[]) {			// main�Լ�
	int ary[] = { 1,2,3,4,5,6,7,8,9,10 };		// ������ �迭 ary���� �� ������ ������ �ʱ�ȭ
	int* pWalk;		// ������ ���� pWalk ����
	int* pEnd;		// ������ ���� pEnd ����

	printf("Array forward");		// Array forward ���
	for (pWalk = ary, pEnd = ary + MAXSIZE; pWalk < pEnd; pWalk++) {
		//	pWalk�� ary(�迭�� �̸�, �� �迭�� �����ּ�), pEnd�� ary+10(�迭�� ������ �ּ� + 1)�� ����
		//	pEnd�� ������ �ּ� +1 �� ������ �ݺ����� ������ ���� ������ ���ұ��� ����ϱ� ���ؼ��̴�.
		//	pWalk++�� ���� �迭�� ������ ���ұ��� �����͸� ���� ����ϴ� �ݺ���
		printf("%3d", *pWalk);	// %3d�� 3ĭ�� ������ ���� ���, *pWalk�� ���������Ͽ� �迭�� ���� ���
	}
	printf("\n");		// �ݺ����� ������ �ٹٲ�

	printf("Array backward");		// Array backward ���
	for (pWalk = pEnd - 1; pWalk >= ary; pWalk--) {
		//	pWalk�� pEnd -1(�迭�� ������ �ּ�)�� ����, pWalk�� ary(�迭�� �����ּ�)�� ������������
		//	pWalk--�� ���� �迭�� ������ ���ұ��� �����͸� ���� ����ϴ� �ݺ���
		printf("%3d", *pWalk);	// %3d�� 3ĭ�� ������ ���� ���, *pWalk�� ���������Ͽ� �迭�� ���� ���
	}
	printf("\n");		// �ݺ����� ������ �ٹٲ�

	printf("\n�ǽ� 8 : �Լ�ȣ��\n");		// �ǽ� 8 : �Լ��� �������� �������� �迭 ���
	forwardPrint(ary);		// forwardPrintr�Լ� ȣ��� �迭 �������� ���
	backwardPrint(ary);		// backwardPrint�Լ� ȣ��� �迭 �������� ���

	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void forwardPrint(int* aryPointer) {	// �ǽ� 8: �迭�� �������� ����ϴ� forwardPrint�Լ�
	int* forwardStart;		// �����ͺ��� forwardStart ���� 
	int* forwardEnd;		// �����ͺ��� forwardEnd ����		, ���� main�Լ��� pWalk�� pEnd�� �ش��Ѵ�.
	printf("Array forward");		// Array forward ���
	for (forwardStart = aryPointer, forwardEnd = aryPointer + MAXSIZE; forwardStart < forwardEnd; forwardStart++) {
		printf("%3d", *forwardStart);		// main�Լ��� �ݺ����� ���� ������ �ݺ��Ͽ� ���
	}
	printf("\n");		// �ݺ��� ������ �ٹٲ�
}

void backwardPrint(int* aryPointer) {	// �ǽ� 8: �迭�� �������� ����ϴ� backwardPrint�Լ�
	int* backwardStart;							// �����ͺ��� backwardStart ���� 
	int* backwardEnd = aryPointer + MAXSIZE;	// �����ͺ��� backwardEnd ���� �� �迭�� �������ּ�+1�� �ʱ�ȭ	, ���� main�Լ��� pWalk�� pEnd�� �ش��Ѵ�.
	printf("Array backward");		// Array backward ���
	for (backwardStart = backwardEnd-1; backwardStart >= aryPointer; backwardStart--) {
		printf("%3d", *backwardStart);	// main�Լ��� �ݺ����� ���� ������ �ݺ��Ͽ� ���
	}
	printf("\n");		// �ݺ����� ������ �ٹٲ�
}