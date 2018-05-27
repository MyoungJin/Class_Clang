/******************************************
* 파일이름 : ArrayBoundary.c
* 파일용도 : 배열 경계를 설명
* 작성자 : 김명진
*****************************************/
#include <stdio.h>
#define SIZE	3

void main(void)
{
	int val1 = 33;
	int IntArr[SIZE];
	int val2 = 77;
	int i;

	printf("val1 = %d, val2 = %d\n", val1, val2);
	for (i = -1; i <= (SIZE + 2); i++) 
		IntArr[i] = (2 * i + 1);

	for (i = -1; i <= (SIZE + 2); i++)
		printf("IntArr[%d] = %d\n", i, IntArr[i]);

	printf("val1 = %d, val2 = %d\n", val1, val2);
}