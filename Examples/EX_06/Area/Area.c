/******************************************
 * �����̸� : Area.c
 * ���Ͽ뵵 : �Լ��� �̿��� ����
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

double triangle(double w, double h);
double rectangle(double w, double h);

void main(void)
{
	double width, height;

	printf("������ ���� �ٰ����� ���ο� ���� �Է�: ");
	scanf_s("%lf %lf", &width, &height);

	printf("�� �ﰢ���� ������ %.21f�Դϴ�.\n", triangle(width, height) );
	printf("�� �簢���� ������ %.21f�Դϴ�.\n", rectangle(width, height) );
}

double triangle(double w, double h)  {  return w * h / 2; }
double rectangle(double w, double h) {  return w * h;  }