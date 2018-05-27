/******************************************
 * �����̸� : Factorial.c
 * ���Ͽ뵵 : �Լ� ���� (����Լ�)
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

long factorial(int); //�Լ� ����

void main(void)
{
	int i;

	for(i = 1; i <= 10; i++)
		printf("%2d! = %ld\n", i, factorial(i) );
}

//n! ���ϴ� ����Լ�
long factorial(int number)
{
	if(number <= 1) return 1;
	else return (number * factorial(number -1) );
}