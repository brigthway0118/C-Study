#define _CRT_SECURE_NO_WARNINGS //scanf함수를 사용하기 위한 정의.
//definde은 include 위에 정의해야한다.
#include <stdio.h>
int main()
{
	//입력함수(scanf)
	/*
	int a;
	printf("정수를 입력 : ");
	scanf("%d", &a); // &a = a의 주소값
	printf("입력한 값 : %d	주소:%p\n", a, &a);



	//실수형 입력받기(scanf)
	float f;
	double d;
	printf("float 실수는? ");
	scanf("%f", &f); // scanf는 주소를 적어야한다. %f = 4바이트형 실수
	printf("double 실수는? ");
	scanf("%lf", &d);	// %lf 8바이트형(double) 실수. double형을 입력할 때는 %lf로..
	printf("입력된 실수 :\n %f\n %p\n %lf\n %p", f, &f, d, &d);


	//문자형 입력받기
	char c;
	printf("문자는? ");
	scanf("%c", &c);
	printf("입력된 문자 : %c", c);
	*/

	//실습) 두 정수를 입력받아서 합계를 구하는 출력
	/*
	int a, b;
	printf("첫 번째 정수 입력 : ");
	scanf("%d", &a);
	printf("두 번째 정수 입력 : ");
	scanf("%d", &b);

	printf("두 정수를 입력 : ");
	scanf("%d	%d", &a, &b);
	printf("두 정수의 합 : %d\n", a+b);


	//실습) 오늘의 날짜(년, 월, 일)를 입력 받아서
	int year, month, day;
	printf("year, month, day 입력 : ");
	//scanf("%d %d %d", &year, &month, &day);
	scanf("%d-%d-%d", &year, &month, &day);// - 를 구분자로 하기
	printf("%d년 %d월 %d일입니다", year, month, day);


	//실습))두 개의 정수를 입력 받아 산술연산을 구해보시오
	int a, b;
	printf("입력 받은 값 : ");
	scanf("%d %d", &a, &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d + %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);

	//실습))두 개의 정수를 입력 받아 산술연산을 구해보시오
	int a, b;
	char sign;

	printf("입력 받은 값 : ");
	scanf("%d %c %d", &a, &sign, &b);
	printf("%d %c %d\n", a, sign, b);

	printf("first?");
	scanf("%d", &a);
	printf("second?");
	scanf("%d", &b);

	//입력버퍼에서 하나의 문자를 읽어서 반환하는 함수
	getchar(); // 엔터를 처리하기위한 목적

	printf("sign?");
	scanf("%c", &sign);
	printf("%d %c %d\n", a, sign, b);


	//실습) 물건 구입 후 거스름돈을 계산하여 출력하는 프로그램을 완성
	int price, pay;

	printf("물건의 가격을 입력 : ");
	scanf("%d", &price);
	printf("지불금액 입력 : ");
	scanf("%d", &pay);

	//pay >= price ? printf("거스름돈 : %d\n", pay-price) :
	//	printf("부족한 금액 : %d\n", price - pay);

	pay > price ? printf("거스름돈 : %d\n", pay - price) :
		price > pay ? printf("부족한 금액 : %d\n", price - pay) :
		printf("가격와 지불금액이 같습니다.\n");


	//실습 국어, 영어, 수학점수를 입력 받아 합계와 평균을 구하는 프로그램.
	int k, e, m;
	printf("국어, 영어, 수학 점수를 입력 : ");
	scanf("%d %d %d", &k, &e, &m);
	int sum = k + e + m;
	printf("합계 : %d	평균 : %.2f\n", sum, sum /3.0);
	*/

	//실습 rgb값 만들기
	int r, g, b;
	printf("red? "); scanf("%d", &r);
	printf("green? "); scanf("%d", &g);
	printf("blue? "); scanf("%d", &b);

	unsigned int rgb = r<<16 | g<<8 | b;//부호가없는 int형
	printf("RGB : %0X\n", rgb); // %0X 대문자로 16진수, 0x는 소문자로 16진수

	return 0;
}