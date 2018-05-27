/**************************************
 * 파일이름 : LocalGlobal.c
 * 파일용도 : 지역변수 및 전역변수 실습
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>
int gVar = 100;

void main(void)
{
	int count = 10;

	count += gVar;
	printf("count = %5d, gVar = %5d\n", count, gVar);

	{
		int count = 100; //지역변수
		count += gVar++;

		printf("count = %5d, gVar = %5d\n", count, gVar);
	}

	printf("count = %5d, gVar = %5d\n", count, gVar);
}