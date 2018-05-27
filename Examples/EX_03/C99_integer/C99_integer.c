/*******************************************************
◆ 파일 이름 : c99_integer.c
◆ 작성자    : 김명진
◆ 용도      : C99표준의 확장된 정수형 자료를 설명하기 위함
*******************************************************/
#include <stdio.h>
#include <stdint.h>  // 정수 자료형의 크기가 정의된 헤더 파일

int main(void) // main() 함수 시작 
{
	//부호 있는 정수형 변수 선언
	int8_t  iNum1 = INT8_MIN;  //-128;                   // 8비트(1바이트)
	int16_t iNum2 = INT16_MAX; //32767;                  // 16비트(2바이트)
	int32_t iNum3 = INT32_MAX; //2147483647;             // 32비트(4바이트)
	int64_t iNum4 = INT64_MAX; //9223372036854775807;    // 64비트(8바이트)

	// int8_t, int16_t, int32_t는 %d로 출력하고 int64_t는 %lld로 출력
	printf("%d, %d, %d, %lld\n", iNum1, iNum2, iNum3, iNum4);

	//부호 없는 정수형 변수 선언
	uint8_t  uNum1 = UINT8_MAX;  //255;                   // 8비트(1바이트)
	uint16_t uNum2 = UINT16_MAX; //65535;                 // 16비트(2바이트)
	uint32_t uNum3 = UINT32_MAX; //4294967295;            // 32비트(4바이트)
	uint64_t uNum4 = UINT64_MAX; //18446744073709551615;  // 64비트(8바이트)

	// uint8_t, uint16_t, uint32_t는 %u로 출력하고 uint64_t는 %llu로 출력
	printf("%u, %u, %u, %llu\n", uNum1, uNum2, uNum3, uNum4);

	return 0;
} // main() 함수 종료