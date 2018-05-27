/*****************************************
* 파일이름 : ShortAssign.c
* 파일용도 : 축약 연산을 설명하기 위함
* 작성자 : 김명진
*****************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int x, y;

	printf("축약 대입 연산을 수행할 정수 2개 입력: ");
	scanf_s("%d %d", &x, &y);

	printf("연산 x += y 결과는 %d입니다.\n", x += y);
	printf("연산 x -= y 결과는 %d입니다.\n", x -= y);
	printf("연산 x *= y 결과는 %d입니다.\n", x *= y);
	printf("연산 x /= y 결과는 %d입니다.\n", x /= y);
	printf("연산 x %%= y 결과는 %d입니다.\n", x %= y);
	printf("연산 x &= y 결과는 %d입니다.\n", x &= y);
	printf("연산 x |= y 결과는 %d입니다.\n", x |= y);
	printf("연산 x ^= y 결과는 %d입니다.\n", x ^= y);
	printf("연산 x <<= y 결과는 %d입니다.\n", x <<= y);
	printf("연산 x >>= y 결과는 %d입니다.\n", x >>= y);
} // main() 함수 종료