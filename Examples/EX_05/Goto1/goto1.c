/******************************************
* 파일이름 : goto1.c
* 파일용도 : goto 문 프로그램 연습
* 작성자 : 김명진
******************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int count = 0;

	while (1) {
		if (count++ == 30) goto LabelExit;
		else printf("%3d%c", count, (count % 5) ? ' ' : '\n');
	}
LabelExit:
	printf("프로그램 종료합니다 !\n");
	return 0;
} // main() 함수 종료