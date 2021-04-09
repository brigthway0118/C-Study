#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


//매개변수 : 카운트다운 초
//반환값 없음.
//기능 : 카운트다운을 출력
void countDown(int a) {
	printf("카운트다운 시작\n");
	for (int i = a; i > -1; i--) {
		Sleep(1000);
		printf("%d초\n", i);
	}
	printf("발사\n");
}
int main() {
	//카운트 다운

	//printf("카운트다운 시작\n");
	//for (int i = 5; i > -1; i--) {
	//	Sleep(1000); // 밀리세컨드 = 1/1000초. 1000 = 1초
	//	printf("%d초\n", i);
	//}
	//printf("발사\n");
	//
	int a = 10;
	countDown(10);
	return 0;
}