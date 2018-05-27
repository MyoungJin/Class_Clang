/**************************************
 * 파일이름 : dowhilereverse.c
 * 파일용도 : do ~ while문 응용 예제
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int value, r_digit;

	printf("반대로 출력할 정수를 입력: ");
	scanf_s("%d", &value);
	printf("\n입력한 정수를 반대로 출력하면 >>> ");

	do {
		r_digit = value %10;
		printf("%d", r_digit);
		value = value / 10;
	} while( value != 0);
	printf("\n");
} // main() 함수 종료