/***********************************************
�� ���� �̸� : scanf3.c
�� �ۼ���    : �����
�� �뵵      : �ڷ� �Է��Լ� scanf ����
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
	char zip[20], addr[50];

	printf("�����ȣ �� �ּ� �Է� : ");
	scanf_s("%[0123456789-]%*c%[^\n]", zip, sizeof(zip), addr, sizeof(addr));
	printf("�����ȣ : %s\n�ּ� : %s\n", zip, addr);

	return 0;
} // main() �Լ� ����
