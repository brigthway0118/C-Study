#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�Ű�����:����, ��ȯ��:����
void voidTest() {
	printf("void�Լ�\n");
}

//�Ű�����:�Ѱ�, ��ȯ��:����
void voidTest2(int a) {
	printf("�Ű�����:%d\n", a);
}
//�Ű�����:�ΰ�, ��ȯ��:����
void voidTest3(int a, int b) {
	printf("�μ��� ��:%d\n", a + b);
}

//���� ���̸� ���ϰ� ����ϴ� �Լ�.
void area(double r2) {
	printf("�������� ���̴� : %.2f�Դϴ�\n", r2 * r2 * 3.14);
}

//��ȯ��. �Ű�����:������(double). ��ȯ��:����(double). ���ǳ��̸� ���ؼ� ��ȯ�ϴ� �Լ�.
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;
}

//�� ������ �Ű������� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�
int sumReturn(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}

//�� ���� ������ �Ű������� �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�.
double div(int a, int b) {
	return (double)a / b;
}

int minMax(int a, int b) {
	int max = 0;
	if (a>=b) 
		max = a;
	else
		max = b;
	return max;
}


//������ main�Լ�.
int main()
{
	//�Լ�
	//voidTest();
	//voidTest2(10);
	//�ּҸ� �ѱ�� ��� : call by reference
	//���� �ѱ�� ��� : call by value
	//
	//
	//double r;
	//printf("�������� ? ");
	//scanf("%lf", &r);
	//
	////area�� ���� �ѱ�Ƿ� call by value
	//area(r);
	/*double r=3.6;
	double rValue = areaReturn(r);
	printf("���� : %.2f\n",rValue);*/
	//
	//int a = sumReturn(5, 5, 7);
	//printf("%d\n",a);
	//
	//int a = 10, b = 3;
	//double d = div(a,b);
	//printf("������ : %f\n",d);

	int a = 10, b = 30;
	int c = minMax(a, b);

	printf("ū ���� : %d�Դϴ�\n",c);

	return 0;
}

