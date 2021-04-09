#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	//문자
	/*char c;
	scanf("%c",&c);
	printf("문자 : %c\n", c);
	*/

	//에코기능이 있다. 입력버퍼에 쌓았다가 엔터를 치면 반응.
	//char c = getchar(); // 문자입력 전용함수
	//printf("입력문자 : ");
	//putchar(c);//문자 출력 전용함수. 입력문 하나의 문자 출력.


	//에코기능이 없다. 입력버퍼X 엔터X
	//getch()함수
	/*char c = getch();
	printf("입력문자 : ");
	putchar(c);*/

	//비밀번호를 입력하면 *가 출력
	/*
	char pw[5];
	printf("password?");
	for (int i = 0; i < 4; i++) {
		pw[i] = getch();
		putchar('*');
	}

	printf("------------------------------------\n");
	for (int i = 0; i < 4; i++) {
		printf("%c",pw[i]);
	}

	pw[4] = '\0'; // 비밀번호는 4개. 마지막 하나의 배열에 \0을 넣어서 문자열로 취급하게 바꾼다.
	printf("\n비밀번호 : %s\n", pw); //%s 문자열 출력. pw(배열의이름)은 배열의 시작 주소값을 가진다.
	*/

	//문자열
	//char s[6] = "Hello";
	//char s[6];
	//scanf("%s", s);//배열의 이름은 주소다. 따라서 &가 필요없다.. 공백처리 불가능
	//printf("%s\n", s);

	//문자열 전용함수
	//char name[20];
	//printf("이름은? ");
	//gets(name);//gets()문자열 전용 입력함수.//엔터 치기전까지의 모든 문자를 열로 처리한다.(공백포함) 공백처리가능.
	//printf("당신의 이름은 "); puts(name); // puts는 문자열만 뿌리고 꾸미기불가능.

	//문자열 전용함수2
	//char name[10] = "hong";
	//strcpy(name, "kim"); // name이라는 변수에 "kim"으로 추가.
	//puts(name);

	/*char input[100];
	printf("문자열을 입력하세요 : ");
	gets(input);
	puts(input);
	printf("길이 : %d\n", strlen(input));
	printf("주소 : %d", input);*/

	//피보나치 수열 구하기..
	// 0 1 1 2 3 5 8 13 ....
	int fibo[20];
	for (int i = 0; i < 20; i++) {
		if (i < 2) {
			fibo[i] = i;
		}
		else {
			fibo[i] = fibo[i - 1] + fibo[i - 2];
		}
	}

	for (int i = 0; i < 20;i++) {
		printf("%d ", fibo[i]);
	}


	return 0;
}