#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//do~while
	/*do {
		실행문장
	} while (조건);
	최소 1번은 실행이 된다.
	*/
	/*
	int a = -1;
	do {
		printf("%d\n", a);
	} while (a > 0);
	

	//사용자에게 입력을 받아서 y면 뮤직플레이 출력
	//while의 경우 answer가 초기화되어있지 않아 while문에 접근 불가.
	char answer='y';
	while (answer == 'y') {
		printf("음악을 재생할까요? ");
		scanf("%c",&answer); // scanf는 주소값을 넘겨줘야한다
		getchar(); // 입력버퍼에 남아있는 enter값 처리
		printf("음악 재생 중...\n");
	}
	
	//do~while의 경우 answer가 초기화되어있지 않아도 실행.
	char answer;
	do {
		printf("음악 재생 중...\n");
		printf("음악을 재생할까요(y)? ");
		scanf("%c", &answer); // scanf는 주소값을 넘겨줘야한다
		getchar(); // 입력버퍼에 남아있는 enter값 처리
	} while (answer == 'y');
	*/
	int i,sum=0;
	do {
		printf("정수를 입력하세요 : ");
		scanf("%d",&i);
		sum += i;
	} while (i!=0);
	printf("지금까지 더한 수는 %d입니다.\n",sum);





	return 0;

}