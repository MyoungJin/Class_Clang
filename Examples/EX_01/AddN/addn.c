/* 파일 : addn.c */
#include <stdio.h> //printf()의 이용을 위한 헤더 파일 포함

/************* main() 함수 시작 ********************/
int  main(void)
{
	int  sum = 0;
	int  i, n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum);
	return 0;
}
/************* main() 함수 종료 ********************/