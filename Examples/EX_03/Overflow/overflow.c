/**************************************************
◆ 파일 이름 : overflow.c
◆ 작성자    : 김명진
◆ 용도      : 자료형의 오버플로우를 설명하기 위함
**************************************************/
#include <stdio.h>
#include <limits.h> // 자료형의 최대값과 최소값이 정의된 헤더 파일
#include <math.h>   //pow() 함수를 이용하기 위한 헤더 파일 포함

int main(void) // main() 함수 시작 
{
	  int iMax = INT_MAX;  // int의 최대값
	  int iMin = INT_MIN;  // int의 최소값 
      int max = (int)pow(2.0, 31.0) - 1;
      int min = (int)-pow(2.0, 31.0);
      int maxPlusOne = max + 1;
      int minMinusOne = min - 1;

      printf("max (int) \t= %d, %d \n", max, iMax);
      printf("max (int) + 1 \t= %d \n", maxPlusOne);
	  printf("------------------------------------------\n");
      printf("min (int) \t= %d, %d \n", min, iMin);
      printf("min (int) - 1 \t= %d \n", minMinusOne);
      return 0;
} // main() 함수 종료
/*-----------------------------------------
자료형				최소값		최대값
-------------------------------------------
char				CHAR_MIN	CHAR_MAX
short				SHRT_MIN	SHRT_MAX
int					INT_MIN		INT_MAX
long				LONG_MIN	LONG_MAX
long long			LLONG_MIN	LLONG_MAX
unsigned char		0		UCHAR_MAX
unsigned short		0		USHRT_MAX
unsigned int		0		UINT_MAX
unsigned long		0		ULONG_MAX
unsigned long long	0		ULLONG_MAX
-----------------------------------------*/