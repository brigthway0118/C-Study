#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	////문자열의 포인트
	//char str[] = "happy";
	////str = "angry"; //str은 상수라서 변경이 불가함.
	//char* p = str;
	//printf("%s\n",p); // %s는 문자열의 주소를 넣어줘야한다. p는 str의 주소.

	//p = "python";
	//python이 변수 p안에 저장되지 않고, python 있는 곳의 메모리 주소만 저장된다.
	//puts(p); // 문자열 전용함수

	//실습) 이름을 입력받고 출력.
	//포인터를 이용.
	/*
	char n[20];
	char* p;
	p = n;
	printf("이름을 입력 : ");
	scanf("%s",p);
	puts(p);*/
	char name[20];
	char* p = name;
	while (1) {
		printf("이름은 : ");
		//gets_s(p, sizeof(name));
		scanf_s("%s",p,sizeof(name));
		if (name[0] == 'q')
			break;
		/*puts(p);
		printf("님 환영합니다.");*/
		printf("%s님 환영합니다.\n",p);
		
	}


	return 0;
}