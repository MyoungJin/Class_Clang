/******************************************************
◆ 파일 이름 : puts_printf.c
◆ 작성자    : 김명진
◆ 용도      : 문자열 출력함수 puts vs. printf 비교설명
******************************************************/
#include <stdio.h>

int main(void) // main() 함수 시작 
{
      char s1[] = "Computer";
      char s2[] = "Science";

      puts(s1);
      puts(s2);
      printf("%s", s1);
      printf("%s", s2);
	  printf("\n");
      return 0;
} // main() 함수 종료
