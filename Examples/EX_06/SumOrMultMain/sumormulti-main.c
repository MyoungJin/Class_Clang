/******************************************
 * 파일이름 : SumOrMulti-main.c
 * 파일용도 : 함수를 main()에서 구현하기
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

void main(void) //main() 함수 시작
{
	int n=0, i=1;
	long result=0;

	// 사용자 입력 정수 n을 표준입력으로 하나의 변수에 저장
	printf("양의 정수를 하나 입력하세요 >");
	scanf_s("%d", &n);
	
	//값을 조사하여 짝수이면 합을, 홀수이면 곱을 구한다.
	if(n%2 ==0) { //짝수이면
		result = 0;
		for(i = 1; i <= n; i++) result += i;
	}else { //홀수이면
		result = 1;
		for(i = 1; i <= n; i++) result *= i;
	}

	//결과를 출력
	printf("%2d로부터 %3d까지의 %s은 %3d입니다. \n", 1, n, (n%2) ? "곱" : "합", result);
} //main() 함수 종료