#include <stdio.h>


int main()
{
	/*
	if(조건문){
		조건을 만족할 경우 실행
	}
	else if(조건2){
		조건2를 만족할 경우 실행
	}
	else if(조건3){
		조건3를 만족할 경우 실행
	}
	else if(조건4){
		조건4를 만족할 경우 실행
	}
	else{
		모든 조건을 만족하지 않을 경우 실행
	}
	*/
	int num_a;
	printf("숫자 입력 : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("고양이\n");
	}
	else if (num_a == 1) {
		printf("강아지\n");
	}
	else { // 4보다 작고 1보다 크면
		printf("햄스터\n");
	}

	//학점이 90점 이상이라면 A학점, 참 잘했어요! 출력
	//80이상이라면 B학점
	//70이상이라면 C학점
	//60이상이라면 D학점
	// 입력받은 값이 범위 내에 없다면 재시험 출력
	int user_score;
	printf("당신의 학점을 입력해주세요 : ");
	scanf_s("%d", &user_score);
	if (user_score >= 90) {
		printf("A학점, 참 잘했어요!");
	}
	else if (user_score >= 80) {
		printf("입력받은 학점 %d은 B학점", user_score);
	}
	else if (user_score >= 70) {
		printf("입력받은 학점 %d는 C학점", user_score);
	}
	else if (user_score >= 60) {
		printf("입력받은 학점 %d는 D학점", user_score);
	}
	else {
		printf("재시험\n");
	}
	//복합조건 버스비 
	// 0~7세 유아는 800원 8~19세 학생1200원 20~34세 청년 1600원 35~59세 주연ㄴ2000원 60 ~150세 노년 버스비는 무료
	//잘못입력하셨습니다.

	int user_age;

	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &user_age);
	if (user_age > 0 && user_age <= 7) {
		printf("0~7세 유아는 800원 입니다.");
	}
	else if (user_age >= 8 && user_age <= 19) {
		printf("8~19세 학생은 1200원 입니다.");
	}
	else if(user_age >= 20 && user_age <= 34){
		printf("20~34세 청년은 1600원 입니다.");
	}
	else if (user_age >= 35 && user_age <= 59) {
		printf("35~59세 중년은 2000원 입니다.");
	}
	else if (user_age >= 60 && user_age <= 150) {
		printf("60~150세 노년은 무료입니다.");
	}
	else {
		printf("사람이 아닙니다.");
	}


	return 0;
}