#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//전역변수 : 프로그램 시작 시 생성, 프로그램이 종료 시 소멸
//어디서든 사용가능.
//자동 초기화.
//전역변수의 무분별한 선언은 지양..프로그램의 복잡도가 증가한다.
int g;//전역변수

//int sum=0;

//매개변수로 정수를 입력받아 누적하는 함수.
int userSum(int a) {

	//static변수.
	//함수가 최초로 실행됐을 때 생성, 프로그램 종료 시 소멸.
	//선언된 함수안에서만 접근가능.


	static int sum = 0;
	sum += a;
	return sum;
}

//매개변수:없다
//리턴값 : 이 함수를 실행한 횟수
//함수이름 : countTest

int countTest() {
	static int cnt = 0;
	cnt++;
	return cnt;
}



//void test() {
//	//printf("a : %d\n", a); a는 main함수의 지역번수이므로 사용불가
//	printf("g : %d\n", g);
//}

int main()
{
	//전역변수와 지역변수
	//지역변수 : 함수가 시작될 때 생성, 함수가 종료되면 소멸
	//선언된 {} 안에서만 사용가능. 자동초기화X

	//int a = 10; // 지역변수
	//printf("a : %d\n",a); // 10출력
	//printf("g : %d\n", g); // 전역번수 g는 자동초기화 되어서 0출력.

	//printf("누적 값 : %d\n", userSum(10));
	//printf("누적 값 : %d\n", userSum(20));

	for (int i = 0; i < 10; i++) {
		printf("실행횟수 : %d\n", countTest());
	}
	






	return 0;
}