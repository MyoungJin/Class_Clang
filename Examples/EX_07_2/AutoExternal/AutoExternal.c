/**************************************
 * �����̸� : AutoExternal.c
 * ���Ͽ뵵 : ���� �� ��������, �ܺ� ���� �ǽ�
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void increment(int);

int gIndex = 11;
int count = 51;

void main(void)
{
	extern int gIndex; //�ܺ� ��������

	auto int index = 15; //�ڵ� ��������
	int count = 55;      //��������

	printf("���� �Լ����� increment �Լ� ȣ�� ��\n");
	printf("(����)gIndex = %2d, (�ڵ�����)index = %2d, "
		"(����)count = %2d\n\n", gIndex, index, count);

	increment(index);

	printf("���� �Լ����� increment �Լ� ȣ�� ��\n");
	printf("(����)gIndex = %2d, (�ڵ�����)index = %2d, "
		"(����)count = %2d\n\n", gIndex, index, count);
}

void increment(int i)
{
	i++;
	gIndex++;
	count++;
	printf("increment �Լ�  ������\n");
	printf("(����)gIndex = %2d, (����)i = %2d, "
		"(����)count = %2d\n\n", gIndex, i, count);
}