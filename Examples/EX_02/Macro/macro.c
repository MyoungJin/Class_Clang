/***********************************************
�� ���� �̸� : macro.c
�� �ۼ���    : �����
�� �뵵      : ��ũ�θ� �����ϱ� ����
***********************************************/

#include <stdio.h> 
#define PHI 3.14                 //PHI�� 3.14�� ��ü�ϴ� ������
#define ROUND(r) (2 * PHI * (r)) //���� �ѷ��� ���ϴ� ��ũ��

// main() �Լ� ����
int main(void) {

	double radius = 2;
	double circumference = ROUND(radius);

	printf("�������� %lf�� ���� �ѷ��� %lf�Դϴ�.\n", radius, circumference);

	return 0;
}
// main() �Լ� ����