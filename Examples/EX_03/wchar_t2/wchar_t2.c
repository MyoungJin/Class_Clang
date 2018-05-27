/*******************************************************
◆ 파일 이름 : wchar_t.c
◆ 작성자    : 김명진
◆ 용도      : 확장된 문자형 자료를 설명하기 위함
*******************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <wchar.h>

int main()
{
	wchar_t wstr1[20];
	wscanf(L"%s", wstr1);	rewind(stdin);
	wprintf(L"%s\n", wstr1);

	// 두 번째 인수에는 wchar_t 문자열의 문자 개수를 구해서 넣어줌
	swprintf(wstr1, _countof(wstr1), L"%s", L"Hello, world!");
	swprintf(wstr1, sizeof(wstr1) / sizeof(wchar_t), L"%s", L"Hello, world!");

	FILE *fp = _wfopen(L"hello.txt", L"w+");
	// _wfopen 함수는 표준이 아니므로 리눅스에서는 사용할 수 없음
	// 리눅스에서는 fopen 함수 사용
	// FILE *fp = fopen("hello.txt", "w+");

	// 리눅스에서는 %s 대신 %S 사용
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