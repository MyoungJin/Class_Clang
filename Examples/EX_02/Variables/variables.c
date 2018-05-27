/***********************************************
◆ 파일 이름 : variables.c
◆ 작성자    : 김명진
◆ 용도      : 변수 선언과 이용
***********************************************/
#include <stdio.h>

// main() 함수 시작 
int main(void)
{
	int a = 5, b = 10;
	float p = 3.14F, q = 1.2F;

	printf("a = %d 이고 b = %d : \n", a, b);
	printf("p = %f 이고 q = %f : \n\n", p, q);
	printf("\tb / a －> %d\n", b / a);
	printf("\tp - q －> %f\n", p - q);

	return 0;
}
// main() 함수 종료
