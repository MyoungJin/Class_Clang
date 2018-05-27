/**************************************
 * �����̸� : ArraySeries.c
 * ���Ͽ뵵 : �迭 ä��� ���� �ǽ�
 * �ۼ��� : �����
 **************************************/

#include <stdio.h>
void printArray(int N[][10], char *str);

void main(void)
{
	int i,j,k=0;
	int N1_1[10][10] = {0};
	int N1_2[10][10] = {0};
	int N2[10][10] = {0};
	int N3[10][10] = {0};
	int N4[10][10] = {0};

	//�迭 1-1
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			N1_1[i][j] = ++k;
	
	//�迭 1-2
	k=0;
	for(i=0; i<10; i++)
		for(j=0; j<10; j++)
			N1_2[j][i] = ++k;
	
	//�迭 2
	k=0;
	for(i=0; i<10; i++)
		for(j=0; j<=i; j++)
			N2[i][j] = ++k;

	//�迭 3
	k=0;
	for(i=0; i<10; i++)
		for(j=i; j<10; j++)
			N3[i][j] = ++k;

	//�迭 4
	k=0;
	for(i=0; i<10; i++)
		for(j=0; j<=i; j++)
			N4[j][i] = ++k;

	printArray(N1_1, ">> �迭 1-1�� ��� ���");
	printArray(N1_2, ">> �迭 1-2�� ��� ���");
	printArray(N2,   ">> �迭 2�� ��� ���");
	printArray(N3,   ">> �迭 3�� ��� ���");
	printArray(N4,   ">> �迭 4�� ��� ���");
}

void printArray(int N[][10], char *str)
{
	int i,j;

	printf("%s\n========================================\n", str);
	for(i=0; i<10; i++) {
		for(j=0; j<10; j++)
			if(N[i][j] == 0) printf("    ");
			else			 printf("%4d", N[i][j]);
		printf("\n");
	}
	printf("========================================\n\n", str);
}