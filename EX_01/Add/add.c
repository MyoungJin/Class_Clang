/* ���� : add.c */
#include <stdio.h> //printf()�� �̿��� ���� ��� ���� ����
#define LIMIT 10

/************* main() �Լ� ���� ********************/
int  main(void)
{
	int  sum = 0;
	int  i = 0;

	for (i = 1; i <= LIMIT; i++) {
		sum += i;
	}
	printf("1���� %d������ ���� %d �Դϴ�.\n", LIMIT, sum);
	return 0;
}
/************* main() �Լ� ���� ********************/