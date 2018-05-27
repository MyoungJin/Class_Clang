/**************************************
 * 파일이름 : elseodd.c
 * 파일용도 : if~else 문을 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int number = 0;

	printf("양의 정수 하나를 입력하세요. > ");
	scanf_s("%d", &number);
	printf("---> 입력한 수 %d 는(은) ", number);

	if(number % 2 == 0) {
		printf("짝수 입니다.\n");
	}
	else {
		printf("홀수 입니다.\n");
	}
} // main() 함수 종료