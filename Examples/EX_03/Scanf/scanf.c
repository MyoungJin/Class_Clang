/***********************************************
�� ���� �̸� : scanf.c
�� �ۼ���    : �����
�� �뵵      : �ڷ� �Է��Լ� scanf�� �����ϱ�
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
      int n1, n2;
	  float f; double d;

	  printf("���� 2���� �Է�: ");
      scanf_s("%d %d", &n1, &n2); //�������� �Է� ������ ����
      printf("--> �Է��� ���� 2���� %d, %d�Դϴ�.\n", n1, n2);

	  rewind(stdin); //fflush(stdin);
	  printf("���� 2���� �Է�: ");
	  scanf_s("%i,%i", &n1, &n2); //�޸�(,)�� �Է� ������ ����
	  printf("--> �Է��� ���� 2���� %d, %d�Դϴ�.\n", n1, n2);

	  rewind(stdin); //fflush(stdin);
	  printf("float, double ���� �Է�: ");
	  scanf_s("%f,%lf", &f, &d); //�޸�(,)�� �Է� ������ ����
	  printf("--> �Է��� �Ǽ� ���� %20.18f, %20.18lf\n", f, d);

      return 0;
} // main() �Լ� ����
