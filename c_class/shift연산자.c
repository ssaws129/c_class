#include <stdio.h>

int main()
{

	// << ���� shift ������
	// >> ������ shift ������
	// 10 << 1 - 00001010(20) ----> 10 * 2^n [���� ������ ��Ʈ�� 0���� ä����]
	// 10 >> 1 - 00001010(5) ----> 10 * 2^(-n) [���� ���� ��Ʈ�� {���� �ִ� ��ȣ ��Ʈ ���� �ۼ���}]
	
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 1;
	int shift_right = num2 >> 2;

	printf("%d << 2^1 %d\n", num1, shift_left);

	printf("%d >> 2^2 %d\n",num2, shift_right);

	return 0;
}