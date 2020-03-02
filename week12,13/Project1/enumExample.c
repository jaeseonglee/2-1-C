/*	�ǽ� 1 : enumExample.c
	�ۼ��� : 2019. 05. 20 ~ 05. 23
	�ۼ��� : 20165153 ���缺
	���α׷� ���� : ����ü enum�� ����ؼ� ���ڸ� ��ȣ�� ��Ÿ���� �� �� �б� ���� ���� ���α׷�
*/

//#define _CRT_SECURE_NO_WARINNING   // scanf ���� ������ ������� �ʰ� �Ѵ�.
#include <stdio.h>		// ��ó����

int main(int argc, char* argv[]) {		// main�Լ�
	int channel = 0;		// ������ ���� channel ���� �� 0���� �ʱ�ȭ
	
	enum TV {							// ����ü enum, �±׸����� TV�� ����Ѵ�.
		fox = 2, nbc = 4, cbs = 5,				// �������� �ʱ�ȭ�� ������� ���� �� ������ ������ �����Ѵ�.
		abc = 11, hbo = 15, show = 17,			// ������ ��쿡�� ���� �����Ͽ� ���� �����Ǵ� ������ �ƴ�
		max = 31, espn = 39, cnn = 51			// ���� �ʱ�ȭ �Ͽ� ������ ���� ���� �ȴ�.
	};						// ex) #define FOX 2 ��ũ�� ����� �����ϴ� �ͺ��� �� �� ���� ����̶�� ���� �� �� �ִ�.
							// �����ݷ�(;)�� ����ؼ� ����ü TV ���� �� �ʱ�ȭ, main �Լ����� ����Ǿ����� ����.
	printf("Here are my favorite cable stations: \n");		// ����ü TV�� ���� ������� ���� ���
	printf(" ABC: \t%2d\n", abc);				// \t(������)�� %2d(���ڸ� ������ �ּ� ���ϱ�)�� ���� �ϰ����ְ� ����
	printf(" CBS: \t%2d\n", cbs);				// ������ ��¿� �´� ä�θ� ������� ��� 
	printf(" CNN: \t%2d\n", cnn);				// ������ ����Ű�� ���� ����(����ü ������ �ʱ�ȭ��)�̹Ƿ�
	printf(" ESPN: \t%2d\n", espn);				// �Ϲ����� ���������� ���Ǵ� %d���
	printf(" FOX: \t%2d\n", fox);
	printf(" HBO: \t%2d\n", hbo);
	printf(" MAX: \t%2d\n", max);
	printf(" NBC: \t%2d\n", nbc);
	printf(" SHOW: \t%2d\n", show);
	printf(" Select channel : ");				// ä���� �Է��ش޶�� ���
	scanf_s("%d", &channel);					// scanf_s�� ����� ������ ������� �ʰ� �Է¹��� ������ channel�� ����

	switch (channel) {					// switch ���ǹ��� ���� ���� �Էµ� channel�� ���� ã�´�.
		case abc:						// ������ ����� �´� ���� �ִٸ�
			printf("ABC channel");		// �� ä�θ��� ����ϰ�
			break;						// switch ���ǹ��� ����������.
		case cbs: 
			printf("CBS channel"); 
			break;
		case cnn:
			printf("CNN channel");
			break;
		case espn:
			printf("ESPN channel");
			break;
		case fox:
			printf("FOX channel");
			break;
		case hbo:
			printf("HBO channel");
			break;
		case max:
			printf("MAX channel");
			break;
		case nbc:
			printf("NBC channel");
			break;
		case show:
			printf("show channel");
			break;
		default:						// ���� ���� � �ڷ������� ���� �ʴٸ�
			printf("no service");		// ���񽺸� �������� �ʴ´ٰ� ���
			break;					// ���������� switch�� ����������.
	}
	
	printf("\n");  // switch ���ǹ��� ���������� �ٹٲ� �ٹٲ����ش�.

	system("pause");		// ���â Ȯ��
	return 0;				// 0�� ��ȯ
}