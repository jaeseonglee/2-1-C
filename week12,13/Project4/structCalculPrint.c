/*	�ǽ� 4 : strucCalculPrint.c
	�ۼ��� : 2019. 05. 20 ~ 05. 23
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �ǽ� 3������ ��� �� ��ºκ��� �Լ��� ���ۼ��� ���α׷� 
*/

#include <stdio.h>		//��ó����

typedef struct {		// typedef�� ����ü 
	int numerator;		// ������ ��� numerator ����
	int denominator;	// ������ ��� demoninator ����
} FRACTION;				// ����ü�� �̸� FRACTION ������ ������ ����ü ����, main�ۿ��� ����Ǿ���.
						// typedef ������ �� ����ü�� �̸��� ��� �빮�ڷ� ����� ����ߴ�.

void multiplication(FRACTION f1, FRACTION f2);			// �м��� ���� ����ϰ� ����ϴ� multiplication �Լ� 

int main(int argc, char* argv[]) {		// main�Լ�

	FRACTION fr1;		// ����ü�� fr1, fr2���� 
	FRACTION fr2;
	
	printf("Key first fraciton in the form of x/y: ");		// ù��° �м��� x,y�� �Է��ش޶�� ���
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator);		// �Է¹��� ���� fr1 ������ �̿��ؼ� fr1�� ����� ���� ����
	printf("Key second fraciton in the form of x/y: ");		// �ι�° �м��� x,y�� �Է��ش޶�� ���
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator);		// �Է¹��� ���� fr2 ������ �̿��ؼ� fr1�� ����� ���� ����
															//scanf_s�� �̿��ؼ� ��� ������� �ʰ���

	multiplication(fr1, fr2);				// multiplication�Լ� ȣ���� ���� �Է¹��� �м��� ���� �� ���� ����Ѵ�.

	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void multiplication(FRACTION f1, FRACTION f2) {		// �м��� ���� ����ϰ� ����ϴ� multiplication �Լ�
	FRACTION res;			// ����ü�� res ����

	res.numerator = f1.numerator * f2.numerator;			// res�� ��� numerator�� �� �м��� ������ ���� ���� 
	res.denominator = f1.denominator * f2.denominator;	// res�� ��� denominator�� �� �м��� �и��� ���� ���� 

	printf("\n The result of %d/%d * %d/%d is %d/%d\n",		// �Է��ߴ� �� ���ڵ��� ���, ù��°,�ι�° ���ڿ� �� ���� ����Ѵ�.
		f1.numerator, f1.denominator,					// ������ ����ü ������ ������� �������̱� ������ %d ���
		f2.numerator, f2.denominator,
		res.numerator, res.denominator);
}
