#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	////���ڿ��� ����Ʈ
	//char str[] = "happy";
	////str = "angry"; //str�� ����� ������ �Ұ���.
	//char* p = str;
	//printf("%s\n",p); // %s�� ���ڿ��� �ּҸ� �־�����Ѵ�. p�� str�� �ּ�.

	//p = "python";
	//python�� ���� p�ȿ� ������� �ʰ�, python �ִ� ���� �޸� �ּҸ� ����ȴ�.
	//puts(p); // ���ڿ� �����Լ�

	//�ǽ�) �̸��� �Է¹ް� ���.
	//�����͸� �̿�.
	/*
	char n[20];
	char* p;
	p = n;
	printf("�̸��� �Է� : ");
	scanf("%s",p);
	puts(p);*/
	char name[20];
	char* p = name;
	while (1) {
		printf("�̸��� : ");
		//gets_s(p, sizeof(name));
		scanf_s("%s",p,sizeof(name));
		if (name[0] == 'q')
			break;
		/*puts(p);
		printf("�� ȯ���մϴ�.");*/
		printf("%s�� ȯ���մϴ�.\n",p);
		
	}


	return 0;
}