/*	�ǽ� 3 : structExample.c
	�ۼ��� : 2019. 05. 20 ~ 05. 23
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : typedef ����ü�� �̿��ؼ� �м����� ����ϴ� ���α׷�
*/

#include <stdio.h>		//��ó����

int main(int argc, char* argv[]) {		// main�Լ�

	typedef struct {		// typedef�� ����ü 
		int numerator;		// ������ ��� numerator ����
		int denominator;	// ������ ��� demoninator ����
	} FRACTION;				// ����ü�� �̸� FRACTION ������ ������ ����ü ����, main�Լ����� ����Ǿ���.
						// typedef ������ �� ����ü�� �̸��� ��� �빮�ڷ� ����� ����ߴ�.

	FRACTION fr1;		// ����ü�� fr1, fr2, res ���� 
	FRACTION fr2;
	FRACTION res;

	printf("Key first fraciton in the form of x/y: ");		// ù��° �м��� x,y�� �Է��ش޶�� ���
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator);		// �Է¹��� ���� fr1 ������ �̿��ؼ� fr1�� ����� ���� ����
	printf("Key second fraciton in the form of x/y: ");		// �ι�° �м��� x,y�� �Է��ش޶�� ���
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator);		// �Է¹��� ���� fr2 ������ �̿��ؼ� fr1�� ����� ���� ����
														//scanf_s�� �̿��ؼ� ��� ������� �ʰ���
	
	res.numerator = fr1.numerator * fr2.numerator;			// res�� ��� numerator�� �� �м��� ������ ���� ���� 
	res.denominator = fr1.denominator * fr2.denominator;	// res�� ��� denominator�� �� �м��� �и��� ���� ���� 

	printf("\n The result of %d/%d * %d/%d is %d/%d\n",		// �Է��ߴ� �� ���ڵ��� ���, ù��°,�ι�° ���ڿ� �� ���� ����Ѵ�.
		fr1.numerator, fr1.denominator,				// ������ ����ü ������ ������� �������̱� ������ %d ���
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);
	
	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}
