/******************************************
* 파일이름 : ArrayInput.c
* 파일용도 : 배열에 데이터 입력받는 방법 설명
* 작성자 : 김명진
*****************************************/
#include <stdio.h>

void main(void)
{
	int i, IntArr[5];

	printf(">>> 배열에 입력할 데이터 <<<\n");
	for (i = 0; i < 5; i++) {
		printf("%d번째 데이터 입력: ", i);
		scanf_s("%d", &IntArr[i]);
	}

	printf(">>> 입력한 데이터 <<<\n");
	for (i = 0; i < 5; i++) printf("IntArray[%d] = %d\n", i, IntArr[i]);
}