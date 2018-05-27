/***********************************************
◆ 파일 이름 : scanf.c
◆ 작성자    : 김명진
◆ 용도      : 자료 입력함수 scanf를 설명하기
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() 함수 시작 
{
      int n1, n2;
	  float f; double d;

	  printf("숫자 2개를 입력: ");
      scanf_s("%d %d", &n1, &n2); //공백으로 입력 데이터 구분
      printf("--> 입력한 숫자 2개는 %d, %d입니다.\n", n1, n2);

	  rewind(stdin); //fflush(stdin);
	  printf("숫자 2개를 입력: ");
	  scanf_s("%i,%i", &n1, &n2); //콤마(,)로 입력 데이터 구분
	  printf("--> 입력한 숫자 2개는 %d, %d입니다.\n", n1, n2);

	  rewind(stdin); //fflush(stdin);
	  printf("float, double 값을 입력: ");
	  scanf_s("%f,%lf", &f, &d); //콤마(,)로 입력 데이터 구분
	  printf("--> 입력한 실수 값은 %20.18f, %20.18lf\n", f, d);

      return 0;
} // main() 함수 종료
