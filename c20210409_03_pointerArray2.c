#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//이차배열의 포인터
	/*int arr[2][3] = { {1,2,3}, {4,5,6} };
	int* p = arr;
	for (int i = 0; i < 6; i++) {
		printf("%d ", *p);
		p++;
	}*/

	//두 학생의 국영수 점수를 배열에 저장
	int score[2][3] = { {90, 89, 77},{89, 99, 88} };
	int sum = 0;
	double avg;
	//int* p[3] = score; // --> 주의!! score를 가르키는 포인터가 3개인 것으로 취급. 3개다 90의 주소를 가르킨다.
	int (*p)[3] = score; // ->> 12바이트(1행씩) 건너뛰게 만들어준다. ex) p=100번지, p+1,p++ = 112번지
	printf("%p	%p\n", p, p+1);
	for (int i = 0; i < 2; i++) {
		sum = (*p)[0] + (*p)[1] + (*p)[2];
		avg = sum / 3.;
		printf("합계:%d		평균:%.2f\n", sum, avg);
		p++;
	}
	//printf("%d %d\n", p, p+1);



	return 0;
}