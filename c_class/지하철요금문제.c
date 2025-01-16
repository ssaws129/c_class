#include <stdio.h>

int main()
{

	int user_age;
	int result;
	printf("당신의 나이 : ");
	scanf_s("%d", &user_age);
	result = user_age >= 20 ? 1280 : 800;
	printf("당신의 나이는 %d살이고 %d원을 내야합니다.", user_age, result);
	




	return 0;
}