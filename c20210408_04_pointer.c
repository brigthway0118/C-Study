#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//������

	//������ ����
	//int a = 10;
	//int* p = &a;
	//printf("a:%d	%p\n", a, &a);	//
	//printf("p:%p	%d\n", p, *p);	//���⼭ *p�� int* p�� *�� �ǹ̰� �ٸ���.
	////�����Ҷ��� *�� ������ ������ �ǹ�. %d *p�� p�� ����Ű�� �ּ��� '��'�� �����´ٴ� �ǹ��� ����.

	//char c = '%';
	//char* p2 = &c;
	//printf("c:%c	*p2:%c\n", c, *p2);

	//double d = 3.14;
	//double* p3 = &d;
	//printf("d:%f	*p3:%f\n",d, *p3);


	//float f = 5.55;
	//float* p4 = &f;

	//������ ���� p�� �̿��Ͽ� a�ǰ��� b�� ���� ���.
	/*int a = 10, b = 20;
	int* p;
	p = &a;
	printf("a�� �� : %d\n",*p);
	p = &b;
	printf("b�� �� : %d\n",*p);*/

	//�ǽ�))�����ͷ� �̿��� a,b,c�� ����
	//int a = 10, b = 20, c = 30;
	//int base = 100;
	//int* p;

	//p = &a; // p�� a�� �ּҰ� �ֱ�.
	//*p += base; //*p(a�� �ּҰ��� ���� ��)�� base���� ���ϱ�. *p = 10 + 100;
	//printf("%d\n", *p);
	//p = &b;
	//*p += base;
	//printf("%d\n", *p);
	//p = &c;
	//*p += base;
	//printf("%d\n", *p);


	////�迭��������
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//printf("%d\n", *p); //10
	//printf("%d\n", *(p+1)); //20 --> (p + �迭 �ϳ���ŭ �ǳʶ�)
	////printf("%d\n", *p + 1); //11 --> *p�� +1
	//printf("%d\n", *(p+2)); //30--> (p + �迭 �Ѹ�ŭ �ǳʶ�)
	////printf("%d\n", *p + 2); //12 --> *p�� +2

	/*for (int i = 0; i < 3; i++) {
		printf("%d	%d	%d	%d\n", *(p+i), *(arr+i), arr[i], p[i]);
	}*/

	//for (int i = 0; i < 3; i++) {
	//	//printf("%d\n",*p++);
	//	printf("%d\n", *p);
	//	p++;
	//}

	//�ǽ�
	//char c[6] = { 'p','y','t','h','o','n' };
	//char* p;
	//p = c;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c", *p);
	//	p++;
	//}

	//�Ǻ���ġ ������ ����Ʈ �̿�����..
	
	//�Ǻ���ġ ��ġ�̵�
	int fibo[20];
	int* p;
	p = fibo;
	for (int i = 0; i < 20; i++) {
		if (i < 2) {
			*p = i;
			//printf("%d ",*p);
			p++;
		}
		else {
			*p = *(p-1) + *(p-2);
			//printf("%d ", *p);
			p++;
		}
	}
	//��ġ �̵������ ��� p�� ++�Ǿ� ��ġ�� �ٲ�����Ƿ� �ٽ� ó����ġ�� �ʱ�ȭ �� ���.
	p = fibo;
	/*
	//�Ǻ���ġ ��ġ����
	int fibo[20];
	int* p;
	p = fibo;
	for (int i = 0; i < 20; i++) {
		if (i < 2) {
			*(p+i) = i;
			//printf("%d\n", *(p + i));
		}
		else {
			*(p + i) = *(p + i -1) + *(p + i - 2);
			//printf("%d\n", *(p + i));
		}
	}
	*/



	for (int i = 0; i < 20; i++) {
		printf("%d ", *(p+i));
	}

	return 0;
}