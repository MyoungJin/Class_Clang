/*************************************************
�� ���� �̸� : char.c
�� �ۼ���    : �����
�� �뵵      : ������ �ٸ� ǥ���� �����ϱ� ����
*************************************************/
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
      int alarm = '\a';
      int quote = '\042';     //ū ����ǥ(34)
      int uppercase = '\101'; //�빮�� A(65)
	  //wchar_t	uni1[] = L"\U000000c0";
	  //wchar_t	uni2[] = L"\u00c0";
      
	  printf("�˶�(�Ҹ� ������) ��� --> %c \n", alarm);
      printf("ū ����ǥ \" ��� --> %c \n", quote);
      printf("�빮�� A   ��� --> %c \n", uppercase);
      printf("�빮�� A+2 ��� --> %c \n", uppercase+2);
	  printf("������ ���� ��� --> ??=??(??)??-\n");
      return 0;
} // main() �Լ� ����