#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�ǽ�1
	/*
	int a, b, sum=0;
	printf("���� ����, ������ ���� �Է� : ");
	scanf("%d%d",&a,&b);
	for (int i = a; i <= b;i++) {
		sum += i;
	}
	printf("%d���� %d������ �հ�� : %d", a,b,sum);



	//n!���ϱ�
	int a, mul=1;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		mul *= i;
	}
	printf("1���� %d���� ���� ���� %d\n", a, mul);



	//�ǽ� 1000�� ������ ����
	int sum = 0, n = 0;
	while (1) {
		sum += n;
		if (sum > 1000)
			break;
		n++;

	}
	printf("%d������ ���� %d\n", n, sum);
	



	//1���� 10������ �������� �μ��� ��� ���� 10�̵Ǵ� �μ� ���../
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i+j==10) {
				printf("(%d , %d)\n", i, j);
			}
		}
	}
	
	//���� �Է¹ް� �ƽ�Ű�ڵ�� �����ϱ�
	//char a;
	//printf("���� �Է� : ");
	//scanf("%c", &a);
	//printf("%d\n", a);
	//if (a=113) {
	//	printf("q\n");
	//}
	
	char menu;
	do {
		printf("\n");
		printf("==================================\n");
		printf("1. «��		2.¥���\n");
		printf("3. �Ұ��	4.�����\n");
		printf("==================================\n");
		printf("�޴� ���� : ");
		scanf("%c", &menu);
		getchar();

		switch (menu)
		{
		case '1':
			printf("«�� 5000��\nA �ڳʷΰ�����.\n");
			//menu = 'q';
			break;
		case '2':
			printf("¥��� 4000��\nA �ڳʷΰ�����.");
			//menu = 'q';
			break;
		case '3':
			printf("�Ұ�� 8000��\nB �ڳʷΰ�����.");
			//menu = 'q';
			break;
		case '4':
			printf("����� 7000��\nC �ڳʷΰ�����.");
			//menu = 'q';
			break;
		case 'q':
			printf("q�Է�...�����մϴ�\n");
			break;
		default:
			break;
		}
	} while (menu != 'q');
*/

	for (int i = 1; i <= 9; i++) {
		for (int j = i; j <= 9; j++) {
			if (i + j == 10) {
				printf("(%d, %d)   ", i, j);
			}
		}
	}
	return 0;
	
}