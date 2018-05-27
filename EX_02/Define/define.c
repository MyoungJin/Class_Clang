/**********************************************
◆ 파일 이름 : define.c
◆ 작성자    : 김명진
◆ 용도      : 키워드 및 식별자를 설명하기 위함
***********************************************/

#include <stdio.h> 
#define PHI 3.14 //PHI를 3.14로 대체하는 지시자

// main() 함수 시작
int main(void) {
	double radius = 2;
	double circumference = 2 * PHI * radius;

	printf("반지름이 %lf인 원의 둘레는 %lf입니다.\n", radius, circumference);

	return 0;
}
// main() 함수 종료 