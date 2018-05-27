/***********************************************
◆ 파일 이름 : scanf3.c
◆ 작성자    : 김명진
◆ 용도      : 자료 입력함수 scanf 응용
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() 함수 시작 
{
	char zip[20], addr[50];

	printf("우편번호 및 주소 입력 : ");
	scanf_s("%[0123456789-]%*c%[^\n]", zip, sizeof(zip), addr, sizeof(addr));
	printf("우편번호 : %s\n주소 : %s\n", zip, addr);

	return 0;
} // main() 함수 종료
