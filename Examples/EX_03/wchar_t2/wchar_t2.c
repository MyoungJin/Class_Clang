/*******************************************************
�� ���� �̸� : wchar_t.c
�� �ۼ���    : �����
�� �뵵      : Ȯ��� ������ �ڷḦ �����ϱ� ����
*******************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <wchar.h>

int main()
{
	wchar_t wstr1[20];
	wscanf(L"%s", wstr1);	rewind(stdin);
	wprintf(L"%s\n", wstr1);

	// �� ��° �μ����� wchar_t ���ڿ��� ���� ������ ���ؼ� �־���
	swprintf(wstr1, _countof(wstr1), L"%s", L"Hello, world!");
	swprintf(wstr1, sizeof(wstr1) / sizeof(wchar_t), L"%s", L"Hello, world!");

	FILE *fp = _wfopen(L"hello.txt", L"w+");
	// _wfopen �Լ��� ǥ���� �ƴϹǷ� ������������ ����� �� ����
	// ������������ fopen �Լ� ���
	// FILE *fp = fopen("hello.txt", "w+");

	// ������������ %s ��� %S ���
	wchar_t wstr2[20], wstr3[20];
	fwprintf(fp, L"%s", L"C Language");
	rewind(fp);
	fwscanf(fp, L"%s %s", wstr2, wstr3);
	wprintf(L"%s %s\n", wstr2, wstr3);

	rewind(fp);
	fputws(L"Wide Character", fp);
	rewind(fp);
	fgetws(wstr2, 20, fp);
	wprintf(L"%s\n", wstr2);

	rewind(fp);
	fputwc(L'X', fp);
	rewind(fp);
	wint_t wc1 = fgetwc(fp);
	putwchar(wc1);

	fclose(fp);

	return 0;
}