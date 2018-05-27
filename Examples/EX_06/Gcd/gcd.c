/******************************************
 * �����̸� : Gcd.c
 * ���Ͽ뵵 : �Լ� ���� (�ִ������� ���ϴ� ����Լ�)
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

int gcd(int max, int min); //�Լ� ����

void main(void)
{
	int m, n, rst;

	printf("�� ���� ������ �Է��ϼ���. >> ");
	scanf_s("%d%d", &m, &n);

	rst = gcd( (m>n ? m : n), (m>n ? n : m) );
	printf("�� ��(%d, %d)�� �ִ�����(gcd)�� %d�̴�.\n", m, n, rst);
}

//�ִ������� ���ϴ� ��� �Լ�
int gcd(int max, int min)
{
	if(min == 0) return max;
	else return gcd(min, max % min);
}