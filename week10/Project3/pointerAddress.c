/*	�ǽ� 3 : pointerAddress.c
	�ۼ��� : 2019. 05.06 (���ۼ��� 05.02~ ������ ���� ����)
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : main�Լ����� ������ ���� �����ϰ� printAddress�Լ��� ���� �޸𸮻��� �ּҸ� ����ϴ� ���α׷�
*/

#include <stdio.h>	// ��ó����

void printAddress(int* intPointer, double* douPointer, char* charPointer);		// ������ �������� �Ű������� �޴� printAddress�Լ�

int main(int argc, char* argv[]) {		// main �Լ�

	int intVaule;				// ������, �Ǽ���, ������ ���� ����
	double douValue;			
	char charValue;

	printAddress(&intVaule, &douValue, &charValue);	// printAddress�Լ��� ������ ���� ����

	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void printAddress(int* intPointer, double* douPointer, char* charPointer) {	// ������ �������� �Ű������� �޴� printAddress�Լ�

	printf("���� ���� �ּ� : %p\n", intPointer);	// main�Լ����� ���� intValue�� �ּҸ� ���
	printf("�Ǽ� ���� �ּ� : %p\n", douPointer);	// main�Լ����� ���� douValue�� �ּҸ� ���
	printf("���� ���� �ּ� : %p\n", charPointer);	// main�Լ����� ���� charValue�� �ּҸ� ���

}