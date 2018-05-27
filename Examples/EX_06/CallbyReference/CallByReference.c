/******************************************
 * 파일이름 : CallbyReference.c
 * 파일용도 : Call by Value에 의한 함수 응용
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>
void swap(int *, int *); /* 함수의 원형 선언 */

int main(void)
{
	int a, b;
	a = 10;
	b = 20;

	/* swap() 호출 전 a, b 값 */
	printf("1. before swap() : a=%d, b=%d\n", a, b); 

	swap(&a, &b); /* 실인자 a, b의 값 전달 */
	
	/* swap() 호출 후 a, b 값 */
	printf("3. after swap() : a=%d, b=%d\n", a, b); 

	return 0;
}

void swap(int *a, int *b)
{
	int temp;

	temp = *a; /* 형식인자 a와 b의 값을 교환 */
	*a = *b;
	*b = temp;

	printf("2. in swap() : a=%d, b=%d\n", *a, *b);
}