/******************************************************
�� ���� �̸� : puts_printf.c
�� �ۼ���    : �����
�� �뵵      : ���ڿ� ����Լ� puts vs. printf �񱳼���
******************************************************/
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
      char s1[] = "Computer";
      char s2[] = "Science";

      puts(s1);
      puts(s2);
      printf("%s", s1);
      printf("%s", s2);
	  printf("\n");
      return 0;
} // main() �Լ� ����
