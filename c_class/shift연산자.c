#include <stdio.h>

int main()
{

	// << 왼쪽 shift 연산자
	// >> 오른쪽 shift 연산자
	// 10 << 1 - 00001010(20) ----> 10 * 2^n [가장 오른쪽 비트는 0으로 채워짐]
	// 10 >> 1 - 00001010(5) ----> 10 * 2^(-n) [가장 왼쪽 비트는 {원래 있던 부호 비트 따라서 작성됨}]
	
	int num1 = 10, num2 = 20;
	int shift_left = num1 << 1;
	int shift_right = num2 >> 2;

	printf("%d << 2^1 %d\n", num1, shift_left);

	printf("%d >> 2^2 %d\n",num2, shift_right);

	return 0;
}