/******************************************************
◆ 파일 이름 : printfescape.c
◆ 작성자    : 김명진
◆ 용도      : printf()의 escape 문자를 설명하기 위함
*****************************************************/
#include <stdio.h>

int main(void) // main() 함수 시작 
{
      printf("\"%s\"\n", "대한민국");
      printf("\t \'C'  언어%c \n", '!');
      printf("\a\a\a\a\a \\");

      return 0;
} // main() 함수 종료
