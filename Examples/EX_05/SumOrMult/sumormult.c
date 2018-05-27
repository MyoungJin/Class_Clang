/**************************************
 * 파일이름 : sumofmult.c
 * 파일용도 : if~else 문을 응용한 예제
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int op = 0, num1 = 0, num2 = 0;

	printf("두 정수의 더하기를 원하면 1을\n");
	printf("두 정수의 곱하기를 원하면 2를 입력하세요. : >");
	scanf_s("%d", &op);

	if(op == 1) printf("---> 더할 ");
	else printf("---> 곱할 ");
	
	printf("두 수를 입력(현재 줄) 하세요. : > ");
	scanf_s("%d%d", &num1, &num2);

	if(op == 1) {
		printf("두 수의 합(%d + %d)은 ", num1, num2);
		printf("%d 입니다.\n", num1 + num2);
	}
	else {
		printf("두 수의 곱(%d * %d)은 ", num1, num2);
		printf("%d 입니다.\n", num1 * num2);
	}
} // main() 함수 종료