/*****************************************
* �����̸� : Cast.c
* ���Ͽ뵵 : ����ȯ ������ �����ϱ� ����
* �ۼ��� : �����
*****************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	double x = 1.2;
	double y = 1.9;

	int iResult1 = x + y;
	int iResult2 = (int)x + y;

	double dResult1 = x + y;
	double dResult2 = (int)x + y;
	double dResult3 = (int)(x + y);

	printf("%d\n", iResult1);
	printf("%d\n", iResult2);
	printf("%f\n", dResult1);
	printf("%f\n", dResult2);
	printf("%f\n", dResult3);
} // main() �Լ� ����