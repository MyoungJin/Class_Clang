/**************************************
 * 파일이름 : dowhile_food.c
 * 파일용도 : do ~ while문 응용 예제
 * 작성자 : 김명진
 **************************************/
#include <stdio.h>

void main(void) // main() 함수 시작 
{
	int nPrice=0, nMenu;
	do {
		printf("\n");
		printf("** 점심메뉴 선택 **\n");
		printf("1. 자장면 \n");
		printf("2. 짬뽕 \n");
		printf("3. 볶음밥 \n");
		printf("\n");
		printf("메뉴를 선택하세요 : ");
		scanf_s("%d", &nMenu);

		switch(nMenu) {
			case 1 : nPrice = 4000; break;
			case 2 : nPrice = 4500; break;
			case 3 : nPrice = 5000; break;
		}
	} while( nMenu >= 1 && nMenu <= 3);
	printf("선택한 %d번 메뉴는 값이 %d입니다.\n", nMenu, nPrice);
} // main() 함수 종료