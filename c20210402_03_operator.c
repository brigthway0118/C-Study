#include <stdio.h>

int main() {

	/*
	//연산자(+,-,*,/,%)
	//정수 + 정수 = 정수
	//실수 + 정수 = 실수
	int a = 20, b=3;
	char c = '%';
	printf("%d + %d = %d\n",a, b, a+b);
	printf("%d - %d = %d\n",a, b, a-b);
	printf("%d * %d = %d\n",a, b, a*b);
	printf("%d / %d = %f\n",a, b, (double)a/b); //(double)a/b -> a를 double형으로 먼저 만든 후 연산
	//--> double(a)/int(b) --> 실수/정수 --> 실수형으로 출력.
	//printf("%d %c %d = %d\n",a, c, b, a%b);

	int a = 50, b = 3;
	printf("몫 : %d\n", a/b);
	printf("나머지 : %d\n", a%b);
	printf("소수점 : %.2f\n", (double)a/b);

	//증감연산자(++, --) // ++a는 전위, a++는 후위

	int a = 10;

	//a++;//a += 1; a = a + 1;
	++a;
	printf("%d\n", a);
	a--; //a = a - 1; a -= -1;
	printf("%d\n", a);


	int a = 10;
	printf("%d\n", a++); // a = 10출력. 후위연산자의 경우 printf()를 실행한 후 a를 증가시킨다.
	printf("%d\n", a); // a = 11출력
	printf("%d\n", ++a); // a = 12출력. 전위연산자의 경우 a를 증가시킨 후 printf() 실행.


	int a = 10;
	a--;
	printf("%d\n",--a);
	printf("%d\n",a++);
	printf("%d\n",a--);
	printf("%d\n",a);


	int a = 10;
	int b = --a;
	int c = b++;
	b = ++a;
	printf("%d %d %d\n",a,b,c);// 10 10 9


	//관계연산자
	int a = 10, b = 20;
	printf("관계연산자 : %d\n",a < b);	// 1(참, True) 출력
	printf("관계연산자 : %d\n", a > b);	// 0(거짓, False) 출력
	printf("관계연산자 : %d\n", a == b);	// 0(거짓, False) 출력
	printf("관계연산자 : %d\n", a != b);	// 1(참, True) 출력


	//논리연산자(	&&(and), ||(or), !(not)	)
	int a = 10, b = 20;
	printf("논리연산자 : %d\n", a>0 && b>0);	// 1(참, True) 출력
	printf("논리연산자 : %d\n", a>0 && b<0); // 0(거짓, False) 출력
	printf("논리연산자 : %d\n", a > 0 || b < 0); // 1(참, True) 출력
	printf("논리연산자 : %d\n", !(a > 0)); // 0(거짓, False) 출력


	//비트연산자(&, |, ^, ~, >>, >>) 4와 3을 2진수로 바꾼후
	//	0 1 0 0
	//  0 0 1 1 // &의 경우...
	//  0 0 0 0	// 1열, 2열, 3열, 4열끼리 &비교 후 결과도출.
	printf("비트연산자 : %d\n", 4 & 3); // 0
	printf("비트연산자 : %d\n", 4 | 3); // 7


	//시프트연산자
	printf("시프트연산자 : %d\n", 4 >> 2); // 1출력. 0 1 0 0 --> 0 0 0 1. 오른쪽으로 2비트 밀기
	printf("시프트연산자 : %d\n", 4 << 1); // 8출력.  0 1 0 0 --> 1 0 0 0. 왼쪽으로 1비트 밀기



	//*삼항연산자* : 조건에 따라 수행하는 문장이 달라진다.
	// (num1 > num2) ? (참일때 수행문장) : (거짓일때 수행문장);
	int a = 10;
	a > 0 ? printf("양수\n") : printf("음수\n"); // 10>0이므로 printf("양수\n")이 실행
	// 조건 ? 참 수행문장 : 거짓 수행문장;

	//두 수 중 큰 수를 출력.
	int a = 50, b = 20;
	a > b ? printf("%d\n",a ) : printf("%d\n",b);// 50 출력
	int c = a > b ? a : b;
	printf("%d\n", c);// 50 출력


	//실습)3개의 정수가 주어졌을 때 가장 큰 값을 삼항연산자로...
	int a = 50, b = 100, c = 30;
	int max = a > b ? a : b;
	max = max > c ? max : c;
	printf("가장 큰 값 : %d\n", max);
	//실습3. 삼항연산자를 한 줄로...
	int max2 = a > b ? (a > c ? a : c) : (b>c?b:c);
	//a>b ? (a가 크니까 c랑비교) : (b가 크니까 c랑비교)
	printf("가장 큰 값 : %d\n", max2);
	*/

	//실습 어떤 정수가 주어졌을 때 짝/홀수를 판별하여 출력..
	int a=120;
	a % 2 == 0 ? printf("%d : 짝수\n",a) : printf("%d : 홀수\n",a ); // 120 : 짝수
	char* p; // p는 주소값(ex:100번지)을 가진다.
	p = a % 2 == 0 ? "짝수" : "홀수"; // p는 짝수, 홀수의 주소값(ex:100번지)을 갖는다.
	printf("%d : %s\n",a , p); // 120 : 짝수. %s는 주소값을 주면 그 주소값의 value를 가져온다.



	return 0;
}