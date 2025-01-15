#include <stdio.h>

int main()
{
	// 조건식 ? 맞으면 이게 출력됨 (true) : 틀리면 이게 출력됨(false)

	/*int ten = 10, twenty = 20;
	int result;
	result = ten > twenty ? ten : twenty;
	printf("더 큰 값은 : %d", result);*/

	int user_number;
	printf("숫자를 입력해주세요(정수) : ");
	scanf_s("%d", &user_number);
	int result1;
	result1 = user_number % 2 == 0 ? 0 : 1;
	printf("당신이 입력한 숫자는 %d이며 결과 : %d", user_number, result1);


	return 0;
}