/* 파일 : add.c */
#include <stdio.h> //printf()의 이용을 위한 헤더 파일 포함
#define LIMIT 10

/************* main() 함수 시작 ********************/
int  main(void)
{
	int  sum = 0;
	int  i = 0;

	for (i = 1; i <= LIMIT; i++) {
		sum += i;
	}
	printf("1에서 %d까지의 합은 %d 입니다.\n", LIMIT, sum);
	return 0;
}
/************* main() 함수 종료 ********************/