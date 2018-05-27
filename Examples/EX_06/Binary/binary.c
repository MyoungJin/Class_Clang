/******************************************
 * 파일이름 : Binary.c
 * 파일용도 : 함수 응용 (이진수를 구하는 재귀함수)
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>
void binary(int number); //함수 원형

void main(void)
{
	int decimal;

	printf("0을 입력하면 프로그램을 종료합니다.\n");
	printf("양의 정수를 하나 입력하세요. >> ");
	while ( (scanf_s("%d", &decimal) && decimal > 0) )
	{
		printf("양의 정수 %7d의 이진수는 >> ", decimal);
		binary(decimal); //재귀함수 호출
		printf("\n\n양의 정수를 하나 입력하세요. >> ");
	}
}

//이진수를 구하는 재귀 함수
void binary(int number)
{
	int bin;

	if(number > 0) {
		bin = number % 2;
		number /= 2;
		binary(number);
		printf("%d", bin);
	}
	return;
}