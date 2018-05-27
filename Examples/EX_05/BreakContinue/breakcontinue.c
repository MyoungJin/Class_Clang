/******************************************
 * 파일이름 : breakcontinue.c
 * 파일용도 : break, continue문을 설명하기 위함
 * 작성자 : 김명진
 ******************************************/
// while문에서 1 ~ 100까지의 짝수의 합만을 구하고
// 그 합이 1000을 넘을 때 while문을 탈출하시오
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int iCount = 0, iSum = 0;

	while(iCount <= 100) {
		iCount++;
		if( iCount % 2 == 1 ) continue;
		iSum += iCount;
		if( iSum > 1000 ) break;
	} 
	printf("iCount의 값이 %d일 때 합이 1000을 넘었습니다.\n", iCount);
} // main() 함수 종료