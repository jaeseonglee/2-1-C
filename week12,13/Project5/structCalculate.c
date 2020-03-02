/*	�ǽ� 5 : strucCalculate.c
	�ۼ��� : 2019. 05. 20 ~ 05. 23
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : �ǽ� 3������ ���κ��� �Լ��� ���ۼ��ϰ� �̶� ����ü �����͸� ����ϴ� ���α׷�
*/

#include <stdio.h>		//��ó����

typedef struct {		// typedef�� ����ü 
	int numerator;		// ������ ��� numerator ����
	int denominator;	// ������ ��� demoninator ����
} FRACTION;				// ����ü�� �̸� FRACTION ������ ������ ����ü ����, main�ۿ��� ����Ǿ���.
						// typedef ������ �� ����ü�� �̸��� ��� �빮�ڷ� ����� ����ߴ�.

void multiplication(FRACTION* f1, FRACTION* f2, FRACTION* res);		// �м��� ���� ����ϴ� multiplication �Լ�, ����ü �����͸� ������ ���´�.

int main(int argc, char* argv[]) {		// main�Լ�

	FRACTION fr1;		// ����ü�� fr1, fr2, res ���� 
	FRACTION fr2;
	FRACTION res;

	printf("Key first fraciton in the form of x/y: ");		// ù��° �м��� x,y�� �Է��ش޶�� ���
	scanf_s("%d %d", &fr1.numerator, &fr1.denominator);		// �Է¹��� ���� fr1 ������ �̿��ؼ� fr1�� ����� ���� ����
	printf("Key second fraciton in the form of x/y: ");		// �ι�° �м��� x,y�� �Է��ش޶�� ���
	scanf_s("%d %d", &fr2.numerator, &fr2.denominator);		// �Է¹��� ���� fr2 ������ �̿��ؼ� fr1�� ����� ���� ����
															//scanf_s�� �̿��ؼ� ��� ������� �ʰ���

	multiplication(&fr1, &fr2, &res);		// multiplication�Լ� ȣ��� �� �м��� ���Ѵ�. ����ü�� ��ġ�� �����ϱ� ���� �ּҷ� �����Ѵ�.

	printf("\n The result of %d/%d * %d/%d is %d/%d\n",		// �Է��ߴ� �� ���ڵ��� ���, ù��°,�ι�° ���ڿ� �� ���� ����Ѵ�.
		fr1.numerator, fr1.denominator,					// ������ ����ü ������ ������� �������̱� ������ %d ���
		fr2.numerator, fr2.denominator,
		res.numerator, res.denominator);


	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void multiplication(FRACTION* f1, FRACTION* f2, FRACTION* res) {		// �м��� ���� ����ϰ� ����ϴ� multiplication �Լ�,  ����ü �����͸� ������ ���´�.

	(*res).numerator = (*f1).numerator * (*f2).numerator;	// res�� ��� numerator�� �� �м��� ������ ���� ���� 
	res->denominator = f1->denominator * f2->denominator;	// res�� ��� denominator�� �� �м��� �и��� ���� ���� 
			
	// ����ü�� ����� �������Ͽ� ���� ����Ѵ�. (*f1).numerator�� ����Ų ���°� f1->numerator �̴�.					
}
