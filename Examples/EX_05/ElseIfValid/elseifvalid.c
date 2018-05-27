/**************************************
 * 파일이름 : elseifvalid.c
 * 파일용도 : 중첩 if문을 응용한 예제
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int number = 0, valid = 0;

	printf("1과 45사이의 값을 입력: "); scanf_s("%d", &number);

	if(number < 1) {
		printf("입력한 수는 1보다 작습니다.\n");
		valid = 0;
	} else if(number > 45) {
		printf("입력한 수는 45보다 큽니다.\n");
		valid = 0;
	} else
		valid = 1;

	if (valid == 1) {
		printf("입력한 수 %d는 범위 안의 수입니다.\n", number);
	} else {
		printf("입력한 수 %d는 범위 안의 수가 아닙니다.\n", number);
	}
} // main() 함수 종료