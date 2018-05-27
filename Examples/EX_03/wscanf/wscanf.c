/*****************************************************
�� ���� �̸� : wscanf.c
�� �ۼ���    : �����
�� �뵵      : ������ ��ȭ�� ���ڿ� ����� Ȯ�� ���� ���
*****************************************************/
#include <stdio.h>
#include <stdlib.h> // _countof() ��ũ�� ���
#include <wchar.h>  // wchar_t Ÿ�� ���

int main()
{
	int num; char str1[20];

	printf("���� �� ���ڿ� �Է�: ");
	scanf_s("%d %s", &num, str1, (unsigned)sizeof(str1)); rewind(stdin);
	printf("%d %s\n", num, str1);

	//wchar_t�� ���̵� ����(wide character)�� �����ϱ� ���� �ڷ���
	//wchar_t ���ڿ��� w�� ���� �Լ��� ����ؾ� ��
	wchar_t wstr1[20];

	printf("\n���̵� ���ڿ� �Է�: ");
	wscanf_s(L"%s", wstr1, (unsigned)_countof(wstr1));
	wprintf(L"%d %s\n", num, wstr1);
	return 0;
}