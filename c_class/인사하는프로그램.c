#include <stdio.h>
void hello(char* name) {
	

	printf("�ȳ��ϼ��� %s��\n", name);
}
int main()
{

	// ����ڿ��� �̸��� �Է¹޾Ƽ� �ȳ��ϼ��� **�� �̶�� �λ��ϴ� ���α׷�

	char name[50]; //���� ũ�� ���� 

	printf("�̸��� �Է����ּ��� : ");

	scanf_s("%s", name, (unsigned)sizeof(name)); //���� ũ�� ����  (unsigned)sizeof(name))
	
	hello(name); //ȣ�� 
	
	

	return 0;
}