/******************************************
 * �����̸� : sumormulti-func1.c
 * ���Ͽ뵵 : �Լ� ������ ����Ͽ� �����ϱ�
 * �ۼ��� : �����
 *****************************************/
#include <stdio.h>

//�Լ� ������Ÿ��
long sum(int n); //long sum(int);
long mult(int n); //long mult(int);

void main(void) //main() �Լ� ����
{
	int n=0, i=1;
	long result=0;

	// ����� �Է� ���� n�� ǥ���Է����� �ϳ��� ������ ����
	printf("���� ������ �ϳ� �Է��ϼ��� >"); scanf_s("%d", &n);

	if(n%2 ==0) result = sum(n); //�Լ� sum() ȣ��
	else        result = mult(n);//�Լ� mult() ȣ��

	//����� ���
	printf("%2d�κ��� %3d������ %s�� %3d�Դϴ�. \n", 1, n, (n%2) ? "��" : "��", result);
} //main() �Լ� ����

//1���� n������ �հ踦 ���ϴ� �Լ� ����(����)
long sum(int n) {
	long result = 0;
	int i = 1;

	for(i = 1; i <= n; i++) result += i;

	return result;
}

//1���� n������ ������ ���ϴ� �Լ� ����(����)
long mult(int n) {
	long result = 1;
	int i = 1;

	for(i = 2; i <= n; i++) result *= i;

	return result;
}