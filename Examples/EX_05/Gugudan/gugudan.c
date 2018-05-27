/*****************************************
 * 파일이름 : gugudan.c
 * 파일용도 : for문 응용 예제(구구단을 출력)
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int iDan, iKuku;

	for(iDan = 1; iDan <= 9; iDan++)
	{
		for(iKuku = 1; iKuku <=9; iKuku++)
		{
			printf("%2d * %2d = %2d%c",
				iDan, iKuku, iDan*iKuku, ((iKuku %3) == 0) ? '\n' : ',');
		}
		printf("\n");
	}
} // main() 함수 종료