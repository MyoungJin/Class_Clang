/******************************************
 * �����̸� : primenumber.c
 * ���Ͽ뵵 : �ݺ��� ���α׷� ����
 * �ۼ��� : �����
 ******************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int number, divisor, limit, count = 0;
	printf("2���� n(�Է�)������ �Ҽ��� ������.\n");
	printf("���� �� ���� n(2���� Ŀ����)�� �Է�: ");
	scanf_s("%d", &limit);
	printf("\n2���� %d������ �Ҽ��� ======== \n", limit);

	for(number = 2; number <= limit; number++) {
		for(divisor = 2; number % divisor; divisor++) ;
		if(divisor == number) {
			printf("%5d%c", number, (++count % 5 ? ' ' : '\n'));
		}
	}
	printf("\n");
} // main() �Լ� ����