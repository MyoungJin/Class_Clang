/***********************************************
◆ 파일 이름 : literals.c
◆ 작성자    : 김명진
◆ 용도      : 상수를 설명하기 위함
***********************************************/
#include <stdio.h>

// main() 함수 시작 
int main(void)
{
	int jungsu = 17;
	printf("int  jungsu =   17;  이후의 저장 값은 %d 입니다.\n", jungsu);

	jungsu = 017;
	printf("     jungsu =  017;  이후의 저장 값은 %d 입니다.\n", jungsu);

	jungsu = 0x17;
	printf("     jungsu = 0x17;  이후의 저장 값은 %d 입니다.\n", jungsu);

	return 0;
}
// main() 함수 종료