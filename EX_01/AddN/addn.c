/* ���� : addn.c */
#include <stdio.h> //printf()�� �̿��� ���� ��� ���� ����

/************* main() �Լ� ���� ********************/
int  main(void)
{
	int  sum = 0;
	int  i, n;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum);
	return 0;
}
/************* main() �Լ� ���� ********************/