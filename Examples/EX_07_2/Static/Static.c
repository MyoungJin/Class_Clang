/**************************************
 * �����̸� : Static.c
 * ���Ͽ뵵 : ���� �������� �ǽ�
 * �ۼ��� : �����
 **************************************/

#include <stdio.h>

void increment(void);

void main(void)
{
	int count = 0; //��������
	for(;count < 5; count++) {
		increment(); //5�� �Լ� ȣ��
	}
}

void increment(void)
{
	static int sIndex=1; //���� ��������
	int aIndex=1;		 //��������
	printf("���� �������� sIndex=%2d, \t", sIndex++);
	printf("�ڵ� �������� aIndex=%2d\n", aIndex++);
}