/***********************************************
�� ���� �̸� : literals.c
�� �ۼ���    : �����
�� �뵵      : ����� �����ϱ� ����
***********************************************/
#include <stdio.h>

// main() �Լ� ���� 
int main(void)
{
	int jungsu = 17;
	printf("int  jungsu =   17;  ������ ���� ���� %d �Դϴ�.\n", jungsu);

	jungsu = 017;
	printf("     jungsu =  017;  ������ ���� ���� %d �Դϴ�.\n", jungsu);

	jungsu = 0x17;
	printf("     jungsu = 0x17;  ������ ���� ���� %d �Դϴ�.\n", jungsu);

	return 0;
}
// main() �Լ� ����