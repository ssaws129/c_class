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
	�л� ����ü ����� (��� : �̸�, ����, �г�)
	����ü�� �迭�� ���� �� �ʱ�ȭ(2��)
	��� �л��� ������ ���
	*/
	struct student st1[2] = {
		{"������", 14, 1},
	    {"ȫ�浿", 16, 3}
	};
	
	for (int i = 0; i < 2; i++)
	{
		printf("�̸� : %s ���� : %d �г� : %d\n", st1[i].name, st1[i].age, st1[i].grade);
	}



	return 0;
}