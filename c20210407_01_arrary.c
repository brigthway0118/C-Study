#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5 // ��� ����
int main() {
	//�迭(Array)

	/*
	int arr[3]; // 3���� �迭����
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%p %d\n", arr, sizeof(arr));

	//�ݺ����� �̿��ؼ� �ʱ�ȭ
	for (int i = 0; i < 3; i++) {
		arr[i] = (i + 1)*10;
	}
	//�ݺ����� �̿��ؼ� ���
	for (int i = 0; i < 3; i++) {
		printf("arr[%d]�� �� : %d\n", i, arr[i]);
	}


	//�ǽ�)
	double arr[5];
	//�迭�� ũ�ⱸ�ϱ�
	int size = sizeof(arr) / sizeof(double); // 40 / 8 ==> �迭 / �迭��Ÿ��=�迭��ũ��
	printf("������ : %d\n", size);

	for (int i = 0; i < size; i++) {
		arr[i] = i+1.1;
	}

	for (int i = 0; i < size;i++) {
		printf("arr[%d]�� �� : %.2f\n",i,arr[i]);
	}


	//������ �迭
	char arr[] = {'p','y','t','h','o', 'n'};
	int size = sizeof(arr) / sizeof(char);

	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}


	//�迭���� ��
	//#define�� ���ǵ� ��ũ�� ��� : �����ϵǱ� ���� ��ü�ȴ�.
	int arr[LEN]; // c�� �����迭. ���� ������ �迭ũ��� ���� ������. ����θ� ����!
	int sum = 0;
	int size = sizeof(arr) / sizeof(int);
	//�Է�
	for (int i = 0; i < size; i++) {
		printf("%d��° �迭 �� �Է� : ", i+1);
		scanf("%d",&arr[i]);
	}
	printf("===========================================\n");
	//�迭�� ���
	for (int i = 0; i < size; i++) {
		printf("%d��° �迭 �� : %d		�ּҰ� : %p\n", i + 1, arr[i], &arr[i]);
	}

	//�հ����
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	printf("�հ�� %d\n", sum);



	int arr[3];
	int size = sizeof(arr) / sizeof(int);
	int sum = 0, sel;
	//�Է�
	for (int i = 0; i < size; i++) {
		printf("%d�� ���� : ", i + 1);
		scanf("%d", &arr[i]);
	}
	//�������
	printf("==============================================\n");
	for (int i = 0; i < size; i++) {
		printf("%d���� %d��\n", i + 1, arr[i]);
	}
	//�հ�
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	printf("==============================================\n");
	printf("�հ� : %d	��� : %.2f\n", sum, (double)sum / size);
	printf("==============================================\n");
	//���ϴ� ��ȣ�� ���� ���
	while (1) {
		printf("����� ���ϴ� �л���ȣ �Է�(0�Է� ����) : ");
		scanf("%d", &sel);
		if (sel == 0) {
			break;
		}
		else if (0 < sel && sel < 4) {
			printf("%d���� ���� : %d\n", sel, arr[sel - 1]);
			printf("\n");
		}
		else {
			printf("�߸��� �Է�...\n");
		}
	}
	*/







	return 0;
}