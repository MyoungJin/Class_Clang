/*****************************************************
◆ 파일 이름 : wscanf.c
◆ 작성자    : 김명진
◆ 용도      : 보안이 강화된 문자열 입출력 확장 버전 사용
*****************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // _countof() 매크로 사용
#include <wchar.h>  // wchar_t 타입 사용

int main()
{
	int num; char str1[20]; wchar_t wstr1[20];
	printf("와이드 문자열 입력: ");
	wscanf_s(L"%s", wstr1, _countof(wstr1)); wprintf(L"%s\n", wstr1);

	sprintf_s(str1, _countof(str1), "%s", "Hello, world!");
	printf("%s\n", str1);

	swprintf_s(wstr1, _countof(wstr1), L"%s", L"Wide: Hello, world!");
	wprintf(L"%s\n", wstr1);

	strcat_s(str1, _countof(str1), "123");     printf("%s\n", str1);
	wcscat_s(wstr1, _countof(wstr1), L"123"); wprintf(L"%s\n", wstr1);
	//------------------------------------------------------------------------
	char str2[20];
	wchar_t wstr2[20]; //wchar_t 문자열 처리 함수는 str 대신에 wcs로 시작

	strcpy_s(str2, _countof(str2), str1);  printf("%s\n", str2);
	wcscpy_s(wstr2, _countof(wstr2), wstr1); wprintf(L"%s\n", wstr2);
	//------------------------------------------------------------------------
	char str3[20] = "The Little Prince";
	char *ptr1;
	char *next1;

	ptr1 = strtok_s(str3, " ", &next1); // next1에는 다음번에 자를 문자열의 포인터가 들어감
	while (ptr1 != NULL) {
		printf("%s\n", ptr1);
		ptr1 = strtok_s(NULL, " ", &next1);
	}
	//------------------------------------------------------------------------
	wchar_t wstr3[20] = L"The Little Prince";
	wchar_t *ptr2;
	wchar_t *next2;

	ptr2 = wcstok_s(wstr3, L" ", &next2); // next2에는 다음번에 자를 문자열의 포인터가 들어감
	while (ptr2 != NULL) {
		wprintf(L"%s\n", ptr2);
		ptr2 = wcstok_s(NULL, L" ", &next2);
	}

	return 0;
}