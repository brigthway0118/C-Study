#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//매개변수:없다, 반환값:없다
void voidTest() {
	printf("void함수\n");
}

//매개변수:한개, 반환값:없다
void voidTest2(int a) {
	printf("매개변수:%d\n", a);
}
//매개변수:두개, 반환값:없다
void voidTest3(int a, int b) {
	printf("두수의 합:%d\n", a + b);
}

//원의 넓이를 구하고 출력하는 함수.
void area(double r2) {
	printf("반지름의 넓이는 : %.2f입니다\n", r2 * r2 * 3.14);
}

//반환형. 매개변수:반지름(double). 반환값:넓이(double). 원의넓이를 구해서 반환하는 함수.
double areaReturn(double r) {
	double area = r * r * 3.14;
	return area;
}

//세 정수를 매개변수로 받아서 합을 반환하는 함수
int sumReturn(int a, int b, int c) {
	int sum = a + b + c;
	return sum;
}

//두 개의 정수를 매개변수로 받아서 나눈 실수값을 반환하는 함수.
double div(int a, int b) {
	return (double)a / b;
}

int minMax(int a, int b) {
	int max = 0;
	if (a>=b) 
		max = a;
	else
		max = b;
	return max;
}


//진입점 main함수.
int main()
{
	//함수
	//voidTest();
	//voidTest2(10);
	//주소를 넘기는 방식 : call by reference
	//값을 넘기는 방식 : call by value
	//
	//
	//double r;
	//printf("반지름은 ? ");
	//scanf("%lf", &r);
	//
	////area는 값을 넘기므로 call by value
	//area(r);
	/*double r=3.6;
	double rValue = areaReturn(r);
	printf("넓이 : %.2f\n",rValue);*/
	//
	//int a = sumReturn(5, 5, 7);
	//printf("%d\n",a);
	//
	//int a = 10, b = 3;
	//double d = div(a,b);
	//printf("나눈값 : %f\n",d);

	int a = 10, b = 30;
	int c = minMax(a, b);

	printf("큰 값은 : %d입니다\n",c);

	return 0;
}

