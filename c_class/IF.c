#include <stdio.h>

int main()
{	
	/*
	If(���ǽ�)
	{
	������ ������ ��� ������ �ڵ带 �ۼ�;
	}
	if���� �Ұ�ȣ(����)���� true�� false�� ������� �����µ� true�� ��쿡�� �߰�ȣ���� ������ ����ȴ�. -> false�� ������ �����ʴ´�.

	if(���ǽ�)
		������ �ڵ尡 �����̶�� �߰�ȣ ���� ����
	If(���ǽ�)
	{
	������ ������ ��� ������ �ڵ带 �ۼ�;
	}
	else{
	// ���ǽ��� false��� �̾ȿ� �ڵ尡 �����

	}
	*/
	int if_number = 10;

	if (if_number < 500) {
		printf("%d�� 500���� �۴�?�� ���� ������ ���Դϴ�.\n", if_number);

	}
	if (if_number == 3) {
		printf("%d�� 3�� ����", if_number); //false�̱� ������ �����������
	}

	/*
	����ڷκ��� �������� �Է¹޾� ���� ���� ���ǹ����� ����� 10000�� �̻��� �� ~�� �ȴٴ� ����ؿ��� ���� ����ϱ�
	*/
	int user_walkcount;
	printf("����� �Ϸ翡 ��� �ȴ��� �Է����ּ��� :");
	scanf_s("%d", &user_walkcount);
	if (user_walkcount >= 10000) {
		printf("%d�� �ȴٴ� ����ؿ�.\n", user_walkcount);
	}
	
	char alpha = 'A';

	if (alpha == 'B') {
		printf("alpha�� B�� �����ϴ�.\n");
	}
	else {
		printf("alpha�� B�� �ٸ��ϴ�.\n");
	}
	int likeNumber;
	printf("����� �����ϴ� ���ڸ� ���ּ��� : ");
	scanf_s("%d", &likeNumber);
	if (likeNumber >= 10) {
		printf("����� �����ϴ� ���ڴ� 10�̻��̱���~");
	}
	else {
		printf("����� �����ϴ� ���ڴ� 10�̸��̱���~");
	}


	return 0;
}