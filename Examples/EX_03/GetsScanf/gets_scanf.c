/*****************************************************
�� ���� �̸� : gets_scanf.c
�� �ۼ���    : �����
�� �뵵      : ���ڿ� �Է��Լ� gets vs. scanf �񱳼���
*****************************************************/
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
      char string[50];

      printf("���ڿ� �Է�? ");
	  gets_s(string, sizeof(string));
      printf("gets()�� ���ڿ� �Է� = %s\n", string);

      printf("\n���ڿ� �Է�? ");
	  scanf_s("%s", string, sizeof(string));
      printf("scanf()�� ���ڿ� �Է� = %s\n", string);

      return 0;
} // main() �Լ� ����
