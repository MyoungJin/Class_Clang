/******************************************
* �����̸� : goto1.c
* ���Ͽ뵵 : goto �� ���α׷� ����
* �ۼ��� : �����
******************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int count = 0;

	while (1) {
		if (count++ == 30) goto LabelExit;
		else printf("%3d%c", count, (count % 5) ? ' ' : '\n');
	}
LabelExit:
	printf("���α׷� �����մϴ� !\n");
	return 0;
} // main() �Լ� ����