/***********************************************
�� ���� �̸� : scanf2.c
�� �ۼ���    : �����
�� �뵵      : �ڷ� �Է��Լ� scanf ����
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
	int year, month, day, num1, num2;
	char str[20];

	printf("�Է�: ");
	scanf_s("%d/%d/%d", &year, &month, &day); rewind(stdin);
	printf("=> year=%d, month=%d, day=%d \n\n", year, month, day);

	printf("�Է�: ");
	scanf_s("%i%%", &num1); rewind(stdin);
	printf("=> num1=%d \n\n", num1);

	printf("�Է�: ");
	scanf_s("%2i%2i", &num1, &num2); rewind(stdin);
	printf("=> num1=%d, num2=%d \n\n", num1, num2);

	printf("�Է�: ");
	scanf_s("%9s", str, sizeof(str));
	printf("=> str=%s \n\n", str);

	return 0;
} // main() �Լ� ����
