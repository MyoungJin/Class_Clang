/************************************************
�� ���� �̸� : floatsize.c
�� �ۼ���    : �����
�� �뵵      : �ε� �Ҽ�����  �����ϱ� ����
***********************************************/
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
      float  f = 4.12345678901234567890F;
      double d = 4.12345678901234567890;
      long double ld = 41.2345678901234567890e-1L;

      //������ ��������� ũ�� ���
      printf("      float : %20.18f\n", f);
	  printf("     double : %20.18f\n", d);
	  printf("     double : %20.18lf\n", d);
	  printf("long double : %20.18Lf\n", ld);
	  printf("long double : %Le\n", ld);
      return 0;
} // main() �Լ� ����