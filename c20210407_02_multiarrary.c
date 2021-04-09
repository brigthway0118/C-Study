#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//다차원배열
	//int a[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}}
	//		0	1	2	3	4	
	//	0	1	2	3	4	5		1행
	//	1	6	7	8	9	10		2행
	//		1열	2열	3열	4열	5열
	//a[행][열] ... ex) a[0][0] = 0, a[1][2] = 8
	/*
	int arr[2][3];
	//arr[0][0] = 1;arr[0][1] = 2;arr[0][2] = 3;
	//arr[1][0] = 4;arr[1][1] = 5;arr[1][2] = 6;

	//arr[0]은 한 행의 사이즈가 나온다.
	int rSize = sizeof(arr)/sizeof(arr[0]); // 24 / 12 = 2. row의 수가 나온다.
	//전체크기 / 한 행의 크기 = 행의 개수

	int cSize = sizeof(arr[0]) / sizeof(int); // 12 / 4 = 3. column의 수가 나온다.
	//한 행의 크기 / 변수 타입 크기 = 열의 개수
	printf("사이즈 : %d	%d\n", rSize, cSize);

	for (int i= 0; i < rSize; i++) {
		for (int j = 0; j < cSize; j++) {
			arr[i][j] = (3*i) + j+1;
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	*/

	int arr[2][3];
	int sum[2] = {0,0};
	int averPoint[3] = {0, 0, 0};
	//학생들의 점수 입력
	for (int i = 0; i < 2; i++) {
			printf("%d번 학생의 국어, 영어, 수학 점수 입력 : ", i + 1);
			for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
			////getchar();
			//sum[i] += arr[i][j];
		}
	}
	//학생들의 합계
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			sum[i] += arr[i][j];
		}
	}
	//합계 출력
	for (int i = 0; i < 2; i++) {
		printf("%d번 학생의 합계 : %d	평균 : %.2f\n", i + 1, sum[i], (double)sum[i]/3);
	}

	//과목별 평균.
	//국	영		수
	//국	영		수
	//00	01		02
	//10	11		12
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			averPoint[i] += arr[j][i];
		}
	}
	printf("국어 점수 평균 : %.2f\n", (double)averPoint[0]/2);
	printf("영어 점수 평균 : %.2f\n", (double)averPoint[1]/2);
	printf("수학 점수 평균 : %.2f\n", (double)averPoint[2]/2);
	 


	return 0;
}

