#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�������� : ���α׷� ���� �� ����, ���α׷��� ���� �� �Ҹ�
//��𼭵� ��밡��.
//�ڵ� �ʱ�ȭ.
//���������� ���к��� ������ ����..���α׷��� ���⵵�� �����Ѵ�.
int g;//��������

//int sum=0;

//�Ű������� ������ �Է¹޾� �����ϴ� �Լ�.
int userSum(int a) {

	//static����.
	//�Լ��� ���ʷ� ������� �� ����, ���α׷� ���� �� �Ҹ�.
	//����� �Լ��ȿ����� ���ٰ���.


	static int sum = 0;
	sum += a;
	return sum;
}

//�Ű�����:����
//���ϰ� : �� �Լ��� ������ Ƚ��
//�Լ��̸� : countTest

int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}



//void test() {
//	//printf("a : %d\n", a); a�� main�Լ��� ���������̹Ƿ� ���Ұ�
//	printf("g : %d\n", g);
//}

int main()
{
	//���������� ��������
	//�������� : �Լ��� ���۵� �� ����, �Լ��� ����Ǹ� �Ҹ�
	//����� {} �ȿ����� ��밡��. �ڵ��ʱ�ȭX

	//int a = 10; // ��������
	//printf("a : %d\n",a); // 10���
	//printf("g : %d\n", g); // �������� g�� �ڵ��ʱ�ȭ �Ǿ 0���.

	//printf("���� �� : %d\n", userSum(10));
	//printf("���� �� : %d\n", userSum(20));

	for (int i = 0; i < 10; i++) {
		printf("����Ƚ�� : %d\n", countTest());
	}
	






	return 0;
}