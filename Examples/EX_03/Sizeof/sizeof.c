/***********************************************
◆ 파일 이름 : sizeof.c
◆ 작성자    : 김명진
◆ 용도      : 자료형의 크기를  설명하기 위함
***********************************************/
#include <stdio.h>

int main(void) // main() 함수 시작 
{
    printf("몇몇 자료형의 크기는 다음과 같이 계산됨\n");
    printf("          char : %3d byte\n", sizeof(char));
    printf("   signed char : %3d byte\n", sizeof(signed char));
    printf(" unsigned char : %3d byte\n", sizeof(unsigned char));
    printf("         short : %3d byte\n", sizeof(short));
    printf("unsigned short : %3d byte\n", sizeof(unsigned short));
    printf("           int : %3d byte\n", sizeof(int));
    printf("  unsigned int : %3d byte\n", sizeof(unsigned int));
    printf("          long : %3d byte\n", sizeof(long));
    printf(" unsigned long : %3d byte\n", sizeof(unsigned long));
	printf("     long long : %3d byte\n", sizeof(long long));
    printf("         float : %3d byte\n", sizeof(float));
    printf("        double : %3d byte\n", sizeof(double));
    printf("   long double : %3d byte\n", sizeof(long double));
    return 0;
} // main() 함수 종료
