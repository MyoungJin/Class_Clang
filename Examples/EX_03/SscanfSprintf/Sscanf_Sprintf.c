/******************************************************
�� ���� �̸� : scanf_sprintf.c
�� �ۼ���    : �����
�� �뵵      : �����Ҹ� Ȱ���� �������� �����
******************************************************/
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
	int x, y;
	char data_in[20] = "50, 123";
	char data_out[20];

	sscanf(data_in, "%d%*c%d", &x, &y);
	sprintf(data_out, "�Է��� x=%d, y=%d\n", x, y);
	puts(data_out);
	return 0;
} // main() �Լ� ����
