/**************************************
 * �����̸� : dowhilereverse.c
 * ���Ͽ뵵 : do ~ while�� ���� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int value, r_digit;

	printf("�ݴ�� ����� ������ �Է�: ");
	scanf_s("%d", &value);
	printf("\n�Է��� ������ �ݴ�� ����ϸ� >>> ");

	do {
		r_digit = value %10;
		printf("%d", r_digit);
		value = value / 10;
	} while( value != 0);
	printf("\n");
} // main() �Լ� ����