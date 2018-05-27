/**************************************
 * 파일이름 : BitMask.c
 * 파일용도 : 비트마스크 연산을 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int a, bit, mask = 1 << 31;

	printf("양수 하나를 입력하세요 : "); scanf_s("%d", &a);

	bit = (a & mask) ? 1 : 0;
	printf("입력한 양수 %d의 최상위 비트는 %d이다. \n\n", a, bit);

	printf("음수 하나를 입력하세요 : "); scanf_s("%d", &a);

	bit = (a & mask) ? 1 : 0;
	printf("입력한 음수 %d의 최상위 비트는 %d이다. \n\n", a, bit);
} // main() 함수 종료