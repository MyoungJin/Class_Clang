/**************************************
 * �����̸� : Register.c
 * ���Ͽ뵵 : �������� ���� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

#define LIMIT 100

void main(void)
{
	register int count = 1;
	int sum = 0;

	for(; count <= LIMIT; count++) 
		sum += count;

	printf("1���� %d������ ���� %d �Դϴ�.\n", LIMIT, sum);
}