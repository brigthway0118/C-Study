#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//포인터

	//포인터 변수
	//int a = 10;
	//int* p = &a;
	//printf("a:%d	%p\n", a, &a);	//
	//printf("p:%p	%d\n", p, *p);	//여기서 *p와 int* p의 *은 의미가 다르다.
	////선언할때의 *는 포인터 변수의 의미. %d *p는 p가 가리키는 주소의 '값'을 가져온다는 의미의 문법.

	//char c = '%';
	//char* p2 = &c;
	//printf("c:%c	*p2:%c\n", c, *p2);

	//double d = 3.14;
	//double* p3 = &d;
	//printf("d:%f	*p3:%f\n",d, *p3);


	//float f = 5.55;
	//float* p4 = &f;

	//포인터 변수 p를 이용하여 a의값과 b의 값을 출력.
	/*int a = 10, b = 20;
	int* p;
	p = &a;
	printf("a의 값 : %d\n",*p);
	p = &b;
	printf("b의 값 : %d\n",*p);*/

	//실습))포인터롤 이용한 a,b,c값 변경
	//int a = 10, b = 20, c = 30;
	//int base = 100;
	//int* p;

	//p = &a; // p에 a의 주소값 넣기.
	//*p += base; //*p(a의 주소값이 가진 값)에 base값을 더하기. *p = 10 + 100;
	//printf("%d\n", *p);
	//p = &b;
	//*p += base;
	//printf("%d\n", *p);
	//p = &c;
	//*p += base;
	//printf("%d\n", *p);


	////배열의포인터
	//int arr[3] = { 10,20,30 };
	//int* p = arr;
	//printf("%d\n", *p); //10
	//printf("%d\n", *(p+1)); //20 --> (p + 배열 하나만큼 건너뜀)
	////printf("%d\n", *p + 1); //11 --> *p에 +1
	//printf("%d\n", *(p+2)); //30--> (p + 배열 둘만큼 건너뜀)
	////printf("%d\n", *p + 2); //12 --> *p에 +2

	/*for (int i = 0; i < 3; i++) {
		printf("%d	%d	%d	%d\n", *(p+i), *(arr+i), arr[i], p[i]);
	}*/

	//for (int i = 0; i < 3; i++) {
	//	//printf("%d\n",*p++);
	//	printf("%d\n", *p);
	//	p++;
	//}

	//실습
	//char c[6] = { 'p','y','t','h','o','n' };
	//char* p;
	//p = c;
	//for (int i = 0; i < 6; i++) {
	//	printf("%c", *p);
	//	p++;
	//}

	//피보나치 수열을 포인트 이용으로..
	
	//피보나치 위치이동
	int fibo[20];
	int* p;
	p = fibo;
	for (int i = 0; i < 20; i++) {
		if (i < 2) {
			*p = i;
			//printf("%d ",*p);
			p++;
		}
		else {
			*p = *(p-1) + *(p-2);
			//printf("%d ", *p);
			p++;
		}
	}
	//위치 이동방식의 경우 p가 ++되어 위치가 바뀌었으므로 다시 처음위치로 초기화 후 출력.
	p = fibo;
	/*
	//피보나치 위치지정
	int fibo[20];
	int* p;
	p = fibo;
	for (int i = 0; i < 20; i++) {
		if (i < 2) {
			*(p+i) = i;
			//printf("%d\n", *(p + i));
		}
		else {
			*(p + i) = *(p + i -1) + *(p + i - 2);
			//printf("%d\n", *(p + i));
		}
	}
	*/



	for (int i = 0; i < 20; i++) {
		printf("%d ", *(p+i));
	}

	return 0;
}