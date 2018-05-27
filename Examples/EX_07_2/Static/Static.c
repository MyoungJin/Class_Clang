/**************************************
 * 파일이름 : Static.c
 * 파일용도 : 정적 지역변수 실습
 * 작성자 : 김명진
 **************************************/

#include <stdio.h>

void increment(void);

void main(void)
{
	int count = 0; //지역변수
	for(;count < 5; count++) {
		increment(); //5번 함수 호출
	}
}

void increment(void)
{
	static int sIndex=1; //정적 지역변수
	int aIndex=1;		 //지역변수
	printf("정적 지역변수 sIndex=%2d, \t", sIndex++);
	printf("자동 지역변수 aIndex=%2d\n", aIndex++);
}