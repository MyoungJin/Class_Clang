/**************************************
 * �����̸� : LocalGlobal.c
 * ���Ͽ뵵 : �������� �� �������� �ǽ�
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>
int gVar = 100;

void main(void)
{
	int count = 10;

	count += gVar;
	printf("count = %5d, gVar = %5d\n", count, gVar);

	{
		int count = 100; //��������
		count += gVar++;

		printf("count = %5d, gVar = %5d\n", count, gVar);
	}

	printf("count = %5d, gVar = %5d\n", count, gVar);
}