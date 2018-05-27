/******************************************
 * 파일이름 : Factorial.c
 * 파일용도 : 함수 응용 (재귀함수)
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

long factorial(int); //함수 원형

void main(void)
{
	int i;

	for(i = 1; i <= 10; i++)
		printf("%2d! = %ld\n", i, factorial(i) );
}

//n! 구하는 재귀함수
long factorial(int number)
{
	if(number <= 1) return 1;
	else return (number * factorial(number -1) );
}