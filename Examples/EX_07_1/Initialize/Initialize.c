/******************************************
 * �����̸� : Initialize.c
 * ���Ͽ뵵 : �迭 �ʱ�ȭ �� ����ϴ� ��� ����
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

void main(void)
{
	int i;
	int		IntArr[5] = {10, 20, 33, 35, 13};
	double	DblArr[4] = {1.2, 2.4};
	char	ChrArr[] = {'$', '&', '*'};

	//����� �迭 ���� ���
	printf("int IntArr[5] = {10, 20, 33, 35, 13} ���� ��� >>\n");
	for(i=0; i<5; i++)
		printf("%d%s", IntArr[i], (i==4) ? "\n\n" : ", ");

	printf("double DblArr[4] = {1.2, 2.4} ���� ��� >>\n");
	for(i=0; i<4; i++)
		printf("%lf%s", DblArr[i], (i==3) ? "\n\n" : ", ");

	printf("char ChrArr[] = {'$', '&', '*'} ���� ��� >>\n");
	for(i=0; i<3; i++)
		printf("%c%s", ChrArr[i], (i==2) ? "\n\n" : ", ");
}