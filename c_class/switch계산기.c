#include <stdio.h>

int main()
{
	/*
	+ - * / 
	�� ������ 
	������ ������ 1�� ������ 2��
	������ Ư��ó��
	*/

	char operator;
	int num1, num2; 
	printf("�����ڸ� �Է����ּ���(+, -, /, *) : ");
	scanf_s("%c",&operator,1); // ũ�� �����ִ°� (1�� ���ڸ� ����)
	printf("�� ���ڸ� �Է����ּ���(num1,num2) : ");
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
			printf("%d �� %d = %.2f", num1, num2, (double)num1 / num2);
		}
		break;
	
	}







	return 0;
}