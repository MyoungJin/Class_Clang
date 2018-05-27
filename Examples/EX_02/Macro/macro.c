/***********************************************
◆ 파일 이름 : macro.c
◆ 작성자    : 김명진
◆ 용도      : 매크로를 설명하기 위함
***********************************************/

#include <stdio.h> 
#define PHI 3.14                 //PHI를 3.14로 대체하는 지시자
#define ROUND(r) (2 * PHI * (r)) //원의 둘레를 구하는 매크로

// main() 함수 시작
int main(void) {

	double radius = 2;
	double circumference = ROUND(radius);

	printf("반지름이 %lf인 원의 둘레는 %lf입니다.\n", radius, circumference);

	return 0;
}
// main() 함수 종료