#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�������迭
	//int a[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}}
	//		0	1	2	3	4	
	//	0	1	2	3	4	5		1��
	//	1	6	7	8	9	10		2��
	//		1��	2��	3��	4��	5��
	//a[��][��] ... ex) a[0][0] = 0, a[1][2] = 8
	/*
	int arr[2][3];
	//arr[0][0] = 1;arr[0][1] = 2;arr[0][2] = 3;
	//arr[1][0] = 4;arr[1][1] = 5;arr[1][2] = 6;

	//arr[0]�� �� ���� ����� ���´�.
	int rSize = sizeof(arr)/sizeof(arr[0]); // 24 / 12 = 2. row�� ���� ���´�.
	//��üũ�� / �� ���� ũ�� = ���� ����

	int cSize = sizeof(arr[0]) / sizeof(int); // 12 / 4 = 3. column�� ���� ���´�.
	//�� ���� ũ�� / ���� Ÿ�� ũ�� = ���� ����
	printf("������ : %d	%d\n", rSize, cSize);

	for (int i= 0; i < rSize; i++) {
		for (int j = 0; j < cSize; j++) {
			arr[i][j] = (3*i) + j+1;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	*/

	int arr[2][3];
	int sum[2] = {0,0};
	int averPoint[3] = {0, 0, 0};
	//�л����� ���� �Է�
	for (int i = 0; i < 2; i++) {
			printf("%d�� �л��� ����, ����, ���� ���� �Է� : ", i + 1);
			for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
			////getchar();
			//sum[i] += arr[i][j];
		}
	}
	//�л����� �հ�
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i] += arr[i][j];
		}
	}
	//�հ� ���
	for (int i = 0; i < 2; i++) {
		printf("%d�� �л��� �հ� : %d	��� : %.2f\n", i + 1, sum[i], (double)sum[i]/3);
	}

	//���� ���.
	//��	��		��
	//��	��		��
	//00	01		02
	//10	11		12
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			averPoint[i] += arr[j][i];
		}
	}
	printf("���� ���� ��� : %.2f\n", (double)averPoint[0]/2);
	printf("���� ���� ��� : %.2f\n", (double)averPoint[1]/2);
	printf("���� ���� ��� : %.2f\n", (double)averPoint[2]/2);
	 


	return 0;
}

