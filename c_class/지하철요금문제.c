#include <stdio.h>

int main()
{

	int user_age;
	int result;
	printf("����� ���� : ");
	scanf_s("%d", &user_age);
	result = user_age >= 20 ? 1280 : 800;
	printf("����� ���̴� %d���̰� %d���� �����մϴ�.", user_age, result);
	




	return 0;
}