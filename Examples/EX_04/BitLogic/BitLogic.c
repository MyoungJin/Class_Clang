/*************************************
 * 파일이름 : BitLogic.c
 * 파일용도 : 비트논리연산을 설명하기 위함
 * 작성자 : 김명진
 *************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int x, y;

	printf("비트 논리 연산을 수행할 정수 1을 입력하세요 : ");
	scanf_s("%d", &x);
	printf("비트 논리 연산을 수행할 정수 2를 입력하세요 : ");
	scanf_s("%d", &y);
	
	printf("%d & %d는 %d입니다.\n", x, y, x & y);
	printf("%d | %d는 %d입니다.\n", x, y, x | y);
	printf("%d ^ %d는 %d입니다.\n", x, y, x ^ y);
	printf("^%d 는 %d입니다.\n", x, ~x);
	printf("^%d 는 %d입니다.\n", y, ~y);
} // main() 함수 종료