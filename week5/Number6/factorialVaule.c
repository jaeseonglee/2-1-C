/*	�ǽ� 6 : factorialValue.c
	�ۼ��� : 2019. 03. 31
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : ���丮�� ����� ���ȣ���� ���� ����ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����

long long factorial(int number);		// ����Լ� factorial�� ����, ���� ���İ��� Ŀ���Ƿ� long long������ ���

int main(int argc, char* argv[]) {	// main �Լ�
	int num = 0;			// ������ ���� num ���� �� �ʱ�ȭ
	long long fact = 0;		// ���丮�� ������� ������ ���� fact ���� �� �ʱ�ȭ

	printf("����� ���丮���� ũ�⸦ �Է��ϼ��� : \n");  // ���丮���� ũ�⸦ �Է��ش޶�� ���
	scanf_s("%d", &num);			// �Է¹��� ������ num�� ����, scan_s�� ���� ������ ������ �ʰ� ��
	fact = factorial(num);			// factorial�Լ��� ���� ���� ���丮�� ���� fact�� ���� 

	printf("1���� %d ������ ���丮�� ���� %lld�Դϴ�. \n", num, fact); // �Էµ� ������ ���丮�� ���� ���, ���� ������ Ÿ�Կ� ���� %d �� %lld(long long) ���
		
	system("pause");		// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

long long factorial(int number) {		// long long�� ������ ��ȯ�ϴ� factorial ����Լ� 
	if (number <= 1) {	//  ����Լ��� ���Ѹ� �ڱ� �ڽ��� ȣ���ؼ��� �ȵǱ� ������ ���������� �ʿ��ϴ�
		return 1;	// 0!(0�� ���丮��) == 1 �̶�� ������ �����.
	}
	return number * factorial(number - 1); // ����Լ��� ����, number-1 ��� ���� ���� �ڱ� �ڽ��� �ݺ��Ͽ� ����Ѵ�.
}