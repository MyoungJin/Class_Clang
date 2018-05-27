/**************************************
 * 파일이름 : AutoExternal.c
 * 파일용도 : 지역 및 전역변수, 외부 변수 실습
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void increment(int);

int gIndex = 11;
int count = 51;

void main(void)
{
	extern int gIndex; //외부 전역변수

	auto int index = 15; //자동 지역변수
	int count = 55;      //지역변수

	printf("메인 함수에서 increment 함수 호출 전\n");
	printf("(전역)gIndex = %2d, (자동지역)index = %2d, "
		"(지역)count = %2d\n\n", gIndex, index, count);

	increment(index);

	printf("메인 함수에서 increment 함수 호출 전\n");
	printf("(전역)gIndex = %2d, (자동지역)index = %2d, "
		"(지역)count = %2d\n\n", gIndex, index, count);
}

void increment(int i)
{
	i++;
	gIndex++;
	count++;
	printf("increment 함수  내에서\n");
	printf("(전역)gIndex = %2d, (지역)i = %2d, "
		"(지역)count = %2d\n\n", gIndex, i, count);
}