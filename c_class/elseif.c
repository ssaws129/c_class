#include <stdio.h>


int main()
{
	/*
	if(���ǹ�){
		������ ������ ��� ����
	}
	else if(����2){
		����2�� ������ ��� ����
	}
	else if(����3){
		����3�� ������ ��� ����
	}
	else if(����4){
		����4�� ������ ��� ����
	}
	else{
		��� ������ �������� ���� ��� ����
	}
	*/
	int num_a;
	printf("���� �Է� : ");
	scanf_s("%d", &num_a);
	if (num_a > 3) {
		printf("�����\n");
	}
	else if (num_a == 1) {
		printf("������\n");
	}
	else { // 4���� �۰� 1���� ũ��
		printf("�ܽ���\n");
	}

	//������ 90�� �̻��̶�� A����, �� ���߾��! ���
	//80�̻��̶�� B����
	//70�̻��̶�� C����
	//60�̻��̶�� D����
	// �Է¹��� ���� ���� ���� ���ٸ� ����� ���
	int user_score;
	printf("����� ������ �Է����ּ��� : ");
	scanf_s("%d", &user_score);
	if (user_score >= 90) {
		printf("A����, �� ���߾��!");
	}
	else if (user_score >= 80) {
		printf("�Է¹��� ���� %d�� B����", user_score);
	}
	else if (user_score >= 70) {
		printf("�Է¹��� ���� %d�� C����", user_score);
	}
	else if (user_score >= 60) {
		printf("�Է¹��� ���� %d�� D����", user_score);
	}
	else {
		printf("�����\n");
	}
	//�������� ������ 
	// 0~7�� ���ƴ� 800�� 8~19�� �л�1200�� 20~34�� û�� 1600�� 35~59�� �ֿ���2000�� 60 ~150�� ��� ������� ����
	//�߸��Է��ϼ̽��ϴ�.

	int user_age;

	printf("���̸� �Է����ּ��� : ");
	scanf_s("%d", &user_age);
	if (user_age > 0 && user_age <= 7) {
		printf("0~7�� ���ƴ� 800�� �Դϴ�.");
	}
	else if (user_age >= 8 && user_age <= 19) {
		printf("8~19�� �л��� 1200�� �Դϴ�.");
	}
	else if(user_age >= 20 && user_age <= 34){
		printf("20~34�� û���� 1600�� �Դϴ�.");
	}
	else if (user_age >= 35 && user_age <= 59) {
		printf("35~59�� �߳��� 2000�� �Դϴ�.");
	}
	else if (user_age >= 60 && user_age <= 150) {
		printf("60~150�� ����� �����Դϴ�.");
	}
	else {
		printf("����� �ƴմϴ�.");
	}


	return 0;
}