/**********************************
 * 파일이름 : AsciiBinary.c
 * 파일용도 : 프로그램 연습(아스키코드)
 * 작성자 : 김명진
 **********************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	char ch;

	printf("문자 하나를 입력하세요 : ");
	scanf_s("%c", &ch, 1);
	
	printf("입력한 문자 %c의 아스키 코드는 %#x 이다. \n\n", ch, (int)ch);
	printf("문자 %c의 아스키 코드의 내부 이진수는 다음과 같다.\n", ch);

	printf("%d ", (ch & (1 << 7)) ? 1 : 0);
	printf("%d ", (ch & (1 << 6)) ? 1 : 0);
	printf("%d ", (ch & (1 << 5)) ? 1 : 0);
	printf("%d  ", (ch & (1 << 4)) ? 1 : 0);
	printf("%d ", (ch & (1 << 3)) ? 1 : 0);
	printf("%d ", (ch & (1 << 2)) ? 1 : 0);
	printf("%d ", (ch & (1 << 1)) ? 1 : 0);
	printf("%d ", (ch & (1 << 0)) ? 1 : 0);
	printf("\n");
} // main() 함수 종료