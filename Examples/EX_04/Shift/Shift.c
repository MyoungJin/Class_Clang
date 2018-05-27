/**************************************
 * 파일이름 : Shift.c
 * 파일용도 : 비트이동 연산을 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int x, y;

	printf("비트 이동(Shift)할 정수를 입력하세요 : ");
	scanf_s("%d", &x);
	printf("비트 이동(Shift)할 횟수를 입력하세요 : ");
	scanf_s("%d", &y);
	
	printf("%d << %d는 %d입니다.\n", x, y, x << y);
	printf("%d >> %d는 %d입니다.\n", x, y, x >> y);
} // main() 함수 종료