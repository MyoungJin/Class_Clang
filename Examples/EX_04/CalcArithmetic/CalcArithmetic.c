/************************************
 * 파일이름 : CalcArithmetic.c
 * 파일용도 : 산술 연산문을 설명하기 위함
 * 작성자 : 김명진
 ***********************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
      int x, y;
      int add, sub, multi, div, mod;

	  printf("정수 1을 입력하세요 : "); scanf_s("%d", &x);
	  printf("정수 2를 입력하세요 : "); scanf_s("%d", &y);

	  //사칙연산과 나머지 연산을 구해봅니다.
	  add = x + y;		sub = x - y;
	  multi = x * y;	div = x / y;
	  mod = x % y;

	  //사칙연산과 나머지 연산을 출력합니다.
	  printf("%d + %d는 %d입니다.\n", x, y, add);
	  printf("%d - %d는 %d입니다.\n", x, y, sub);
	  printf("%d * %d는 %d입니다.\n", x, y, multi);
	  printf("%d / %d는 %d입니다.\n", x, y, div);
	  printf("%d %% %d는 %d입니다.\n", x, y, mod);
} // main() 함수 종료
