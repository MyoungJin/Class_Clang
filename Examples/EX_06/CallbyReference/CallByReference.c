/******************************************
 * �����̸� : CallbyReference.c
 * ���Ͽ뵵 : Call by Value�� ���� �Լ� ����
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>
void swap(int *, int *); /* �Լ��� ���� ���� */

int main(void)
{
	int a, b;
	a = 10;
	b = 20;

	/* swap() ȣ�� �� a, b �� */
	printf("1. before swap() : a=%d, b=%d\n", a, b); 

	swap(&a, &b); /* ������ a, b�� �� ���� */
	
	/* swap() ȣ�� �� a, b �� */
	printf("3. after swap() : a=%d, b=%d\n", a, b); 

	return 0;
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a; /* �������� a�� b�� ���� ��ȯ */
	*a = *b;
	*b = temp;

	printf("2. in swap() : a=%d, b=%d\n", *a, *b);
}