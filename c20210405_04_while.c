#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//while(�ݺ���)
	
	/*while (1) {
		printf("c!!!\n");
	}

	//break �ݺ��� Ż��
	int cnt = 0;
	while (1) {
		printf("c!!!, %d�� ���\n", cnt+1);
		cnt++; // cnt += 1; , c = c + 1
		if (cnt>9) {
			break;
		}
	}
	

	//�ǽ�)1~10������ ��
	int i=0, sum=0;
	while (i<10) {
		//printf("%d\n", ++i);
		//sum += i;
		sum += ++i;
	}
	printf("�հ� : %d\n", sum);
	
	//�ǽ�) ���� 2000�� �������� n��° ������ �� ���� ���ϱ�
	int i = 0, sum = 0;
	while (sum<=2000) {
		sum += ++i;
		printf("%d ��°�� �հ� : %d �޼�\n",i ,sum);
	}
	

	int i = 0;
	while (i<20) {
		i++;
		if (i%3 == 0)
			printf("%d\n",i);
	}
	
	int i = 0;
	while (1) {
		i++;
		if (i > 20)
			break;
		if (i % 3 == 0)
			printf("%d\n", i);

	}
	*/

	//continue
	//1~10���� ¦���� ���
	int i = 0;
	while (i < 10) {
		i++;
		if (i % 2 != 0)
			continue;
		printf("%d\n",i);
	}


	return 0;
}