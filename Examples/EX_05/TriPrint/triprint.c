/**************************************
 * 파일이름 : triprint.c
 * 파일용도 : for문 응용 예제(삼각형 출력)
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int i, j;

	for(i = 1; i <= 5; i++)
	{
		for(j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
} // main() 함수 종료