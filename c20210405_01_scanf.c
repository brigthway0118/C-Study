#define _CRT_SECURE_NO_WARNINGS //scanf�Լ��� ����ϱ� ���� ����.
//definde�� include ���� �����ؾ��Ѵ�.
#include <stdio.h>
int main()
{
	//�Է��Լ�(scanf)
	/*
	int a;
	printf("������ �Է� : ");
	scanf("%d", &a); // &a = a�� �ּҰ�
	printf("�Է��� �� : %d	�ּ�:%p\n", a, &a);



	//�Ǽ��� �Է¹ޱ�(scanf)
	float f;
	double d;
	printf("float �Ǽ���? ");
	scanf("%f", &f); // scanf�� �ּҸ� ������Ѵ�. %f = 4����Ʈ�� �Ǽ�
	printf("double �Ǽ���? ");
	scanf("%lf", &d);	// %lf 8����Ʈ��(double) �Ǽ�. double���� �Է��� ���� %lf��..
	printf("�Էµ� �Ǽ� :\n %f\n %p\n %lf\n %p", f, &f, d, &d);


	//������ �Է¹ޱ�
	char c;
	printf("���ڴ�? ");
	scanf("%c", &c);
	printf("�Էµ� ���� : %c", c);
	*/

	//�ǽ�) �� ������ �Է¹޾Ƽ� �հ踦 ���ϴ� ���
	/*
	int a, b;
	printf("ù ��° ���� �Է� : ");
	scanf("%d", &a);
	printf("�� ��° ���� �Է� : ");
	scanf("%d", &b);

	printf("�� ������ �Է� : ");
	scanf("%d	%d", &a, &b);
	printf("�� ������ �� : %d\n", a+b);


	//�ǽ�) ������ ��¥(��, ��, ��)�� �Է� �޾Ƽ�
	int year, month, day;
	printf("year, month, day �Է� : ");
	//scanf("%d %d %d", &year, &month, &day);
	scanf("%d-%d-%d", &year, &month, &day);// - �� �����ڷ� �ϱ�
	printf("%d�� %d�� %d���Դϴ�", year, month, day);


	//�ǽ�))�� ���� ������ �Է� �޾� ��������� ���غ��ÿ�
	int a, b;
	printf("�Է� ���� �� : ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d + %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);

	//�ǽ�))�� ���� ������ �Է� �޾� ��������� ���غ��ÿ�
	int a, b;
	char sign;

	printf("�Է� ���� �� : ");
	scanf("%d %c %d", &a, &sign, &b);
	printf("%d %c %d\n", a, sign, b);

	printf("first?");
	scanf("%d", &a);
	printf("second?");
	scanf("%d", &b);

	//�Է¹��ۿ��� �ϳ��� ���ڸ� �о ��ȯ�ϴ� �Լ�
	getchar(); // ���͸� ó���ϱ����� ����

	printf("sign?");
	scanf("%c", &sign);
	printf("%d %c %d\n", a, sign, b);


	//�ǽ�) ���� ���� �� �Ž������� ����Ͽ� ����ϴ� ���α׷��� �ϼ�
	int price, pay;

	printf("������ ������ �Է� : ");
	scanf("%d", &price);
	printf("���ұݾ� �Է� : ");
	scanf("%d", &pay);

	//pay >= price ? printf("�Ž����� : %d\n", pay-price) :
	//	printf("������ �ݾ� : %d\n", price - pay);

	pay > price ? printf("�Ž����� : %d\n", pay - price) :
		price > pay ? printf("������ �ݾ� : %d\n", price - pay) :
		printf("���ݿ� ���ұݾ��� �����ϴ�.\n");


	//�ǽ� ����, ����, ���������� �Է� �޾� �հ�� ����� ���ϴ� ���α׷�.
	int k, e, m;
	printf("����, ����, ���� ������ �Է� : ");
	scanf("%d %d %d", &k, &e, &m);
	int sum = k + e + m;
	printf("�հ� : %d	��� : %.2f\n", sum, sum /3.0);
	*/

	//�ǽ� rgb�� �����
	int r, g, b;
	printf("red? "); scanf("%d", &r);
	printf("green? "); scanf("%d", &g);
	printf("blue? "); scanf("%d", &b);

	unsigned int rgb = r<<16 | g<<8 | b;//��ȣ������ int��
	printf("RGB : %0X\n", rgb); // %0X �빮�ڷ� 16����, 0x�� �ҹ��ڷ� 16����

	return 0;
}