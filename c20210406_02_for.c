#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//반복문for
	/*
	int i;
	for (i = 0; i < 10;i++) {
		printf("%d\n", i);
	}

	//do~while+for문
	int i, dan;
	do {
		printf("단수는? ");
		scanf("%d", &dan);
		for (i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", dan, i, dan * i);
		}
	} while (dan != 0);


	//이중for문을 이용한 구구단
	for (int i = 1; i < 10;i++) {
		printf("[%d]단\n",i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i,j,i*j);
		}
	}

	//실습 1부터 100까지의 합
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1부터 100까지의 합은 %d입니다\n", sum);

	int sum = 0, sel = 0;
	printf("1부터 몇까지 더 할까요? ");
	scanf("%d", &sel);
	for (int i = 1; i <= sel; i++) {//i가 for문 안에 선언이 되었다. 즉 for문의 지역변수.
		sum += i;
	}
	printf("1부터 %d까지의 합은 %d입니다\n", sel, sum);
	


	//최대 10번까지 반복하는 큰 수-작은 수. (단 0을 입력하면 종료)
	int a, b;
	for (int i = 0; i < 10; i++) {
		printf("두 정수 입력 : ");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		scanf("%d", &b);
		if (a >= b) {
			printf("두 정수의 차는 %d\n", a - b);
		}
		else if (b > a) {
			printf("두 정수의 차는 %d\n", b - a);
		}
		else {
			printf("잘못된 입력");
		}
		printf("스페이스바를 누르면 종료...\n");
		int c = getch(); // 에코없는 함수==>cmd화면에 보이지않고 입력은 된다.
		printf("%d\n",c) // 입력된 문자의 아스키코드
		if (c==32) break; // 아스키코드값이 같으면 종료

	}
	*/
	//실습 별찍기
	for (int i = 1; i < 8; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("==================================\n");
	for (int i = 1; i < 8; i++) {
		for (int j = 0; j <= (7-i); j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("==================================\n");
	for (int i = 1; i < 8; i++) {
		for (int j = 0; j <= (6-i); j++) {
			printf(" ");
		}
		for (int k = 1; k <= i;k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("==================================\n");
	//1 3 5 7 9 11이 별이 출력.
	for (int i = 0; i < 6; i++) {
		for (int k = 0; k < (5-i);k++) {
			printf(" ");
		}
		for (int j = 0; j < (i+i+1); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
