#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//�����迭�� ������
	/*int arr[2][3] = { {1,2,3}, {4,5,6} };
	int* p = arr;
	for (int i = 0; i < 6; i++) {
		printf("%d ", *p);
		p++;
	}*/

	//�� �л��� ������ ������ �迭�� ����
	int score[2][3] = { {90, 89, 77},{89, 99, 88} };
	int sum = 0;
	double avg;
	//int* p[3] = score; // --> ����!! score�� ����Ű�� �����Ͱ� 3���� ������ ���. 3���� 90�� �ּҸ� ����Ų��.
	int (*p)[3] = score; // ->> 12����Ʈ(1�྿) �ǳʶٰ� ������ش�. ex) p=100����, p+1,p++ = 112����
	printf("%p	%p\n", p, p+1);
	for (int i = 0; i < 2; i++) {
		sum = (*p)[0] + (*p)[1] + (*p)[2];
		avg = sum / 3.;
		printf("�հ�:%d		���:%.2f\n", sum, avg);
		p++;
	}
	//printf("%d %d\n", p, p+1);



	return 0;
}