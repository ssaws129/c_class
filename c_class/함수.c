#include <stdio.h>

void sayHello() 
{
	printf("Hello, World!\n");
}
void name(char* name) 
{
	
	printf("Hello, %s\n", name);
}
int add(int a, int b) {
	return a + b;
}
int main()
{
	/*
	��ȯ�� �Լ� �̸�(�Ű�����)
	{
	
		return �����Ұ�;
	}
	��ȯ�� : �Լ��� ����� ��Ÿ�� �� ����� �ڷ���
	�Լ��̸� : ȣ���Ҷ� ����� �̸�(�����ڸ������)
	�Ű����� : �Լ��� �۾��� �����ϱ� ���ؼ� �ʿ��� �Է°�(���� �� ����)
	return : �Լ��� �۾��� ���� �� ȣ���� ������ �����ִ� ��ɾ� (void �϶� ��������)
	
	*/
	




	sayHello();
	int result = add(5, 3);
	printf("result : %d\n", result);

	name("����");
	

	return 0;
}