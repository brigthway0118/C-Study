#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//실습1
	/*
	int a, b, sum=0;
	printf("시작 정수, 마지막 정수 입력 : ");
	scanf("%d%d",&a,&b);
	for (int i = a; i <= b;i++) {
		sum += i;
	}
	printf("%d부터 %d까지의 합계는 : %d", a,b,sum);



	//n!구하기
	int a, mul=1;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		mul *= i;
	}
	printf("1부터 %d까지 곱한 값은 %d\n", a, mul);



	//실습 1000이 넘으면 종료
	int sum = 0, n = 0;
	while (1) {
		sum += n;
		if (sum > 1000)
			break;
		n++;

	}
	printf("%d까지의 합은 %d\n", n, sum);
	



	//1부터 10까지의 정수에서 두수를 골라 합이 10이되는 두수 출력../
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i+j==10) {
				printf("(%d , %d)\n", i, j);
			}
		}
	}
	
	//문자 입력받고 아스키코드로 구분하기
	//char a;
	//printf("정수 입력 : ");
	//scanf("%c", &a);
	//printf("%d\n", a);
	//if (a=113) {
	//	printf("q\n");
	//}
	
	char menu;
	do {
		printf("\n");
		printf("==================================\n");
		printf("1. 짬뽕		2.짜장면\n");
		printf("3. 불고기	4.비빔밥\n");
		printf("==================================\n");
		printf("메뉴 선택 : ");
		scanf("%c", &menu);
		getchar();

		switch (menu)
		{
		case '1':
			printf("짬뽕 5000원\nA 코너로가세요.\n");
			//menu = 'q';
			break;
		case '2':
			printf("짜장면 4000원\nA 코너로가세요.");
			//menu = 'q';
			break;
		case '3':
			printf("불고기 8000원\nB 코너로가세요.");
			//menu = 'q';
			break;
		case '4':
			printf("비빔밥 7000원\nC 코너로가세요.");
			//menu = 'q';
			break;
		case 'q':
			printf("q입력...종료합니다\n");
			break;
		default:
			break;
		}
	} while (menu != 'q');
*/

	for (int i = 1; i <= 9; i++) {
		for (int j = i; j <= 9; j++) {
			if (i + j == 10) {
				printf("(%d, %d)   ", i, j);
			}
		}
	}
	return 0;
	
}