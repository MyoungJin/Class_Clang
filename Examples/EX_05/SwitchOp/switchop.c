/**************************************
 * �����̸� : switchop.c
 * ���Ͽ뵵 : switch���� �����ϱ� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int invalid_operator = 0;
	char op;
	float number1, number2, result;

	printf("�����ڴ� �� ����(+, -, *, /)���� �ϳ����� �մϴ�.\n");
	printf("�� ���� ������ ���� ���·� �Է��ϼ���.\n");
	printf(">>> number1 ������ number2\n�Է�: ");
	scanf_s("%f %c %f", &number1, &op, 1, &number2);

	switch(op) {
		case '*' : result = number1 * number2; break;
		case '/' : result = number1 / number2; break;
		case '+' : result = number1 + number2; break;
		case '-' : result = number1 - number2; break;
		default  : invalid_operator = 1;
	}

	switch(invalid_operator) {
		case 1 : printf("�����ڰ� �߸� �ԷµǾ����ϴ�.\n"); break;
		default :
			printf("\n>>>>>>> ����� \n");
			printf("%5.2f %c %5.2f = %5.2f\n", number1, op, number2, result);
			break;
	}
} // main() �Լ� ����