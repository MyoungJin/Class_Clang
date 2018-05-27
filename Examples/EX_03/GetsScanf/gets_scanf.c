/*****************************************************
◆ 파일 이름 : gets_scanf.c
◆ 작성자    : 김명진
◆ 용도      : 문자열 입력함수 gets vs. scanf 비교설명
*****************************************************/
#include <stdio.h>

int main(void) // main() 함수 시작 
{
      char string[50];

      printf("문자열 입력? ");
	  gets_s(string, sizeof(string));
      printf("gets()로 문자열 입력 = %s\n", string);

      printf("\n문자열 입력? ");
	  scanf_s("%s", string, sizeof(string));
      printf("scanf()로 문자열 입력 = %s\n", string);

      return 0;
} // main() 함수 종료
