#include <stdio.h>

int main()
{
	// ���ǽ� ? ������ �̰� ��µ� (true) : Ʋ���� �̰� ��µ�(false)

	/*int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("�� ū ���� : %d", result);*/

	int user_number;
	printf("���ڸ� �Է����ּ���(����) : ");
	scanf_s("%d", &user_number);
	int result1;
	result1 = user_number % 2 == 0 ? 0 : 1;
	printf("����� �Է��� ���ڴ� %d�̸� ��� : %d", user_number, result1);


	return 0;
}