#include <stdio.h>

int main()
{
	/*
	if(조건식1){
		if(조건식2){
			조건식 1과 2를 모두 만족할 경우 코드 실행
		}
	}
	*/
	int student_num = 250108, student_num_check;
	int password = 112233, password_check;

	printf("학번을 입력해주세요 : ");
	scanf_s("%d", &student_num_check);

	printf("비밀번호를 입력해주세요 : ");
	scanf_s("%d", &password_check);

	if (student_num == student_num_check) {
		if(password == password_check){
			printf("%d님 로그인 되었습니다.", student_num); 
		}
		else {
			printf("비밀번호가 일치하지 않습니다.");
		}
	}
	else {
		printf("아이디가 일치하지 않습니다.");
	}
	
	return 0;
}



