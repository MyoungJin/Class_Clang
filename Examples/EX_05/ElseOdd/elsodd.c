/**************************************
 * �����̸� : elseodd.c
 * ���Ͽ뵵 : if~else ���� �����ϱ� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int number = 0;

	printf("���� ���� �ϳ��� �Է��ϼ���. > ");
	scanf_s("%d", &number);
	printf("---> �Է��� �� %d ��(��) ", number);

	if(number % 2 == 0) {
		printf("¦�� �Դϴ�.\n");
	}
	else {
		printf("Ȧ�� �Դϴ�.\n");
	}
} // main() �Լ� ����