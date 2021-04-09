#include <stdio.h>
int main() {

	//printf함수 : 콘솔화면에 출력
	
	/*printf("Hello\n");
	printf("헬로우 c\n");
	printf("10+20=%d\n", 10 + 20);
	printf("%d + %d = %d\n", 20, 10, 20 + 10);*/

	printf("원주율은 %.2f\n", 3.14);
	//printf("원주율은 %50.2f\n", 3.14); 50번 공백채운후 소수점 2자리 출력.
	
	printf("%c1000\n",'%'); // $1000. %c는 '문자'
	printf("나의 이름은 %s\n","홍길동"); // $1000 %s는 문자열. "홍길동"의 주소값을 가지고 있다.
	
	
	
	return 0;
}