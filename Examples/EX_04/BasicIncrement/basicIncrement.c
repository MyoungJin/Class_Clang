/**************************************
 * �����̸� : basicIncrement.c
 * ���Ͽ뵵 : ���������ڸ� �����ϱ� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
      int a = 10, b = 20, c = 30;

	  //���� ���� ����� �������� ������ �����?
	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> a + b++ �� ��� = %5d\n\n", a + b++);

	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> a + ++b %% 3 �� ��� = %5d\n\n", a + ++b % 3);

	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> ++a / 2 + c++ �� ��� = %5d\n\n", ++a / 2 + c++);

	  printf("a = %d, b = %d, c = %d\n", a, b, c);
	  printf("==> a++ + ++b + ++c �� ��� = %5d\n\n", a++ + ++b + ++c);
	  printf("a = %d, b = %d, c = %d\n", a, b, c);
} // main() �Լ� ����
