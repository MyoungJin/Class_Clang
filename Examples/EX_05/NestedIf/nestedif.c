/**************************************
 * �����̸� : nestedif.c
 * ���Ͽ뵵 : ��ø if���� �����ϱ� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int num1 = 0, num2 = 0;

	printf("���� �� ���� �������� �����Ͽ� �Է�: ");
	scanf_s("%d %d", &num1, &num2);

	if(num1) //if�� �ϳ�
		if(num2) printf("�� �� %d�� %d��(��) ��� 0�� �ƴմϴ�.\n", num1, num2);
		else     printf("%d��(��) 0�� �ƴϰ�, %d�� 0�Դϴ�.\n", num1, num2);

	if(num1) { //if�� ��
		if(num2) printf("�� �� %d�� %d��(��) ��� 0�� �ƴմϴ�.\n", num1, num2);
	} else
		printf("%d��(��) 0�Դϴ�.\n", num1);

	if(num1) { //if�� ��
		if(num2)
			printf("�� �� %d�� %d��(��) ��� 0�� �ƴմϴ�.\n", num1, num2);
		else
			printf("%d��(��) 0�� �ƴϰ�, %d�� 0�Դϴ�.\n", num1, num2);
	} else {
		if(num2)
			printf("%d��(��) 0�̰�, %d��(��) 0�� �ƴմϴ�.\n", num1, num2);
		else
			printf("�� �� %d�� %d��(��) ��� 0�Դϴ�.\n", num1, num2);
	}
} // main() �Լ� ����