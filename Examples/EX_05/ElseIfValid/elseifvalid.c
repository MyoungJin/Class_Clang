/**************************************
 * �����̸� : elseifvalid.c
 * ���Ͽ뵵 : ��ø if���� ������ ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int number = 0, valid = 0;

	printf("1�� 45������ ���� �Է�: "); scanf_s("%d", &number);

	if(number < 1) {
		printf("�Է��� ���� 1���� �۽��ϴ�.\n");
		valid = 0;
	} else if(number > 45) {
		printf("�Է��� ���� 45���� Ů�ϴ�.\n");
		valid = 0;
	} else
		valid = 1;

	if (valid == 1) {
		printf("�Է��� �� %d�� ���� ���� ���Դϴ�.\n", number);
	} else {
		printf("�Է��� �� %d�� ���� ���� ���� �ƴմϴ�.\n", number);
	}
} // main() �Լ� ����