/***********************************************
◆ 파일 이름 : scanf2.c
◆ 작성자    : 김명진
◆ 용도      : 자료 입력함수 scanf 응용
***********************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() 함수 시작 
{
	int year, month, day, num1, num2;
	char str[20];

	printf("입력: ");
	scanf_s("%d/%d/%d", &year, &month, &day); rewind(stdin);
	printf("=> year=%d, month=%d, day=%d \n\n", year, month, day);

	printf("입력: ");
	scanf_s("%i%%", &num1); rewind(stdin);
	printf("=> num1=%d \n\n", num1);

	printf("입력: ");
	scanf_s("%2i%2i", &num1, &num2); rewind(stdin);
	printf("=> num1=%d, num2=%d \n\n", num1, num2);

	printf("입력: ");
	scanf_s("%9s", str, sizeof(str));
	printf("=> str=%s \n\n", str);

	return 0;
} // main() 함수 종료
