#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ� call by reference = �ּҸ� �Ű������� �޴´�.
//main�Լ��� �ִ� a�ǰ��� ���� ����

void change(int* c) {
	*c = 20;
}

//main�Լ��� �μ��� �ٲٱ�
void twoChange(int* c, int* d) {
	int temp = *c;
	*c = *d;
	*d = temp;
}

//�հ豸�ϱ�
void sumCal(int* a, int* sum) {
	*sum += *a;
}
int main()
{
	//int a=10;
	//int* p = &a;
	//change(p);
	//printf("a: %d\n", a);

	//int b = 10;
	//change(&b);
	//printf("b: %d\n", b);

	//�ǽ�1) �� �� �ٲٱ�
	/*int a = 10, b = 20;
	printf("%d %d\n", a, b);
	twoChange(&a, &b);
	printf("%d %d\n", a, b);*/

	//�ǽ�2) �ݺ����� �̿��Ͽ� �Էƹ������� �հ� ���ϱ�
	//�Լ����� ����
	int a, sum = 0;
	while(1){
		printf("���� �Է� : ");
		scanf("%d",&a);
		if (a == 0) break;
		sumCal(&a, &sum);
	}
	printf("������ : %d\n", sum);
	return 0;
}