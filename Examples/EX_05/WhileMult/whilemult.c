/******************************************
 * �����̸� : whilemult.c
 * ���Ͽ뵵 : while�� ���� ����(for���� ��)
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>
#define LIMIT 10

void main(void) // main() �Լ� ���� 
{
	int mult, i;

	mult = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;
	printf("�ݺ����� �̿����� �ʰ� : \n");
	printf("1���� 10������ ���� %d �Դϴ�.\n\n", mult);

	mult = 1;
	for(i = 1; i <= LIMIT; i++) mult *= i;
	printf("�ݺ���(for): 1���� 10������ ���� %d\n", mult);

	i = 1; mult = 1;
	while (i <= LIMIT){
		mult *= i;
		i++;
	}
	printf("�ݺ���(while): 1���� %d������ ���� %d\n", LIMIT, mult);
} // main() �Լ� ����