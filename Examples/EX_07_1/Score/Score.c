/******************************************
 * 파일이름 : Score.c
 * 파일용도 : 배열을 이용한 응용(성적 출력)
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>
int iGetMax(int Score, int Max);

void main(void)
{
	int i = 0, max = 0;

	//배열에 성적 입력
	int score[10] = {10, 20, 33, 35, 13, 99, 77, 45, 67, 88};

	printf("다음 10명의 성적입니다.. >>\n");

	//가장 성적이 좋은 점수 구하기
	for(i=0; i<10; i++) {
		max = iGetMax(score[i], max);
		printf("%d%s", score[i], (i==9) ? "\n\n" : ", ");
	}

	printf("위 10명의 성적 중에서 가장 높은 성적은 %d입니다.\n", max);
}

int iGetMax(int Score, int Max)
{
	return(Max < Score) ? Score : Max;
}