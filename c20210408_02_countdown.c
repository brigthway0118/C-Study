#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


//�Ű����� : ī��Ʈ�ٿ� ��
//��ȯ�� ����.
//��� : ī��Ʈ�ٿ��� ���
void countDown(int a) {
	printf("ī��Ʈ�ٿ� ����\n");
	for (int i = a; i > -1; i--) {
		Sleep(1000);
		printf("%d��\n", i);
	}
	printf("�߻�\n");
}
int main() {
	//ī��Ʈ �ٿ�

	//printf("ī��Ʈ�ٿ� ����\n");
	//for (int i = 5; i > -1; i--) {
	//	Sleep(1000); // �и������� = 1/1000��. 1000 = 1��
	//	printf("%d��\n", i);
	//}
	//printf("�߻�\n");
	//
	int a = 10;
	countDown(10);
	return 0;
}