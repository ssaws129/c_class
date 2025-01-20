#include <stdio.h>


int main()
{
	/*
	while문을 사용해서 사용자가 0을 입력할 때까지 프로그램은 끝나지 않는다.
	사용자가 어떤 숫자를 입력했다면 (입력한 숫자는 *입니다 (0입력시 종료)
	*/

	int user_num;
	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &user_num);
	while (user_num != 0) {
		printf("입력한 숫자는 %d입니다.(0입력시 종료) : ", user_num);
		scanf_s("%d", &user_num);
		
	}
	printf("0입력으로 프로그램을 종료합니다.");






	return 0;
}