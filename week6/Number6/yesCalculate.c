/*	�ǽ� 6 : tesCalculate.c
	�ۼ��� : 2019. 04. 06
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : ���ᰡ ���õ� ������ ����ϴ� ���� ���α׷�
*/

#include <stdio.h>		//��ó����

void printMain();		// �޴��� ����ϴ� printMain�Լ�

int main(int argc, char* argv[]) {		// main �Լ�

	int num = 0;		// �޴����ð��� ������ ���� ���� �� �ʱ�ȭ
	int value1 = 0;		// ��꿡�� �ʿ��� ���� ���� �� �ʱ�ȭ
	int value2 = 0;		// ��꿡�� �ʿ��� ���� ���� �� �ʱ�ȭ
	int result = 0;		// �� ����� ����� ������ ���� ���� �ʱ�ȭ 
	
	do {		// do while �ݺ���
		printMain();		// printMain�� ȣ���ؼ� �޴� ���
		scanf_s("%d", &num);		// �޴��� ���� �ԷµǴ� ���� num�� ����, scanf_s�� ����ؼ� ������ ������� ����

		switch (num) {		// switch ���ǹ�, num ���� ���� ����
		case 1:							// num�� 1�϶�
			printf("����� �� �� ���� �Է��ϼ��� : ");		// �� �ΰ��� �Է��ش޶�� ���
			scanf_s("%d %d", &value1, &value2);			// �Է¹��� �� ���� ���� value1, value2�� ����, %d ���̿� ��ĭ�� ����ؼ� ���� ��Ȯ�� �����Ѵ�.
			break;										// switch�� ����
		case 2:						// num�� 2�϶�
			result = value1 + value2;			// �Է¹��� �� ���� ���� result�� ����
			printf("��� : %d\n", result);		// result�� ���
			break;								// switch�� ����
		case 3:					// num�� 3�϶�
			if (value1 >= value2) {				// vlaue1�� value2 �� ���� ������ ���� ���� �����ϱ� ���� ���ǹ�
				result = value1 - value2;		// �� ���� ���� result�� ����
			} 
			else {								// value2�� value1���� ũ�ٸ�
				result = value2 - value1;		// �ΰ��� ���� result�� ����
			}
			printf("��� : %d\n", result);		// result�� ���
			break;								// switch�� ����
		case 4:						// num�� 4�϶�
			result = value1 * value2;			// �� ���� ���� result�� ����
			printf("��� : %d\n", result);		// result �� ���
			break;								// switch�� ����
		case 5:					// num�� 3�϶�
			if (value1 >= value2) {				// value1�� value2 �� ���� ���� ���� ������ ������ �ϱ� ���� ���ǹ�
				result = value1 / value2;		// (value1 / value2) �� ���� reslut�� ����
			}
			else {								// value2�� value1���� ũ�ٸ�
				result = value2 / value1;		// (value2 / value1) �� ���� reslut�� ����
			}
			printf("��� : %d\n", result);		// result �� ���
			break;								// switch�� ����
		case 6:					// num�� 6�϶�
			printf("����\n");	// ���Ḧ ����ϰ� 
			break;				// switch�� ����
		default:	// �� ���� ���� �ԷµǸ� 
			break;		// switch�� ����
		}
		printf("\n");	//	�� �ݺ��� ������ �ٹٲ�
	} while (num !=6);		// 6�� ���� �ԷµǸ� do while�� �ݺ��� �����Ѵ�
	
	system("pause");	// ���â Ȯ��
	return 0;			// 0�� ��ȯ
}

void printMain(void) {			// �޴��� ����ϴ� printMain �Լ�, �޴��� ����ϱ� ������ void�� �Ű������� void���̴�.

	printf("1. �����Է�\n");		// ������ �ش��ϴ� ��ȣ�� �޴��� ����Ѵ�.
	printf("2. ���ϱ�\n");		// �������� ��½ø��� �ٹٲ�
	printf("3. ����\n");			// ������ ��ȯ���̳� �Ű������� �ʿ����.
	printf("4. ���ϱ�\n");		
	printf("5. ������\n");
	printf("6. ����\n");
	printf(">>�޴����� : ");		// �޴����ñ��� ��� ������ printMain�Լ��� ȣ��
}