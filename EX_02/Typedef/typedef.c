/***********************************************
�� ���� �̸� : typedef.c                        *
�� �ۼ���    : �����                           *
�� �뵵      : �ڷ� ������ ����                 *
***********************************************/
#include <stdio.h>

typedef int integer; //int���� integer������ ������

// main() �Լ� ���� 
int main(void)
{
	integer a = 10;
	int b = 20;

	printf("a -> %d, b -> %d\n", a, b);

	return 0;
}
// main() �Լ� ����