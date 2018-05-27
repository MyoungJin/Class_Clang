/***********************************************
�� ���� �̸� : sizeof.c
�� �ۼ���    : �����
�� �뵵      : �ڷ����� ũ�⸦  �����ϱ� ����
***********************************************/
#include <stdio.h>

int main(void) // main() �Լ� ���� 
{
    printf("��� �ڷ����� ũ��� ������ ���� ����\n");
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
} // main() �Լ� ����
