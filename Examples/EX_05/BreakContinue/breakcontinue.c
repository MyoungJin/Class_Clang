/******************************************
 * �����̸� : breakcontinue.c
 * ���Ͽ뵵 : break, continue���� �����ϱ� ����
 * �ۼ��� : �����
 ******************************************/
// while������ 1 ~ 100������ ¦���� �ո��� ���ϰ�
// �� ���� 1000�� ���� �� while���� Ż���Ͻÿ�
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int iCount = 0, iSum = 0;

	while(iCount <= 100) {
		iCount++;
		if( iCount % 2 == 1 ) continue;
		iSum += iCount;
		if( iSum > 1000 ) break;
	} 
	printf("iCount�� ���� %d�� �� ���� 1000�� �Ѿ����ϴ�.\n", iCount);
} // main() �Լ� ����