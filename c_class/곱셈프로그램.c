#include <stdio.h>
/*
���� 2������ ������ ���� �ϴ� �Լ� ����
���� 2������ ����ڰ� �Է�
���ϱ� ���� ��� : *X* = *
*/
int multiply(int num1, int num2) {
	
	return num1 * num2;
}



int main()
{
	int num1, num2;
	printf("���ڸ� 2�� ����ּ��� : ");
	scanf_s("%d %d", &num1, &num2);
	int result = multiply(num1, num2);
	printf("%d X %d = %d", num1, num2, result);






	return 0;
}