/******************************************
 * �����̸� : String.c
 * ���Ͽ뵵 : �迭�� �̿��� ���ڿ� ó��
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

void main(void)
{
	int i, j;

	//���ڿ� ó��
	char lang[]	 = "C Language!";
	char abc[]   = {'A', 'B', 'C', '\0'};
	char java[5] = "java";

	printf(lang);	printf("\n");
	printf(abc);	printf("\n");

	printf("%s %s\n", lang, abc);

	//����� �迭 ���� ���
	for(i=0; java[i]; i++)
		printf("%c", java[i]);

	printf("\n\n");

	printf("char lang[] = \"C Language!\"; ����\n");
	printf("lang[6] = '\\0'; �� ������ ��\n");
	printf("���ڿ� lang�� ����ϸ� >> ");

	lang[6] = '\0';
	printf("%s\n", lang);
}