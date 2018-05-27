/*****************************************
 * 파일이름 : Frequency.c
 * 파일용도 : 배열을 이용한 응용
 * 작성자 : 김명진
 *****************************************/
#include <stdio.h>

#define SIZE 60
void mean(int []);
void mode(int [], int []);
void printArray(int []);

void main()
{
	int frequency[10] = {0};
	int response[SIZE] = {
		5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
		4, 8, 0, 6, 3, 7, 0, 2, 0, 8,
		7, 8, 0, 5, 8, 7, 3, 9, 7, 8,
		3, 5, 2, 9, 7, 5, 3, 8, 7, 2,
		7, 4, 7, 2, 5, 3, 8, 7, 5, 6,
		4, 7, 6, 1, 6, 5, 7, 7, 7, 6 };

	printArray(response);
	mean(response);
	mode(frequency, response);
}

void printArray(int a[]) {
	int j;

	printf("다음 0에서 9까지의 정수에서 \n");
	for(j=0; j<SIZE; j++) {
		if(j%20 == 0) printf("\n");
		printf("%2d", a[j]);
	}
	printf("\n\n");
}

void mean(int answer[]) {
	int j, total=0;
	printf("%s\n%s\n%s\n", "********", "  평균", "********");
	for(j=0; j<SIZE; j++) total += answer[j];
	printf("배열 원소의 평균을 구하려고 한다.\n"
		   "배열 원소의 수는 %d 이고 \n"
		   "배열 원소의 전체 합은 %d 이므로\n"
		   "평균은 %.4f 이다.\n", SIZE, total, (double)total/SIZE);
}

void mode(int freq[], int answer[]) {
	int rating, j, h, largest=0, modeValue=0;

	printf("\n%s\n%s\n%s\n", "********", "  분포", "********");
	for(j=0; j<=SIZE-1; j++) ++freq[answer[j]];

	printf("-------------------------------------------------------\n");
	printf("%10s%10s%8s%-20s\n\n", "수", "횟수", " ", "히스토그램");
	printf("%28s%-40s\n%28s%-40s\n", " ", 
		    "         1    1    2    2", " ",
			"1   5    0    5    0    5");
	printf("-------------------------------------------------------\n");

	for(rating=0; rating <=9; rating++) {
		printf("%10d%10d%8s", rating, freq[rating], " ");
		if(freq[rating] > largest) {
			largest = freq[rating];
			modeValue = rating;
		}
		for(h=1; h<=freq[rating]; h++) printf("*");
		printf("\n");
	}
	printf("-------------------------------------------------------\n");
	printf("분포에서는 수의 빈도 횟수를 나타낸다.\n"
		   "분석 결과, 가장 많은 빈도수는 수 "
		   "%d이(가) %d번 나타났다.\n", modeValue, largest);
}