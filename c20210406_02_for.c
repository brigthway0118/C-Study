#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//�ݺ���for
	/*
	int i;
	for (i = 0; i < 10;i++) {
		printf("%d\n", i);
	}

	//do~while+for��
	int i, dan;
	do {
		printf("�ܼ���? ");
		scanf("%d", &dan);
		for (i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", dan, i, dan * i);
		}
	} while (dan != 0);


	//����for���� �̿��� ������
	for (int i = 1; i < 10;i++) {
		printf("[%d]��\n",i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i,j,i*j);
		}
	}

	//�ǽ� 1���� 100������ ��
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1���� 100������ ���� %d�Դϴ�\n", sum);

	int sum = 0, sel = 0;
	printf("1���� ����� �� �ұ��? ");
	scanf("%d", &sel);
	for (int i = 1; i <= sel; i++) {//i�� for�� �ȿ� ������ �Ǿ���. �� for���� ��������.
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n", sel, sum);
	


	//�ִ� 10������ �ݺ��ϴ� ū ��-���� ��. (�� 0�� �Է��ϸ� ����)
	int a, b;
	for (int i = 0; i < 10; i++) {
		printf("�� ���� �Է� : ");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		scanf("%d", &b);
		if (a >= b) {
			printf("�� ������ ���� %d\n", a - b);
		}
		else if (b > a) {
			printf("�� ������ ���� %d\n", b - a);
		}
		else {
			printf("�߸��� �Է�");
		}
		printf("�����̽��ٸ� ������ ����...\n");
		int c = getch(); // ���ھ��� �Լ�==>cmdȭ�鿡 �������ʰ� �Է��� �ȴ�.
		printf("%d\n",c) // �Էµ� ������ �ƽ�Ű�ڵ�
		if (c==32) break; // �ƽ�Ű�ڵ尪�� ������ ����

	}
	*/
	//�ǽ� �����
	for (int i = 1; i < 8; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("==================================\n");
	for (int i = 1; i < 8; i++) {
		for (int j = 0; j <= (7-i); j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("==================================\n");
	for (int i = 1; i < 8; i++) {
		for (int j = 0; j <= (6-i); j++) {
			printf(" ");
		}
		for (int k = 1; k <= i;k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("==================================\n");
	//1 3 5 7 9 11�� ���� ���.
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < (5-i);k++) {
			printf(" ");
		}
		for (int j = 0; j < (i+i+1); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
