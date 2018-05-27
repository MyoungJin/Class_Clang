/**************************************
 * 파일이름 : switchmonth.c
 * 파일용도 : switch문 응용 예제
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int year = 0, month = 0, maxDay = 30, validinput = 0;

	printf("년과 월을 다음과 같이 입력하면 그 달의 말일을 알려드립니다.\n");
	printf("2013 4\n 입력 >");
	scanf_s("%d %d", &year, &month);

	switch(month) {
		case 1: case 3: case 5: 
		case 7: case 8: case 10: 
		case 12: 
			maxDay = 31; validinput = 1; break;
		case 4: case 6: case 9:
		case 11:
			maxDay = 30; validinput = 1; break;
		case 2:
			if((year%4 == 0) && (year%100 !=0) || (year%400 == 0)) maxDay = 29;
			else maxDay = 28;
			validinput = 1;
			break;
		default :
			validinput = 0;
	}

	if(validinput)
		printf("%d년 %d월의 말일은 %d일 입니다.\n", year, month, maxDay);
	else
		printf("입력이 잘못되었습니다.\n");
} // main() 함수 종료