#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrayPrint(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}

int main()
{
	//���� ���ڿ� �迭�� �Ű�����
	//�������� �迭
	//char *p[3] = { "python", "c", "java" }; // �����Ͱ� 3��.
	//printf("%p %p %p\n",p[0],p[1],p[2]); // ���̽� , c , �ڹ��� �ּҰ� ���
	//8 -> 4 ����Ʈ�� ���̰�����.

	//������ �迭�� ������
	//char arr[][7] = { "python", "c", "java" };
	//char(*p)[7] = arr;
	//printf("%d %d %d\n", p, p+1, p+2);// ->7����Ʈ�� ���̳���.

	char *p[3] = { "python", "c", "java" }; // �����Ͱ� 3��.
	printf("%p %p %p\n", p[0], p[1], p[2]); // ���̽� , c , �ڹ��� �ּҰ� ���

	//arrayPrint()�Լ��� ó��
	/*for (int i = 0; i < 3; i++) {
		printf("%s\n",p[i]);
	}*/

	arrayPrint(3, p);

	return 0;
}