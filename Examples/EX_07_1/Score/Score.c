/******************************************
 * �����̸� : Score.c
 * ���Ͽ뵵 : �迭�� �̿��� ����(���� ���)
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>
int iGetMax(int Score, int Max);

void main(void)
{
	int i = 0, max = 0;

	//�迭�� ���� �Է�
	int score[10] = {10, 20, 33, 35, 13, 99, 77, 45, 67, 88};

	printf("���� 10���� �����Դϴ�.. >>\n");

	//���� ������ ���� ���� ���ϱ�
	for(i=0; i<10; i++) {
		max = iGetMax(score[i], max);
		printf("%d%s", score[i], (i==9) ? "\n\n" : ", ");
	}

	printf("�� 10���� ���� �߿��� ���� ���� ������ %d�Դϴ�.\n", max);
}

int iGetMax(int Score, int Max)
{
	return(Max < Score) ? Score : Max;
}