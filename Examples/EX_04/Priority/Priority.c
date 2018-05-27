/**************************************
 * 파일이름 : Priority.c
 * 파일용도 : 연산의 우선순위를 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int x = 3, y = 4, m = 6, n = 9;

	printf("연산 x > y || m < n 결과는 %d\n", x > y || m < n);
	printf("연산 (-x > -n) - sizeof m 결과는 %d\n", (-x > -n) - sizeof m);
	printf("연산 (!n - 9) << 1 결과는 %d\n", (!n - 9) << 1);
	printf("연산 (3 > y) & (m == n) 결과는 %d\n", (3 > y) & (m == n));
	printf("연산 m = 2 결과는 %d\n", m = 2);
	printf("연산 m == 2 결과는 %d\n", m == 2);
	printf("연산 ++n >> 2 | 5 결과는 %d\n", ++n >> 2 | 5);
} // main() 함수 종료