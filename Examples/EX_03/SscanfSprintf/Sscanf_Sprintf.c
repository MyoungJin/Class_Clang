/******************************************************
◆ 파일 이름 : scanf_sprintf.c
◆ 작성자    : 김명진
◆ 용도      : 기억장소를 활용한 데이터의 입출력
******************************************************/
#include <stdio.h>

int main(void) // main() 함수 시작 
{
	int x, y;
	char data_in[20] = "50, 123";
	char data_out[20];

	sscanf(data_in, "%d%*c%d", &x, &y);
	sprintf(data_out, "입력한 x=%d, y=%d\n", x, y);
	puts(data_out);
	return 0;
} // main() 함수 종료
