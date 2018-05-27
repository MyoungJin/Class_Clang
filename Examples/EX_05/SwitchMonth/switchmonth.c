/**************************************
 * �����̸� : switchmonth.c
 * ���Ͽ뵵 : switch�� ���� ����
 * �ۼ��� : �����
 **************************************/
#include <stdio.h>

void main(void) // main() �Լ� ���� 
{
	int year = 0, month = 0, maxDay = 30, validinput = 0;

	printf("��� ���� ������ ���� �Է��ϸ� �� ���� ������ �˷��帳�ϴ�.\n");
	printf("2013 4\n �Է� >");
	scanf_s("%d %d", &year, &month);

	switch(month) {
		case 1: case 3: case 5: 
		case 7: case 8: case 10: 
		case 12: 
			maxDay = 31; validinput = 1; break;
		case 4: case 6: case 9:
		case 11:
			maxDay = 30; validinput = 1; break;
		case 2:
			if((year%4 == 0) && (year%100 !=0) || (year%400 == 0)) maxDay = 29;
			else maxDay = 28;
			validinput = 1;
			break;
		default :
			validinput = 0;
	}

	if(validinput)
		printf("%d�� %d���� ������ %d�� �Դϴ�.\n", year, month, maxDay);
	else
		printf("�Է��� �߸��Ǿ����ϴ�.\n");
} // main() �Լ� ����