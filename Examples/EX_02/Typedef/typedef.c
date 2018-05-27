/***********************************************
◆ 파일 이름 : typedef.c                        *
◆ 작성자    : 김명진                           *
◆ 용도      : 자료 재정의 설명                 *
***********************************************/
#include <stdio.h>

typedef int integer; //int형을 integer형으로 재정의

// main() 함수 시작 
int main(void)
{
	integer a = 10;
	int b = 20;

	printf("a -> %d, b -> %d\n", a, b);

	return 0;
}
// main() 함수 종료