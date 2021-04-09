#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LEN 5 // 상수 정의
int main() {
	//배열(Array)

	/*
	int arr[3]; // 3개의 배열선언
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%p %d\n", arr, sizeof(arr));

	//반복문을 이용해서 초기화
	for (int i = 0; i < 3; i++) {
		arr[i] = (i + 1)*10;
	}
	//반복문을 이용해서 출력
	for (int i = 0; i < 3; i++) {
		printf("arr[%d]의 값 : %d\n", i, arr[i]);
	}


	//실습)
	double arr[5];
	//배열의 크기구하기
	int size = sizeof(arr) / sizeof(double); // 40 / 8 ==> 배열 / 배열의타입=배열의크기
	printf("사이즈 : %d\n", size);

	for (int i = 0; i < size; i++) {
		arr[i] = i+1.1;
	}

	for (int i = 0; i < size;i++) {
		printf("arr[%d]의 값 : %.2f\n",i,arr[i]);
	}


	//문자형 배열
	char arr[] = {'p','y','t','h','o', 'n'};
	int size = sizeof(arr) / sizeof(char);

	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}


	//배열값의 합
	//#define에 정의된 매크로 상수 : 컴파일되기 전에 대체된다.
	int arr[LEN]; // c는 정적배열. 따라서 변수를 배열크기로 정할 수없다. 상수로만 가능!
	int sum = 0;
	int size = sizeof(arr) / sizeof(int);
	//입력
	for (int i = 0; i < size; i++) {
		printf("%d번째 배열 값 입력 : ", i+1);
		scanf("%d",&arr[i]);
	}
	printf("===========================================\n");
	//배열값 출력
	for (int i = 0; i < size; i++) {
		printf("%d번째 배열 값 : %d		주소값 : %p\n", i + 1, arr[i], &arr[i]);
	}

	//합계출력
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	printf("합계는 %d\n", sum);



	int arr[3];
	int size = sizeof(arr) / sizeof(int);
	int sum = 0, sel;
	//입력
	for (int i = 0; i < size; i++) {
		printf("%d번 점수 : ", i + 1);
		scanf("%d", &arr[i]);
	}
	//개별출력
	printf("==============================================\n");
	for (int i = 0; i < size; i++) {
		printf("%d번은 %d점\n", i + 1, arr[i]);
	}
	//합계
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	printf("==============================================\n");
	printf("합계 : %d	평균 : %.2f\n", sum, (double)sum / size);
	printf("==============================================\n");
	//원하는 번호의 점수 출력
	while (1) {
		printf("출력을 원하는 학생번호 입력(0입력 종료) : ");
		scanf("%d", &sel);
		if (sel == 0) {
			break;
		}
		else if (0 < sel && sel < 4) {
			printf("%d번의 점수 : %d\n", sel, arr[sel - 1]);
			printf("\n");
		}
		else {
			printf("잘못된 입력...\n");
		}
	}
	*/







	return 0;
}