/************************************
 * �����̸� : CalcArithmetic.c
 * ���Ͽ뵵 : ��� ���깮�� �����ϱ� ����
 * �ۼ��� : �����
 ***********************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
      int x, y;
      int add, sub, multi, div, mod;

	  printf("���� 1�� �Է��ϼ��� : "); scanf_s("%d", &x);
	  printf("���� 2�� �Է��ϼ��� : "); scanf_s("%d", &y);

	  //��Ģ����� ������ ������ ���غ��ϴ�.
	  add = x + y;		sub = x - y;
	  multi = x * y;	div = x / y;
	  mod = x % y;

	  //��Ģ����� ������ ������ ����մϴ�.
	  printf("%d + %d�� %d�Դϴ�.\n", x, y, add);
	  printf("%d - %d�� %d�Դϴ�.\n", x, y, sub);
	  printf("%d * %d�� %d�Դϴ�.\n", x, y, multi);
	  printf("%d / %d�� %d�Դϴ�.\n", x, y, div);
	  printf("%d %% %d�� %d�Դϴ�.\n", x, y, mod);
} // main() �Լ� ����
