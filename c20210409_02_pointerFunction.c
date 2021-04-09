#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수 call by reference = 주소를 매개변수로 받는다.
//main함수에 있는 a의값을 변경 가능

void change(int* c) {
	*c = 20;
}

//main함수의 두수를 바꾸기
void twoChange(int* c, int* d) {
	int temp = *c;
	*c = *d;
	*d = temp;
}

//합계구하기
void sumCal(int* a, int* sum) {
	*sum += *a;
}
int main()
{
	//int a=10;
	//int* p = &a;
	//change(p);
	//printf("a: %d\n", a);

	//int b = 10;
	//change(&b);
	//printf("b: %d\n", b);

	//실습1) 두 수 바꾸기
	/*int a = 10, b = 20;
	printf("%d %d\n", a, b);
	twoChange(&a, &b);
	printf("%d %d\n", a, b);*/

	//실습2) 반복문을 이용하여 입렵받은값의 합계 구하기
	//함수에서 누적
	int a, sum = 0;
	while(1){
		printf("정수 입력 : ");
		scanf("%d",&a);
		if (a == 0) break;
		sumCal(&a, &sum);
	}
	printf("누적값 : %d\n", sum);
	return 0;
}