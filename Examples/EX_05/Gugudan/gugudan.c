/*****************************************
 * �����̸� : gugudan.c
 * ���Ͽ뵵 : for�� ���� ����(�������� ���)
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int iDan, iKuku;

	for(iDan = 1; iDan <= 9; iDan++)
	{
		for(iKuku = 1; iKuku <=9; iKuku++)
		{
			printf("%2d * %2d = %2d%c",
				iDan, iKuku, iDan*iKuku, ((iKuku %3) == 0) ? '\n' : ',');
		}
		printf("\n");
	}
} // main() �Լ� ����