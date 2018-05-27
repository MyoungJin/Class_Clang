/**************************************
 * 파일이름 : nestedif.c
 * 파일용도 : 중첩 if문을 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int num1 = 0, num2 = 0;

	printf("정수 두 개를 공백으로 구분하여 입력: ");
	scanf_s("%d %d", &num1, &num2);

	if(num1) //if문 하나
		if(num2) printf("두 수 %d과 %d는(은) 모두 0이 아닙니다.\n", num1, num2);
		else     printf("%d는(은) 0이 아니고, %d는 0입니다.\n", num1, num2);

	if(num1) { //if문 둘
		if(num2) printf("두 수 %d과 %d는(은) 모두 0이 아닙니다.\n", num1, num2);
	} else
		printf("%d는(은) 0입니다.\n", num1);

	if(num1) { //if문 셋
		if(num2)
			printf("두 수 %d과 %d는(은) 모두 0이 아닙니다.\n", num1, num2);
		else
			printf("%d는(은) 0이 아니고, %d는 0입니다.\n", num1, num2);
	} else {
		if(num2)
			printf("%d는(은) 0이고, %d는(은) 0이 아닙니다.\n", num1, num2);
		else
			printf("두 수 %d과 %d는(은) 모두 0입니다.\n", num1, num2);
	}
} // main() 함수 종료