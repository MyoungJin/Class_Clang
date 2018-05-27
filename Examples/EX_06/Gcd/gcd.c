/******************************************
 * 파일이름 : Gcd.c
 * 파일용도 : 함수 응용 (최대공약수를 구하는 재귀함수)
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

int gcd(int max, int min); //함수 원형

void main(void)
{
	int m, n, rst;

	printf("두 양의 정수를 입력하세요. >> ");
	scanf_s("%d%d", &m, &n);

	rst = gcd( (m>n ? m : n), (m>n ? n : m) );
	printf("두 수(%d, %d)의 최대공약수(gcd)는 %d이다.\n", m, n, rst);
}

//최대공약수를 구하는 재귀 함수
int gcd(int max, int min)
{
	if(min == 0) return max;
	else return gcd(min, max % min);
}