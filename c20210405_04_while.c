#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//while(반복문)
	
	/*while (1) {
		printf("c!!!\n");
	}

	//break 반복문 탈출
	int cnt = 0;
	while (1) {
		printf("c!!!, %d번 출력\n", cnt+1);
		cnt++; // cnt += 1; , c = c + 1
		if (cnt>9) {
			break;
		}
	}
	

	//실습)1~10까지의 합
	int i=0, sum=0;
	while (i<10) {
		//printf("%d\n", ++i);
		//sum += i;
		sum += ++i;
	}
	printf("합계 : %d\n", sum);
	
	//실습) 합이 2000이 넘을때의 n번째 정수와 그 합을 구하기
	int i = 0, sum = 0;
	while (sum<=2000) {
		sum += ++i;
		printf("%d 번째에 합계 : %d 달성\n",i ,sum);
	}
	

	int i = 0;
	while (i<20) {
		i++;
		if (i%3 == 0)
			printf("%d\n",i);
	}
	
	int i = 0;
	while (1) {
		i++;
		if (i > 20)
			break;
		if (i % 3 == 0)
			printf("%d\n", i);

	}
	*/

	//continue
	//1~10까지 짝수만 출력
	int i = 0;
	while (i < 10) {
		i++;
		if (i % 2 != 0)
			continue;
		printf("%d\n",i);
	}


	return 0;
}