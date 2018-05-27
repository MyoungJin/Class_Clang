/*****************************************
* 파일이름 : Cast.c
* 파일용도 : 형변환 연산을 설명하기 위함
* 작성자 : 김명진
*****************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	double x = 1.2;
	double y = 1.9;

	int iResult1 = x + y;
	int iResult2 = (int)x + y;

	double dResult1 = x + y;
	double dResult2 = (int)x + y;
	double dResult3 = (int)(x + y);

	printf("%d\n", iResult1);
	printf("%d\n", iResult2);
	printf("%f\n", dResult1);
	printf("%f\n", dResult2);
	printf("%f\n", dResult3);
} // main() 함수 종료