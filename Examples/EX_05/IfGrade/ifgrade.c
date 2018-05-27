/**************************************
 * 파일이름 : Ifgrade.c
 * 파일용도 : if문을 설명하기 위함
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	float grade = 0;

	printf("이번 학기의 성적(평균 평점)은 얼마? ");
	scanf_s("%f", &grade);
	printf("---> 입력한 당신 성적은 %f 입니다.\n", grade);

	if(grade > 4.3) {
		printf(">>>> 장학금을 받습니다.\n");
		printf(">>>> 등록금도 면제입니다.\n");
	}
} // main() 함수 종료