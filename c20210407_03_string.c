#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	//����
	/*char c;
	scanf("%c",&c);
	printf("���� : %c\n", c);
	*/

	//���ڱ���� �ִ�. �Է¹��ۿ� �׾Ҵٰ� ���͸� ġ�� ����.
	//char c = getchar(); // �����Է� �����Լ�
	//printf("�Է¹��� : ");
	//putchar(c);//���� ��� �����Լ�. �Է¹� �ϳ��� ���� ���.


	//���ڱ���� ����. �Է¹���X ����X
	//getch()�Լ�
	/*char c = getch();
	printf("�Է¹��� : ");
	putchar(c);*/

	//��й�ȣ�� �Է��ϸ� *�� ���
	/*
	char pw[5];
	printf("password?");
	for (int i = 0; i < 4; i++) {
		pw[i] = getch();
		putchar('*');
	}

	printf("------------------------------------\n");
	for (int i = 0; i < 4; i++) {
		printf("%c",pw[i]);
	}

	pw[4] = '\0'; // ��й�ȣ�� 4��. ������ �ϳ��� �迭�� \0�� �־ ���ڿ��� ����ϰ� �ٲ۴�.
	printf("\n��й�ȣ : %s\n", pw); //%s ���ڿ� ���. pw(�迭���̸�)�� �迭�� ���� �ּҰ��� ������.
	*/

	//���ڿ�
	//char s[6] = "Hello";
	//char s[6];
	//scanf("%s", s);//�迭�� �̸��� �ּҴ�. ���� &�� �ʿ����.. ����ó�� �Ұ���
	//printf("%s\n", s);

	//���ڿ� �����Լ�
	//char name[20];
	//printf("�̸���? ");
	//gets(name);//gets()���ڿ� ���� �Է��Լ�.//���� ġ���������� ��� ���ڸ� ���� ó���Ѵ�.(��������) ����ó������.
	//printf("����� �̸��� "); puts(name); // puts�� ���ڿ��� �Ѹ��� �ٹ̱�Ұ���.

	//���ڿ� �����Լ�2
	//char name[10] = "hong";
	//strcpy(name, "kim"); // name�̶�� ������ "kim"���� �߰�.
	//puts(name);

	/*char input[100];
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(input);
	puts(input);
	printf("���� : %d\n", strlen(input));
	printf("�ּ� : %d", input);*/

	//�Ǻ���ġ ���� ���ϱ�..
	// 0 1 1 2 3 5 8 13 ....
	int fibo[20];
	for (int i = 0; i < 20; i++) {
		if (i < 2) {
			fibo[i] = i;
		}
		else {
			fibo[i] = fibo[i - 1] + fibo[i - 2];
		}
	}

	for (int i = 0; i < 20;i++) {
		printf("%d ", fibo[i]);
	}


	return 0;
}