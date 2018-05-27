/******************************************
 * 파일이름 : primenumber.c
 * 파일용도 : 반복문 프로그램 연습
 * 작성자 : 김명진
 ******************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int number, divisor, limit, count = 0;
	printf("2부터 n(입력)까지의 소수를 구하자.\n");
	printf("상한 값 정수 n(2보다 커야함)을 입력: ");
	scanf_s("%d", &limit);
	printf("\n2부터 %d까지의 소수는 ======== \n", limit);

	for(number = 2; number <= limit; number++) {
		for(divisor = 2; number % divisor; divisor++) ;
		if(divisor == number) {
			printf("%5d%c", number, (++count % 5 ? ' ' : '\n'));
		}
	}
	printf("\n");
} // main() 함수 종료