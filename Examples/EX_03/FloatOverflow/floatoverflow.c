/************************************************
◆ 파일 이름 : floatoverflow.c
◆ 작성자    : 김명진
◆ 용도      : 부동 소수점을  설명하기 위함
***********************************************/
#include <stdio.h>
#include <float.h> // 실수 자료형의 양수 최소값, 최대값이 정의된 헤더 파일
#include <math.h>  // 무한대 INFINITY가 정의된 헤더 파일

int main(void) // main() 함수 시작 
{
	float fMin = FLT_MIN;    // float의 양수 최소값
	float fMax = FLT_MAX;    // float의 양수 최대값
	
	fMin = fMin / 100000000.0f; // 아주 작은 수가 되면서 언더플로우 발생
	fMax = fMax * 1000.0f;		// 양수 최대값에 1000을 곱하면 무한대가 됨

	// 저장 범위를 넘어서므로 오버플로우 발생하여 무한대가 됨
	if(fMax == INFINITY) // INFINITY와 비교하여 값이 무한대인지 검사
		printf("최대값 * 1000.0f      = %e\n", fMax);

	// isinf() 함수를 사용하여 값이 무한대인지 검사
	if(isinf(fMax))	printf("최대값 * 1000.0f      = %e\n", fMax);

	// 0.000000e+00 inf: 실수의 언더플로우는 0
	printf("최소값 / 100000000.0f = %e\n", fMin);
	
	float zero = 0.0f;
	fMin = 1.0f / zero; //실수를 0으로 나누면 무한대가 된다.
	if (isinf(fMax)) printf(" 1.0f / 0.0f = %e\n", fMin);

	return 0;
} // main() 함수 종료