/******************************************
* �����̸� : ArrayInput.c
* ���Ͽ뵵 : �迭�� ������ �Է¹޴� ��� ����
* �ۼ��� : �����
*****************************************/
#include <stdio.h>

void main(void)
{
	int i, IntArr[5];

	printf(">>> �迭�� �Է��� ������ <<<\n");
	for (i = 0; i < 5; i++) {
		printf("%d��° ������ �Է�: ", i);
		scanf_s("%d", &IntArr[i]);
	}

	printf(">>> �Է��� ������ <<<\n");
	for (i = 0; i < 5; i++) printf("IntArray[%d] = %d\n", i, IntArr[i]);
}