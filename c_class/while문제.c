#include <stdio.h>


int main()
{
	/*
	while���� ����ؼ� ����ڰ� 0�� �Է��� ������ ���α׷��� ������ �ʴ´�.
	����ڰ� � ���ڸ� �Է��ߴٸ� (�Է��� ���ڴ� *�Դϴ� (0�Է½� ����)
	*/

	int user_num;
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &user_num);
	while (user_num != 0) {
		printf("�Է��� ���ڴ� %d�Դϴ�.(0�Է½� ����) : ", user_num);
		scanf_s("%d", &user_num);
		
	}
	printf("0�Է����� ���α׷��� �����մϴ�.");






	return 0;
}