/******************************************
* 파일이름 : goto2.c
* 파일용도 : goto 문 프로그램 연습
* 작성자 : 김명진
******************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			if (i == 5 && j == 5) goto LabelExit;
LabelExit:
	printf("goto 문을 사용하여 한 번에 탈출 !\n");
	printf("루프 탈출후의 i=%d, j=%d\n", i, j);

	return 0;
} // main() 함수 종료