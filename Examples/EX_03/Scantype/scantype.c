/**************************************************
�� ���� �̸� : scantype.c
�� �ۼ���    : �����
�� �뵵      : scanf�� �پ��� �Է� �����ϱ�
*************************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
	int height = 0, onum = 0, hnum = 0;
	float weight = 0;
	char blood = 0, name[20];

	printf("�̸� ? ");	scanf_s("%s", name, sizeof(name));	rewind(stdin);
	printf("������ ? ");	scanf_s("%c", &blood, 1);			rewind(stdin);
	printf("Ű ? ");		scanf_s("%d", &height);				rewind(stdin);
	printf("������(�Ҽ���)�� ? ");	scanf_s("%f", &weight); rewind(stdin);
	printf("8���� �ϳ� �Է� ? ");		scanf_s("%o", &onum);	rewind(stdin);
	printf("16���� �ϳ� �Է� ? ");	scanf_s("%x", &hnum);           
	printf("%s���� �������� %c��, Ű�� %dcm, �����Դ� %fKg\n", name, blood, height, weight);
	printf("�Է��� �������� %o, 16������ %x �Դϴ�.\n", onum, hnum);   

	return 0;
} // main() �Լ� ����
