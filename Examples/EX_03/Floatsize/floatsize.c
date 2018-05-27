/************************************************
◆ 파일 이름 : floatsize.c
◆ 작성자    : 김명진
◆ 용도      : 부동 소수점을  설명하기 위함
***********************************************/
#include <stdio.h>

int main(void) // main() 함수 시작 
{
      float  f = 4.12345678901234567890F;
      double d = 4.12345678901234567890;
      long double ld = 41.2345678901234567890e-1L;

      //변수의 저장공간의 크기 출력
      printf("      float : %20.18f\n", f);
	  printf("     double : %20.18f\n", d);
	  printf("     double : %20.18lf\n", d);
	  printf("long double : %20.18Lf\n", ld);
	  printf("long double : %Le\n", ld);
      return 0;
} // main() 함수 종료