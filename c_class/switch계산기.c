#include <stdio.h>

int main()
{
	/*
	+ - * / 
	만 가능한 
	변수는 문자형 1개 정수형 2개
	나눗셈 특수처리
	*/

	char operator;
	int num1, num2; 
	printf("연산자를 입력해주세요(+, -, /, *) : ");
	scanf_s("%c",&operator,1); // 크기 정해주는거 (1개 문자를 지정)
	printf("두 숫자를 입력해주세요(num1,num2) : ");
	scanf_s("%d,%d", &num1, &num2);
	switch (operator)
	{
	case  '+': printf("%d %c %d = %d", num1, operator, num2, num1 + num2);
		break;
	case '-': printf("%d %c %d = %d", num1, operator, num2, num1 - num2);
		break;
	case '*':printf("%d %c %d = %d", num1, operator, num2, num1 * num2);
		break;
	case '/': if (num2 == 0) {
		printf("ERROR");
		}
		else {
			printf("%d ÷ %d = %.2f", num1, num2, (double)num1 / num2);
		}
		break;
	
	}







	return 0;
}