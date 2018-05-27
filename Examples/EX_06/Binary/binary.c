/******************************************
 * �����̸� : Binary.c
 * ���Ͽ뵵 : �Լ� ���� (�������� ���ϴ� ����Լ�)
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>
void binary(int number); //�Լ� ����

void main(void)
{
	int decimal;

	printf("0�� �Է��ϸ� ���α׷��� �����մϴ�.\n");
	printf("���� ������ �ϳ� �Է��ϼ���. >> ");
	while ( (scanf_s("%d", &decimal) && decimal > 0) )
	{
		printf("���� ���� %7d�� �������� >> ", decimal);
		binary(decimal); //����Լ� ȣ��
		printf("\n\n���� ������ �ϳ� �Է��ϼ���. >> ");
	}
}

//�������� ���ϴ� ��� �Լ�
void binary(int number)
{
	int bin;

	if(number > 0) {
		bin = number % 2;
		number /= 2;
		binary(number);
		printf("%d", bin);
	}
	return;
}