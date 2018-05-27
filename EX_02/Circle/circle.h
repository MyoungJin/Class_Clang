/* 파일 : circle.h */
#include <stdio.h> //printf() 함수를 이용하기 위한 헤더 파일 포함

#define PHI 3.14 //PHI를 3.14로 대체하는 지시자
#define CIRCUM(r) (2 * PHI * (r)) //원의 둘레를 구하는 매크로
#define AREA(r) (PHI * (r) * (r)) //원의 면적을 구하는 매크로