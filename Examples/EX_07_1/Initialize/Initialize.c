/******************************************
 * 파일이름 : Initialize.c
 * 파일용도 : 배열 초기화 및 출력하는 방법 설명
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

void main(void)
{
	int i;
	int		IntArr[5] = {10, 20, 33, 35, 13};
	double	DblArr[4] = {1.2, 2.4};
	char	ChrArr[] = {'$', '&', '*'};

	//선언된 배열 값을 출력
	printf("int IntArr[5] = {10, 20, 33, 35, 13} 이후 출력 >>\n");
	for(i=0; i<5; i++)
		printf("%d%s", IntArr[i], (i==4) ? "\n\n" : ", ");

	printf("double DblArr[4] = {1.2, 2.4} 이후 출력 >>\n");
	for(i=0; i<4; i++)
		printf("%lf%s", DblArr[i], (i==3) ? "\n\n" : ", ");

	printf("char ChrArr[] = {'$', '&', '*'} 이후 출력 >>\n");
	for(i=0; i<3; i++)
		printf("%c%s", ChrArr[i], (i==2) ? "\n\n" : ", ");
}