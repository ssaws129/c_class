#include <stdio.h>


int main()
{

	char string_text[] = "�ȳ��ϼ���!"; //�ѱ��� �ѱ��ڴ� 2����Ʈ�� 2*5 + ����ǥ +null / utf-8 ���ڵ� �������� �ѱ�2����Ʈ�� ����
	//char = 1����Ʈ

	printf("���ڿ� ���� string_text�� ���̴� : %zd\n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("���� ���ڿ����̴� : %zd\n", sizeof(english_text));


	char  long_text[50] = "This is long";
	printf("���ڿ� ���� long_text�� ���̴� : %zd\n", sizeof(long_text));

	/*printf("�迭 long_text�� �ʱ�ȭ�� ���ڿ��� ���� : %zd\n", strlen((long_text)); *///�ʱ�ȭ�� �� ���� ���̸� ��� =12
	printf("%s\n", long_text);

	char name[30] = "My name is ����";
	printf("%s\n", name);
	name[10] = '\0';
	printf("%s\n", name);

	char scanfs_string[50];

	//printf("scanfs_string ���ڿ��� �Է��ϼ��� : ");
	//scanf_s("%s", scanfs_string, (unsigned int)sizeof(scanfs_string)); //scanf_s ���� ���ڿ��� ����Ҷ� &�Ƚᵵ��
	//printf("%s \n", scanfs_string);

	char gets_string[50];
	printf("gets_s�� ���ڿ��� �Է��ϼ��� : ");
	gets_s(gets_string, sizeof(gets_string)); //���ڿ����� Ưȭ��
	printf("%s\n", gets_string);
	return 0;
}