/*******************************************************
◆ 파일 이름 : wchar_t.c
◆ 작성자    : 김명진
◆ 용도      : 확장된 문자형 자료를 설명하기 위함
*******************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // _countof() 매크로 사용
#include <wchar.h>  // wchar_t 타입 사용

int main()
{
	wchar_t wstr1[30] = L"Hello, world!";
	wchar_t wstr2[30];

	
	//wchar_t 문자열 처리 함수는 str 대신에 wcs로 시작
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

	ptr = wcstok_s(wstr3, L" ", &next); // next에는 다음번에 자를 문자열의 포인터가 들어감
	while (ptr != NULL) {
		wprintf_s(L"%s\n", ptr);
		ptr = wcstok_s(NULL, L" ", &next);
	}

	return 0;
}

/* 문자열 처리 함수 일부--------------------------------------------
strchr() : 문자열에서 특정 문자가 가장 먼저 나타나는 곳의 위치 반환
strrchr(): 문자열에서 특정 문자가 가장 마지막에 나타나는 곳의 위치 반환
strstr() : 문자열에서 특정 문자열이 가장 먼저 나타나는 곳의 위치 반환
strtok() : 문자열에서 특정 문자를 기준으로 문자열을 자른다
wcscmp() : 문자열 비교, wstr1 == wstr2 이면 0 반환
           wstr1 > wstr2 이면 양수, wstr2 > wstr1 이면 음수 반환
*/