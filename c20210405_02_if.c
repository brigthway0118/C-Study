#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	//IF��
	//���ǽ��� ���϶� ������ ����, �����϶� ���๮���� �����Ѵ�.
	int a = -1;
	if (a > 0) {
		printf("���\n");
	}
	else {
		//IF���ȿ� IF�� = ��ø IF��
		if ( a < 0) {
			printf("����\n");
		}
		else {
			printf("����� ������ �ƴմϴ�.\n");
		}
	}

	//ǥ���� �����ϰ�
	int a = -1;
	if (a > 0)
		printf("���\n"); // IF�� �ȿ� '�� ����'�� ��� {}�� ��������.
	else if (a < 0) //
		printf("����\n");
	else
		printf("����� ������ �ƴմϴ�.\n");


	//�ǽ� �� ������ �Է¹޾� ū ���� ���. ( �� ���� ���� �����ִ�)
	int a, b;
	printf("�� ������ �Է� : ");
	scanf("%d%d", &a, &b); // scanf�� �� ���� ���۷���

	if (a > b)
		printf("%d\n", a);
	else if (b > a)
		printf("%d\n", b);
	else
		printf("�� ������ �����ϴ�.");


	//�ǽ� ���� �Է¹ް�, ������ ���
	int p;
	printf("���� : ");
	scanf("%d", &p);
	if (p > 100 || p < 0)
		printf("�߸��� �Է�\n");
	else if (p >= 90)
		printf("A\n");
	else if (p >= 80)
		printf("B\n");
	else if (p >= 70)
		printf("C\n");
	else if (p >= 60)
		printf("D\n");
	else
		printf("F\n");

	int k, e, m, sum;
	printf("����, ����, ���� ���� �Է� : ");
	scanf("%d%d%d", &k, &e, &m);

	if (k < 60 || e < 60 || m < 60)
		printf("����\n");
	else {
		sum = k + e + m;
		printf("�հ�� %d��\n", sum);
		printf("����� %.2f��\n", sum/3.0);
	}��
	*/
	//�ǽ�)���� üũ
	/*
	int y;
	printf("���� �Է� : ");
	scanf("%d", &y);

	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {
				printf("����\n");
			}
			else
				printf("����X\n");
		}
		else { printf("����\n"); }
	}
	else {
		printf("����X\n");
	}
	
	//if�� ������ ��� �տ������� ������ ������.
	(��or����and����)�� ���  ��or���� -> ����� and ��������...
	int y2 = 404;
	if (y2 % 4 == 0 && y2 % 100 != 0 || y2 % 400 == 0) {
		printf("����\n");
	}
	else {
		printf("X����X\n");
	}
	*/
	
	//�ǽ�)�޴�����
	int menu = 5;

	printf("--------------------------------------------\n");
	printf("1.�߽�1		2.�߽�2\n");
	printf("3.�ѽ�1		4.�ѽ�2\n");
	printf("5.���1		6.���2\n");
	printf("--------------------------------------------\n");
	scanf("%d", &menu);
	if (menu == 1 || menu==2) {
		printf("�߽��ڳ�\n");
	}
	else if (menu == 3 || menu == 4) {
		printf("�ѽ��ڳ�\n");
	}
	else if (menu == 5 || menu == 6) {
		printf("����ڳ�\n");
	}
	else {
		printf("�߸��� �Է�\n");
	}


	return 0;
}