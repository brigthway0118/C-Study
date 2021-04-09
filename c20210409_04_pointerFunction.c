#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arrayPrint(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}

int main()
{
	//이차 문자열 배열의 매개변수
	//포인터의 배열
	//char *p[3] = { "python", "c", "java" }; // 포인터가 3개.
	//printf("%p %p %p\n",p[0],p[1],p[2]); // 파이썬 , c , 자바의 주소가 출력
	//8 -> 4 바이트씩 차이가난다.

	//다차원 배열의 포인터
	//char arr[][7] = { "python", "c", "java" };
	//char(*p)[7] = arr;
	//printf("%d %d %d\n", p, p+1, p+2);// ->7바이트씩 차이난다.

	char *p[3] = { "python", "c", "java" }; // 포인터가 3개.
	printf("%p %p %p\n", p[0], p[1], p[2]); // 파이썬 , c , 자바의 주소가 출력

	//arrayPrint()함수로 처리
	/*for (int i = 0; i < 3; i++) {
		printf("%s\n",p[i]);
	}*/

	arrayPrint(3, p);

	return 0;
}