/**************************************
 * �����̸� : dowhile_food.c
 * ���Ͽ뵵 : do ~ while�� ���� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int nPrice=0, nMenu;
	do {
		printf("\n");
		printf("** ���ɸ޴� ���� **\n");
		printf("1. ����� \n");
		printf("2. «�� \n");
		printf("3. ������ \n");
		printf("\n");
		printf("�޴��� �����ϼ��� : ");
		scanf_s("%d", &nMenu);

		switch(nMenu) {
			case 1 : nPrice = 4000; break;
			case 2 : nPrice = 4500; break;
			case 3 : nPrice = 5000; break;
		}
	} while( nMenu >= 1 && nMenu <= 3);
	printf("������ %d�� �޴��� ���� %d�Դϴ�.\n", nMenu, nPrice);
} // main() �Լ� ����