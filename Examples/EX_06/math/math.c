/******************************************
 * 파일이름 : Math.c
 * 파일용도 : 여러 수학 함수를 이용한 응용
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>
#include <math.h>

void main(void)
{
	int i;
	printf("  i  i제곱  i세제곱\n");
	for(i = 2; i < 6; i++) {
		printf("%3d %5.1f %8.1f\n", i, pow(i, 2.0), pow(i, 3.0));
	}
	printf("\n");

	printf("abs(-5) == %3d\n", abs(-5));
	printf("sqrt(64.0) == %5.2f\n", sqrt(64.0));
	printf("ceil(5.2) == %5.2f\n", ceil(5.2));
	printf("floor(5.3) == %5.2f\n", floor(5.3));
	printf("floor(-5.3) == %5.2f\n", floor(-5.3));
	printf("ceil(-5.2) == %5.2f\n", ceil(-5.2));
}