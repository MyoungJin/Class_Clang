/***************************************************
◆ 파일 이름 : circle.c
◆ 작성자    : 김명진
◆ 용도      : 소스와 헤더를 사용하여 프로그램 연습
***************************************************/
#include "circle.h" //사용자 정의 헤더 파일 사용

// main() 함수 시작 
int main(void)
{
	double radius = 0;
	printf("원의 반지름을 입력하세요. ");
	scanf("%lf", &radius);

	printf("---------------------------------------------\n");
	printf("반지름이 %10.2e 인 원의 둘레는 %8.3lf 입니다.\n", radius, CIRCUM(radius));
	printf("반지름이 %4.1lf 인 원의 면적은 %8.3lf 입니다.\n", radius, AREA(radius));

	return 0;
}
// main() 함수 종료