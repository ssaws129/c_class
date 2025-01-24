#include <stdio.h>
/*
숫자 2가지를 가지고 곱셈 하는 함수 생성
숫자 2가지는 사용자가 입력
곱하기 연산 결과 : *X* = *
*/
int multiply(int num1, int num2) {
	
	return num1 * num2;
}



int main()
{
	int num1, num2;
	printf("숫자를 2개 골라주세요 : ");
	scanf_s("%d %d", &num1, &num2);
	int result = multiply(num1, num2);
	printf("%d X %d = %d", num1, num2, result);






	return 0;
}