/**************************************
 * 파일이름 : basicIncrement.c
 * 파일용도 : 증감연산자를 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
      int a = 10, b = 20, c = 30;

	  //위와 같이 저장된 변수에서 다음의 출력은?
	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> a + b++ 의 결과 = %5d\n\n", a + b++);

	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> a + ++b %% 3 의 결과 = %5d\n\n", a + ++b % 3);

	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> ++a / 2 + c++ 의 결과 = %5d\n\n", ++a / 2 + c++);

	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> a++ + ++b + ++c 의 결과 = %5d\n\n", a++ + ++b + ++c);
	  printf("a = %d, b = %d, c = %d\n", a, b, c);
} // main() 함수 종료
