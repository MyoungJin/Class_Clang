/**************************************
 * �����̸� : sumofmult.c
 * ���Ͽ뵵 : if~else ���� ������ ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int op = 0, num1 = 0, num2 = 0;

	printf("�� ������ ���ϱ⸦ ���ϸ� 1��\n");
	printf("�� ������ ���ϱ⸦ ���ϸ� 2�� �Է��ϼ���. : >");
	scanf_s("%d", &op);

	if(op == 1) printf("---> ���� ");
	else printf("---> ���� ");
	
	printf("�� ���� �Է�(���� ��) �ϼ���. : > ");
	scanf_s("%d%d", &num1, &num2);

	if(op == 1) {
		printf("�� ���� ��(%d + %d)�� ", num1, num2);
		printf("%d �Դϴ�.\n", num1 + num2);
	}
	else {
		printf("�� ���� ��(%d * %d)�� ", num1, num2);
		printf("%d �Դϴ�.\n", num1 * num2);
	}
} // main() �Լ� ����