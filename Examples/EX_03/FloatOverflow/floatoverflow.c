/************************************************
�� ���� �̸� : floatoverflow.c
�� �ۼ���    : �����
�� �뵵      : �ε� �Ҽ�����  �����ϱ� ����
***********************************************/
#include <stdio.h>
#include <float.h> // �Ǽ� �ڷ����� ��� �ּҰ�, �ִ밪�� ���ǵ� ��� ����
#include <math.h>  // ���Ѵ� INFINITY�� ���ǵ� ��� ����

int main(void) // main() �Լ� ���� 
{
	float fMin = FLT_MIN;    // float�� ��� �ּҰ�
	float fMax = FLT_MAX;    // float�� ��� �ִ밪
	
	fMin = fMin / 100000000.0f; // ���� ���� ���� �Ǹ鼭 ����÷ο� �߻�
	fMax = fMax * 1000.0f;		// ��� �ִ밪�� 1000�� ���ϸ� ���Ѵ밡 ��

	// ���� ������ �Ѿ�Ƿ� �����÷ο� �߻��Ͽ� ���Ѵ밡 ��
	if(fMax == INFINITY) // INFINITY�� ���Ͽ� ���� ���Ѵ����� �˻�
		printf("�ִ밪 * 1000.0f      = %e\n", fMax);

	// isinf() �Լ��� ����Ͽ� ���� ���Ѵ����� �˻�
	if(isinf(fMax))	printf("�ִ밪 * 1000.0f      = %e\n", fMax);

	// 0.000000e+00 inf: �Ǽ��� ����÷ο�� 0
	printf("�ּҰ� / 100000000.0f = %e\n", fMin);
	
	float zero = 0.0f;
	fMin = 1.0f / zero; //�Ǽ��� 0���� ������ ���Ѵ밡 �ȴ�.
	if (isinf(fMax)) printf(" 1.0f / 0.0f = %e\n", fMin);

	return 0;
} // main() �Լ� ����