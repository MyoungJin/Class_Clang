/***********************************************
◆ 파일 이름 : scanf3.c
◆ 작성자    : 김명진
◆ 용도      : 자료 입력함수 scanf 응용
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() 함수 시작 
{
	int year, num1, num2, num3;

	printf("입력: ");
	scanf_s("%*d %d", &num1);
	printf("=> num1=%d \n\n", num1);

	num1 = 1; num2 = 2; num3 = 3;
	printf("입력: ");
	scanf_s("%d %*d %d", &num1, &num2, &num3);
	printf("=> num1=%d, num2=%d, num3=%d \n\n", num1, num2, num3);

	printf("입력: ");
	scanf_s("%d %*s %d", &num1, &num2);
	printf("=> num1=%d, num2=%d \n\n", num1, num2);

	printf("입력: ");
	scanf_s("%*s %i", &year);
	printf("=> year=%d \n\n", year);

	return 0;
} // main() 함수 종료
