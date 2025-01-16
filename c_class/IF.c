#include <stdio.h>

int main()
{	
	/*
	If(조건식)
	{
	조건을 만족할 경우 실행할 코드를 작성;
	}
	if문의 소괄호(조건)에는 true와 false의 결과값이 나오는데 true일 경우에만 중괄호내의 내용이 실행된다. -> false면 실행이 되지않는다.

	if(조건식)
		실행할 코드가 한줄이라면 중괄호 생략 가능
	If(조건식)
	{
	조건을 만족할 경우 실행할 코드를 작성;
	}
	else{
	// 조건식이 false라면 이안에 코드가 실행됨

	}
	*/
	int if_number = 10;

	if (if_number < 500) {
		printf("%d이 500보다 작니?에 대한 물음은 참입니다.\n", if_number);

	}
	if (if_number == 3) {
		printf("%d는 3과 같아", if_number); //false이기 때문에 실행되지않음
	}

	/*
	사용자로부터 걸음수를 입력받아 걸음 수를 조건문으로 만들고 10000보 이상일 때 ~보 걷다니 대단해요라는 문장 출력하기
	*/
	int user_walkcount;
	printf("당신은 하루에 몇보를 걷는지 입력해주세요 :");
	scanf_s("%d", &user_walkcount);
	if (user_walkcount >= 10000) {
		printf("%d보 걷다니 대단해요.\n", user_walkcount);
	}
	
	char alpha = 'A';

	if (alpha == 'B') {
		printf("alpha는 B와 같습니다.\n");
	}
	else {
		printf("alpha는 B와 다릅니다.\n");
	}
	int likeNumber;
	printf("당신이 좋아하는 숫자를 써주세요 : ");
	scanf_s("%d", &likeNumber);
	if (likeNumber >= 10) {
		printf("당신이 좋아하는 숫자는 10이상이군요~");
	}
	else {
		printf("당신이 좋아하는 숫자는 10미만이군요~");
	}


	return 0;
}