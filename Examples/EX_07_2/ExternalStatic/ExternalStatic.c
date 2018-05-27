/**************************************
 * 파일이름 : ExternalStatic.c
 * 파일용도 : 전역 static 변수 실습
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

int sum(int);

static int cntFunction = 0;

void main(void)
{
	int count = 1;

	for(;count <= 5; count++)
		printf("1부터 %3d까지의 합은 %5d이다.\n", count, sum(count));

	printf("합을 구하는 함수가 총 %2d번 호출되었습니다.\n", cntFunction);
}

int sum(int limit)
{
	int i = 1, total = 0;

	cntFunction++;
	for(i=1; i<= limit; i++) total += i;

	return total;
}