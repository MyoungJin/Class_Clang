/**************************************************
◆ 파일 이름 : scantype.c
◆ 작성자    : 김명진
◆ 용도      : scanf의 다양한 입력 설명하기
*************************************************/
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) // main() 함수 시작 
{
	int height = 0, onum = 0, hnum = 0;
	float weight = 0;
	char blood = 0, name[20];

	printf("이름 ? ");	scanf_s("%s", name, sizeof(name));	rewind(stdin);
	printf("혈액형 ? ");	scanf_s("%c", &blood, 1);			rewind(stdin);
	printf("키 ? ");		scanf_s("%d", &height);				rewind(stdin);
	printf("몸무게(소수로)는 ? ");	scanf_s("%f", &weight); rewind(stdin);
	printf("8진수 하나 입력 ? ");		scanf_s("%o", &onum);	rewind(stdin);
	printf("16진수 하나 입력 ? ");	scanf_s("%x", &hnum);           
	printf("%s님의 혈액형은 %c형, 키는 %dcm, 몸무게는 %fKg\n", name, blood, height, weight);
	printf("입력한 팔진수는 %o, 16진수는 %x 입니다.\n", onum, hnum);   

	return 0;
} // main() 함수 종료
