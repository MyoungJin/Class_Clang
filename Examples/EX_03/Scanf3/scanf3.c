/***********************************************
�� ���� �̸� : scanf3.c
�� �ۼ���    : �����
�� �뵵      : �ڷ� �Է��Լ� scanf ����
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
	int year, num1, num2, num3;

	printf("�Է�: ");
	scanf_s("%*d %d", &num1);
	printf("=> num1=%d \n\n", num1);

	num1 = 1; num2 = 2; num3 = 3;
	printf("�Է�: ");
	scanf_s("%d %*d %d", &num1, &num2, &num3);
	printf("=> num1=%d, num2=%d, num3=%d \n\n", num1, num2, num3);

	printf("�Է�: ");
	scanf_s("%d %*s %d", &num1, &num2);
	printf("=> num1=%d, num2=%d \n\n", num1, num2);

	printf("�Է�: ");
	scanf_s("%*s %i", &year);
	printf("=> year=%d \n\n", year);

	return 0;
} // main() �Լ� ����
