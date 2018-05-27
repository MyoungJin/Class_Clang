/*************************************************
◆ 파일 이름 : char.c
◆ 작성자    : 김명진
◆ 용도      : 문자의 다른 표현을 설명하기 위함
*************************************************/
#include <stdio.h>

int main(void) // main() 함수 시작 
{
      int alarm = '\a';
      int quote = '\042';     //큰 따옴표(34)
      int uppercase = '\101'; //대문자 A(65)
	  //wchar_t	uni1[] = L"\U000000c0";
	  //wchar_t	uni2[] = L"\u00c0";
      
	  printf("알람(소리 나지요) 출력 --> %c \n", alarm);
      printf("큰 따옴표 \" 출력 --> %c \n", quote);
      printf("대문자 A   출력 --> %c \n", uppercase);
      printf("대문자 A+2 출력 --> %c \n", uppercase+2);
	  printf("삼중자 문자 출력 --> ??=??(??)??-\n");
      return 0;
} // main() 함수 종료