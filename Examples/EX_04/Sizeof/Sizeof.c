/*****************************************
 * 파일이름 : Sizeof.c
 * 파일용도 : sizeof 연산을 설명하기 위함
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int iVal = 10;
	long gVal = 256L;
	float fVal = 3.14F;
	double dVal =14.56E5;
	char cVal = 'a';

	printf("int 형 변수 iVal의 크기는 %d 바이트입니다.\n", sizeof iVal);
	printf("long 형 변수 gVal의 크기는 %d 바이트입니다.\n", sizeof gVal);
	printf("float 형 변수 fVal의 크기는 %d 바이트입니다.\n", sizeof (fVal) );
	printf("double 형 변수 dVal의 크기는 %d 바이트입니다.\n", sizeof (dVal) );
	printf("char 형 변수 cVal의 크기는 %d 바이트입니다.\n", sizeof (cVal) );

	printf("int 형의 크기는 %d 바이트입니다.\n", sizeof (int) );
	printf("long 형의 크기는 %d 바이트입니다.\n", sizeof (long) );
	printf("float 형의 크기는 %d 바이트입니다.\n", sizeof (float) );
	printf("double 형의 크기는 %d 바이트입니다.\n", sizeof (double) );
	printf("char 형의 크기는 %d 바이트입니다.\n", sizeof (char) );
} // main() 함수 종료