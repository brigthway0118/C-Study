#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//switch ����ġ��
	/*
	int a = 0;
	switch (a){
	case 0:
		printf("zero\n"); break;
	case 1:
		printf("one\n"); break;
	case 2:
		printf("two\n"); break;
	default: // case ��
		printf("�߸��� ����\n"); break;
	}
	

	//���� �������� ���
	int month = 1;
	switch (month) {
	case 2:
		printf("28��\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30��\n");
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31��\n");
		break;
	default:
		printf("�� ��\n");
		break;
	}
	*/
	int menu = 5;

	printf("--------------------------------------------\n");
	printf("1.�߽�1		2.�߽�2\n");
	printf("3.�ѽ�1		4.�ѽ�2\n");
	printf("5.���1		6.���2\n");
	printf("--------------------------------------------\n");

	switch (menu){
	case 1:case 2:
		printf("�߽��ڳ�\n");
		break;
	case 3:case 4:
		printf("�ѽ��ڳ�\n");
		break;
	case 5:case 6:
		printf("����ڳ�\n");
		break;
	default:
		printf("�߸��� ��ȣ");
		break;
	}

	return 0;
}