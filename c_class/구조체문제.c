#include <stdio.h>
#define NAME_LEN 20
struct student
{
	char name[NAME_LEN];
	int age;
	int grade;
};

int main()
{
	/*
	학생 구조체 만들기 (멤버 : 이름, 나이, 학년)
	구조체를 배열로 선언 후 초기화(2개)
	모든 학생의 정보를 출력
	*/
	struct student st1[2] = {
		{"장형준", 14, 1},
	    {"홍길동", 16, 3}
	};
	
	for (int i = 0; i < 2; i++)
	{
		printf("이름 : %s 나이 : %d 학년 : %d\n", st1[i].name, st1[i].age, st1[i].grade);
	}



	return 0;
}