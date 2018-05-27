/*******************************************************
�� ���� �̸� : wchar_t.c
�� �ۼ���    : �����
�� �뵵      : Ȯ��� ������ �ڷḦ �����ϱ� ����
*******************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // _countof() ��ũ�� ���
#include <wchar.h>  // wchar_t Ÿ�� ���

int main()
{
	wchar_t wstr1[30] = L"Hello, world!";
	wchar_t wstr2[30];

	
	//wchar_t ���ڿ� ó�� �Լ��� str ��ſ� wcs�� ����
	wprintf_s(L"String length: %d\n", (unsigned)wcslen(wstr1));

	wcscat_s(wstr1, (unsigned)_countof(wstr1), L" Programming."); 
	wprintf_s(L"%s\n", wstr1);
	
	wcscpy_s(wstr2, (unsigned)_countof(wstr1), wstr1); 
	wprintf_s(L"%s\n", wstr2);

	wprintf_s(L"The Result of String Compare: %d\n", wcscmp(wstr1, wstr2));

	wchar_t *ptr, *next, wstr3[20] = L"Hello My World!";
	ptr = wcschr(wstr1, L'o'); 	 wprintf_s(L"%s\n", ptr); 
	ptr = wcsrchr(wstr1, L'l');  wprintf_s(L"%s\n", ptr); 
	ptr = wcsstr(wstr1, L"wor"); wprintf_s(L"%s\n", ptr); 

	ptr = wcstok_s(wstr3, L" ", &next); // next���� �������� �ڸ� ���ڿ��� �����Ͱ� ��
	while (ptr != NULL) {
		wprintf_s(L"%s\n", ptr);
		ptr = wcstok_s(NULL, L" ", &next);
	}

	return 0;
}

/* ���ڿ� ó�� �Լ� �Ϻ�--------------------------------------------
strchr() : ���ڿ����� Ư�� ���ڰ� ���� ���� ��Ÿ���� ���� ��ġ ��ȯ
strrchr(): ���ڿ����� Ư�� ���ڰ� ���� �������� ��Ÿ���� ���� ��ġ ��ȯ
strstr() : ���ڿ����� Ư�� ���ڿ��� ���� ���� ��Ÿ���� ���� ��ġ ��ȯ
strtok() : ���ڿ����� Ư�� ���ڸ� �������� ���ڿ��� �ڸ���
wcscmp() : ���ڿ� ��, wstr1 == wstr2 �̸� 0 ��ȯ
           wstr1 > wstr2 �̸� ���, wstr2 > wstr1 �̸� ���� ��ȯ
*/