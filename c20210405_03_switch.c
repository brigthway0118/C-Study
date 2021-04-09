#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//switch 스위치문
	/*
	int a = 0;
	switch (a){
	case 0:
		printf("zero\n"); break;
	case 1:
		printf("one\n"); break;
	case 2:
		printf("two\n"); break;
	default: // case 외
		printf("잘못된 숫자\n"); break;
	}
	

	//월의 마지막날 출력
	int month = 1;
	switch (month) {
	case 2:
		printf("28일\n");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30일\n");
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31일\n");
		break;
	default:
		printf("그 외\n");
		break;
	}
	*/
	int menu = 5;

	printf("--------------------------------------------\n");
	printf("1.중식1		2.중식2\n");
	printf("3.한식1		4.한식2\n");
	printf("5.양식1		6.양식2\n");
	printf("--------------------------------------------\n");

	switch (menu){
	case 1:case 2:
		printf("중식코너\n");
		break;
	case 3:case 4:
		printf("한식코너\n");
		break;
	case 5:case 6:
		printf("양식코너\n");
		break;
	default:
		printf("잘못된 번호");
		break;
	}

	return 0;
}