/******************************************
 * 파일이름 : Area.c
 * 파일용도 : 함수를 이용한 응용
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

double triangle(double w, double h);
double rectangle(double w, double h);

void main(void)
{
	double width, height;

	printf("면적을 구할 다각형의 가로와 세로 입력: ");
	scanf_s("%lf %lf", &width, &height);

	printf("이 삼각형의 면적은 %.21f입니다.\n", triangle(width, height) );
	printf("이 사각형의 면적은 %.21f입니다.\n", rectangle(width, height) );
}

double triangle(double w, double h)  {  return w * h / 2; }
double rectangle(double w, double h) {  return w * h;  }