/*	�ǽ� 2 : printFigure.c
	�ۼ��� : 2019. 04. 02 ~ 04.06
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : ���̿� �ʺ� �Է¹޾� �������� ����ϴ� ���α׷�
*/

#include <stdio.h>		// ��ó����
														// ��¸� �ϱ⶧���� void��	
void printRect(int height, int width);					// �簢�� ����� ����ϴ� �Լ�	 ����
void printRightAngledTriangle(int height, int width);	// �����ﰢ�� ����� ����ϴ� �Լ� ����
void printIsoscelesTriangle(int height, int  width);	// �̵�ﰢ�� ����� ����ϴ� �Լ� ����
void printInvertedTriangle(int height, int width);		// ���ﰢ�� ����� ����ϴ� �Լ� ����

/* printRightAngledTriangle�Լ�, printIsoscelesTriangle�Լ�, printInvertedTriangle�Լ����� ������ �ʺ�(width)����
	������ ������, �ϰ����� ���� ���������� ���
*/


int main(int argc, char* argv[]) {		// main �Լ�
	
	int heightValue = 0;		// �Է¹��� ������ �� heightValue ���� �� �ʱ�ȭ
	int widthValue = 0;			// �Է¹��� ������ �� widthValue ���� �� �ʱ�ȭ

	printf("������ ���� : ");		// ���̸� �Է��ش޶�� ���
	scanf_s("%d", &heightValue);// �Է¹��� ���̸� heightValue�� ����, scanf_s�� ���� ������ ������� ����
	printf("������ �ʺ� : ");		// �ʺ� �Է��ش޶�� ���
	scanf_s("%d", &widthValue); // �Է¹��� ���̸� widthValue�� ����, scanf_s�� ���� ������ ������� ����

	printf("�簢�� \n");			// �簢�� ���
	printRect(heightValue, widthValue);	// printRect�Լ��� ���� �簢�� ��� ���

	printf("�����ﰢ�� \n");		// �����ﰢ�� ���
	printRightAngledTriangle(heightValue, widthValue); // printRightAngledTriangle�Լ��� ���� �����ﰢ�� ��� ���

	printf("�̵�ﰢ�� \n");	// �̵�ﰢ�� ���
	printIsoscelesTriangle(heightValue, widthValue); // printIsoscelesTriangle�Լ��� ���� �̵�ﰢ�� ��� ���

	printf("���ﰢ�� \n");		// ���ﰢ�� ���
	printInvertedTriangle(heightValue, widthValue); // printInvertedTriangle�Լ��� ���� ���ﰢ�� ��� ���

	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void printRect(int height, int width) {		// �簢�� ����� ����ϴ� printRect �Լ�, ��¸� �ϱ⶧���� void��
	int i;		// �ݺ������� ����� ����, �ݺ����տ� �����Ѵ�.
	int j;		// �ݺ������� ����� ����
	for (i = 0; i < height; i++) {		// �Է¹��� height��ŭ �ݺ��ϴ� �ݺ���
		for (j = 0; j < width; j++) {	// �Է¹��� width��ŭ "*"�� ����ϴ� �ݺ���
			printf("*");			// �� �ݺ����� *�� ����Ѵ�.
		}
		printf("\n");		// ��ø �ݺ����� ���������� �ٹٲ�
	}
}

void printRightAngledTriangle(int height, int width) {	// �����ﰢ�� ����� ����ϴ� printRightAngledTriangle�Լ�, ��¸� �ϱ� ������ void��
	int i;	// �ݺ������� ���
	int j;	// �ݺ������� ���
	for (i = 0; i < height; i++) { // �Է¹��� height��ŭ �ݺ��ϴ� �ݺ���, �����δ� �ʺ�(width)���� ������ �ʴ´�.
		for (j = 0; j <= i; j++) { // �����ﰢ�� ����� ����ϴ� �ݸ� , j�� i��ŭ �ݺ��Ѵ�.
			printf("*");		 // �� �ݺ����� *�� ����Ѵ�.
		}
		printf("\n");		// ��ø �ݺ����� ���������� �ٹٲ�
	}

}

void printIsoscelesTriangle(int height, int  width) {  // �̵�ﰢ�� ����� ����ϴ� printIsoscelesTriangle�Լ�, ��¸� �ϱ� ������ void��
	int i;	// �ݺ������� ���
	int j;	// �ݺ������� ���
	for (i = 0; i < height; i++) {		// �Է¹��� height��ŭ �ݺ�, �����δ� width ����  ������ �ʴ´�.
		/*	   *    ���� 4 �� ���� ����. �Ʒ� �ݺ���������      * 
			  ***	�������� �ﰢ��ó�� ���� *���� ��ĭ,		** *
			 *****		������ * �̷��� ����Ѵ�.			   *** **	
		    *******		������ * �̷��� ����Ѵ�.			  **** ***
		
				i�� ���� Ŀ�� ������ �̵�ﰢ���� �غ��� �þ��.
		*/

		for (j = 1; j < height - i; j++) {  // ������ *�� ���� ��ĭ�� ����ϴ� �ݺ���
			printf(" ");			// height�� Ŭ���� ��ĭ�� ���� ���, i�� ���� Ŀ�� ������ ���Ƚ���� �پ���.
		}
		for (j = 0; j <= i; j++) {		// ������ *�� ����ϴ� �ݺ���
			printf("*");			// i+1��ŭ *�� ���, i�� ���� Ŀ������ ���� ����Ѵ�.
		}
		for (j = 0; j < i; j++) {		// ������ *�� ����ϴ� �ݺ���
			printf("*");			// i��ŭ *�� ���, i�� ���� Ŀ������ ���� ����Ѵ�.
		}
		printf("\n");		// ��ø�ݺ����� ���������� �ٹٲ�
	}
}

void printInvertedTriangle(int height, int width) {  // ���ﰢ�� �����  printInvertedTriangle�Լ�, ��¸� �ϱ� ������ void��
	int i;	// �ݺ������� ���
	int j;	// �ݺ������� ���

	for (i = 0; i < height; i++) { // �Է¹��� height��ŭ �ݺ�, �����δ� width ����  ������ �ʴ´�.
	/*	   *******	 ���� 4 �� ���� ����. �Ʒ� �ݺ���������     **** ***
			*****	�������� �ﰢ��ó�� ���� *���� ��ĭ,		  *** **
			 ***		������ * �̷��� ����Ѵ�.			       ** *
			  *			������ * �̷��� ����Ѵ�.					*

				i�� ���� Ŀ�� ������ ���ﰢ���� �غ�(����)�� �þ��.
	*/
		for (j = 0; j < i; j++) {	// ������ *�� ���� ��ĭ�� ����ϴ� �ݺ���
			printf(" ");			// i�� ���� Ŀ�� ������ ���Ƚ���� �þ��.
		}
		for (j = 1; j <= height - i; j++) {	// ������ *�� ����ϴ� �ݺ���
			printf("*");				// height�� Ŭ���� ���� *�� ���, i�� ���� Ŀ������ ���� ����Ѵ�.
		}
		for (j = 1; j < height - i; j++) {	// ������ *�� ����ϴ� �ݺ���
			printf("*");			// height�� Ŭ���� ���� *�� ���, i�� ���� Ŀ������ ���� ����ϰ� �ٷ� ���� �ݺ������� �ѹ� ���� �ݺ��Ѵ�.
		}
		printf("\n");			// ��ø�ݺ����� ���������� �ٹٲ�
	}
} 