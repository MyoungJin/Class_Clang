/**************************************
 * 파일이름 : Register.c
 * 파일용도 : 레지스터 변수 연습
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

#define LIMIT 100

void main(void)
{
	register int count = 1;
	int sum = 0;

	for(; count <= LIMIT; count++) 
		sum += count;

	printf("1에서 %d까지의 합은 %d 입니다.\n", LIMIT, sum);
}