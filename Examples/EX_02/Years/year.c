/***********************************************
◆ 파일 이름 : year.c
◆ 작성자    : 김명진
◆ 용도      : 변수를 설명하기 위함
***********************************************/

#include <stdio.h>

// main() 함수 시작 
int main(void)
{
	int year;
	short int month;
	int date;

	year = 2018;
	month = 3;
	date = 14;

	printf("오늘의 날짜는 %d년 %d월 %d일 입니다.\n", year, month, date);

	return 0;
}
// main() 함수 종료
