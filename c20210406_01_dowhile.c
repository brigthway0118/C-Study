#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//do~while
	/*do {
		���๮��
	} while (����);
	�ּ� 1���� ������ �ȴ�.
	*/
	/*
	int a = -1;
	do {
		printf("%d\n", a);
	} while (a > 0);
	

	//����ڿ��� �Է��� �޾Ƽ� y�� �����÷��� ���
	//while�� ��� answer�� �ʱ�ȭ�Ǿ����� �ʾ� while���� ���� �Ұ�.
	char answer='y';
	while (answer == 'y') {
		printf("������ ����ұ��? ");
		scanf("%c",&answer); // scanf�� �ּҰ��� �Ѱ�����Ѵ�
		getchar(); // �Է¹��ۿ� �����ִ� enter�� ó��
		printf("���� ��� ��...\n");
	}
	
	//do~while�� ��� answer�� �ʱ�ȭ�Ǿ����� �ʾƵ� ����.
	char answer;
	do {
		printf("���� ��� ��...\n");
		printf("������ ����ұ��(y)? ");
		scanf("%c", &answer); // scanf�� �ּҰ��� �Ѱ�����Ѵ�
		getchar(); // �Է¹��ۿ� �����ִ� enter�� ó��
	} while (answer == 'y');
	*/
	int i,sum=0;
	do {
		printf("������ �Է��ϼ��� : ");
		scanf("%d",&i);
		sum += i;
	} while (i!=0);
	printf("���ݱ��� ���� ���� %d�Դϴ�.\n",sum);





	return 0;

}