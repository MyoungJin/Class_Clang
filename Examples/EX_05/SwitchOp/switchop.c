/**************************************
 * 파일이름 : switchop.c
 * 파일용도 : switch문을 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int invalid_operator = 0;
	char op;
	float number1, number2, result;

	printf("연산자는 네 가지(+, -, *, /)중의 하나여야 합니다.\n");
	printf("두 수를 다음과 같은 형태로 입력하세요.\n");
	printf(">>> number1 연산자 number2\n입력: ");
	scanf_s("%f %c %f", &number1, &op, 1, &number2);

	switch(op) {
		case '*' : result = number1 * number2; break;
		case '/' : result = number1 / number2; break;
		case '+' : result = number1 + number2; break;
		case '-' : result = number1 - number2; break;
		default  : invalid_operator = 1;
	}

	switch(invalid_operator) {
		case 1 : printf("연산자가 잘못 입력되었습니다.\n"); break;
		default :
			printf("\n>>>>>>> 결과는 \n");
			printf("%5.2f %c %5.2f = %5.2f\n", number1, op, number2, result);
			break;
	}
} // main() 함수 종료