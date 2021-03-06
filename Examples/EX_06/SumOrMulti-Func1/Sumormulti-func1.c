/******************************************
 * 파일이름 : sumormulti-func1.c
 * 파일용도 : 함수 원형을 사용하여 구현하기
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

//함수 프로토타입
long sum(int n); //long sum(int);
long mult(int n); //long mult(int);

void main(void) //main() 함수 시작
{
	int n=0, i=1;
	long result=0;

	// 사용자 입력 정수 n을 표준입력으로 하나의 변수에 저장
	printf("양의 정수를 하나 입력하세요 >"); scanf_s("%d", &n);

	if(n%2 ==0) result = sum(n); //함수 sum() 호출
	else        result = mult(n);//함수 mult() 호출

	//결과를 출력
	printf("%2d로부터 %3d까지의 %s은 %3d입니다. \n", 1, n, (n%2) ? "곱" : "합", result);
} //main() 함수 종료

//1부터 n까지의 합계를 구하는 함수 정의(구현)
long sum(int n) {
	long result = 0;
	int i = 1;

	for(i = 1; i <= n; i++) result += i;

	return result;
}

//1부터 n까지의 곱셈을 구하는 함수 정의(구현)
long mult(int n) {
	long result = 1;
	int i = 1;

	for(i = 2; i <= n; i++) result *= i;

	return result;
}