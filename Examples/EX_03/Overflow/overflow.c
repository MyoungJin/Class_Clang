/**************************************************
�� ���� �̸� : overflow.c
�� �ۼ���    : �����
�� �뵵      : �ڷ����� �����÷ο츦 �����ϱ� ����
**************************************************/
#include <stdio.h>
#include <limits.h> // �ڷ����� �ִ밪�� �ּҰ��� ���ǵ� ��� ����
#include <math.h>   //pow() �Լ��� �̿��ϱ� ���� ��� ���� ����

int main(void) // main() �Լ� ���� 
{
	  int iMax = INT_MAX;  // int�� �ִ밪
	  int iMin = INT_MIN;  // int�� �ּҰ� 
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
} // main() �Լ� ����
/*-----------------------------------------
�ڷ���				�ּҰ�		�ִ밪
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