/*****************************************************
◆ 파일 이름 : wscanf.c
◆ 작성자    : 김명진
◆ 용도      : 보안이 강화된 문자열 입출력 확장 버전 사용
*****************************************************/
#include <stdio.h>
#include <stdlib.h> // _countof() 매크로 사용
#include <wchar.h>  // wchar_t 타입 사용

int main()
{
	int num; char str1[20];

	printf("정수 및 문자열 입력: ");
	scanf_s("%d %s", &num, str1, (unsigned)sizeof(str1)); rewind(stdin);
	printf("%d %s\n", num, str1);

	//wchar_t는 와이드 문자(wide character)를 저장하기 위한 자료형
	//wchar_t 문자열은 w가 붙은 함수를 사용해야 함
	wchar_t wstr1[20];

	printf("\n와이드 문자열 입력: ");
	wscanf_s(L"%s", wstr1, (unsigned)_countof(wstr1));
	wprintf(L"%d %s\n", num, wstr1);
	return 0;
}