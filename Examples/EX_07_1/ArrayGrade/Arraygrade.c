/*****************************************
 * 파일이름 : Arraygrade.c
 * 파일용도 : 배열을 이용한 성적처리 응용
 * 작성자 : 김명진
 *****************************************/

#include <stdio.h>

#define NUM_STUDENT	4 //학생수
#define MID_INDEX	0 //중간고사가 저장되는 첨자
#define FINAL_INDEX 1 //기말고사가 저장되는 첨자
#define SUM_INDEX	2 //합이 저장되는 첨자

void calcgrade(int g[][3]); //성적처리 함수원형
void printgrade(int g[][3]);//성적출력 함수원형

void main(void)
{
	//배열 초기화
	int grade[][3] = {{10,20}, {33, 35}, {13, 79}, {60, 45}, {0, 0}};
	
	calcgrade(grade);
	printgrade(grade);
}

void calcgrade(int g[][3]) {
	int i, j;
	for(i=0; i<NUM_STUDENT; i++) {
		for(j=0; j<SUM_INDEX; j++) 
			g[i][SUM_INDEX] += g[i][j];

		g[NUM_STUDENT][MID_INDEX] += g[i][MID_INDEX];
		g[NUM_STUDENT][FINAL_INDEX] += g[i][FINAL_INDEX];
	}
}

void printgrade(int g[][3]) {
	int i, j;

	printf("     **************************\n");
	printf("        중간고사 기말고사  합\n");
	printf("     **************************\n");
	for(i=0; i<NUM_STUDENT; i++) 
		for(j=0; j<=SUM_INDEX; j++) 
			printf("\t  %3d%s", g[i][j], (j==SUM_INDEX) ? "\n" : "");

	printf("     **************************\n");
	printf("\t  %3d\t  %3d\n", g[NUM_STUDENT][MID_INDEX], 
						  g[NUM_STUDENT][FINAL_INDEX]);
	printf("     **************************\n");
}