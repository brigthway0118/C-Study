#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	//IF문
	//조건식이 참일때 수행할 문장, 거짓일때 수행문장을 구별한다.
	int a = -1;
	if (a > 0) {
		printf("양수\n");
	}
	else {
		//IF문안에 IF문 = 중첩 IF문
		if ( a < 0) {
			printf("음수\n");
		}
		else {
			printf("양수도 음수도 아닙니다.\n");
		}
	}

	//표현을 간단하게
	int a = -1;
	if (a > 0)
		printf("양수\n"); // IF문 안에 '한 문장'일 경우 {}를 생략가능.
	else if (a < 0) //
		printf("음수\n");
	else
		printf("양수도 음수도 아닙니다.\n");


	//실습 두 정수를 입력받아 큰 수를 출력. ( 두 수는 같을 수도있다)
	int a, b;
	printf("두 정수를 입력 : ");
	scanf("%d%d", &a, &b); // scanf는 콜 바이 레퍼런스

	if (a > b)
		printf("%d\n", a);
	else if (b > a)
		printf("%d\n", b);
	else
		printf("두 정수가 같습니다.");


	//실습 점수 입력받고, 학점을 출력
	int p;
	printf("점수 : ");
	scanf("%d", &p);
	if (p > 100 || p < 0)
		printf("잘못된 입력\n");
	else if (p >= 90)
		printf("A\n");
	else if (p >= 80)
		printf("B\n");
	else if (p >= 70)
		printf("C\n");
	else if (p >= 60)
		printf("D\n");
	else
		printf("F\n");

	int k, e, m, sum;
	printf("국어, 영어, 수학 점수 입력 : ");
	scanf("%d%d%d", &k, &e, &m);

	if (k < 60 || e < 60 || m < 60)
		printf("과락\n");
	else {
		sum = k + e + m;
		printf("합계는 %d점\n", sum);
		printf("평균은 %.2f점\n", sum/3.0);
	}ㅜ
	*/
	//실습)윤년 체크
	/*
	int y;
	printf("연도 입력 : ");
	scanf("%d", &y);

	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {
				printf("윤년\n");
			}
			else
				printf("윤년X\n");
		}
		else { printf("윤년\n"); }
	}
	else {
		printf("윤년X\n");
	}
	
	//if문 조건의 경우 앞에서부터 조건을 따진다.
	(참or거짓and거짓)의 경우  참or거짓 -> 결과값 and 거짓으로...
	int y2 = 404;
	if (y2 % 4 == 0 && y2 % 100 != 0 || y2 % 400 == 0) {
		printf("윤년\n");
	}
	else {
		printf("X윤년X\n");
	}
	*/
	
	//실습)메뉴선택
	int menu = 5;

	printf("--------------------------------------------\n");
	printf("1.중식1		2.중식2\n");
	printf("3.한식1		4.한식2\n");
	printf("5.양식1		6.양식2\n");
	printf("--------------------------------------------\n");
	scanf("%d", &menu);
	if (menu == 1 || menu==2) {
		printf("중식코너\n");
	}
	else if (menu == 3 || menu == 4) {
		printf("한식코너\n");
	}
	else if (menu == 5 || menu == 6) {
		printf("양식코너\n");
	}
	else {
		printf("잘못된 입력\n");
	}


	return 0;
}