/******************************************
* �����̸� : goto2.c
* ���Ͽ뵵 : goto �� ���α׷� ����
* �ۼ��� : �����
******************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			if (i == 5 && j == 5) goto LabelExit;
LabelExit:
	printf("goto ���� ����Ͽ� �� ���� Ż�� !\n");
	printf("���� Ż������ i=%d, j=%d\n", i, j);

	return 0;
} // main() �Լ� ����