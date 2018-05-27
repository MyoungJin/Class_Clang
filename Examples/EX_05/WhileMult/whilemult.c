/******************************************
 * 파일이름 : whilemult.c
 * 파일용도 : while문 응용 예제(for문과 비교)
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>
#define LIMIT 10

void main(void) // main() 함수 시작 
{
	int mult, i;

	mult = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10;
	printf("반복문을 이용하지 않고 : \n");
	printf("1에서 10까지의 곱은 %d 입니다.\n\n", mult);

	mult = 1;
	for(i = 1; i <= LIMIT; i++) mult *= i;
	printf("반복문(for): 1에서 10까지의 곱은 %d\n", mult);

	i = 1; mult = 1;
	while (i <= LIMIT){
		mult *= i;
		i++;
	}
	printf("반복문(while): 1에서 %d까지의 곱은 %d\n", LIMIT, mult);
} // main() 함수 종료