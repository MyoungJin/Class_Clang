/*****************************************
 * �����̸� : Sizeof.c
 * ���Ͽ뵵 : sizeof ������ �����ϱ� ����
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int iVal = 10;
	long gVal = 256L;
	float fVal = 3.14F;
	double dVal =14.56E5;
	char cVal = 'a';

	printf("int �� ���� iVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof iVal);
	printf("long �� ���� gVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof gVal);
	printf("float �� ���� fVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (fVal) );
	printf("double �� ���� dVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (dVal) );
	printf("char �� ���� cVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (cVal) );

	printf("int ���� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (int) );
	printf("long ���� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (long) );
	printf("float ���� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (float) );
	printf("double ���� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (double) );
	printf("char ���� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (char) );
} // main() �Լ� ����