/**********************************************
�� ���� �̸� : define.c
�� �ۼ���    : �����
�� �뵵      : Ű���� �� �ĺ��ڸ� �����ϱ� ����
***********************************************/

#include <stdio.h> 
#define PHI 3.14 //PHI�� 3.14�� ��ü�ϴ� ������

// main() �Լ� ����
int main(void) {
	double radius = 2;
	double circumference = 2 * PHI * radius;

	printf("�������� %lf�� ���� �ѷ��� %lf�Դϴ�.\n", radius, circumference);

	return 0;
}
// main() �Լ� ���� 