#include <stdio.h>


int main()
{
	// %d : char, shor, int (��ȣ �ִ� 10�� ����)
	// %ld : long (��ȣ �ִ� 10�� ����)
	// %lld : long long (��ȣ �ִ� 10�� ����)
	 //%u : unsigned in (��ȣ ���� 10�� ����)
	// %f : float ( 10���� ����� �ε� �Ҽ��� �Ǽ�) 
	 //%lf : long double
	/*
	
	%x : float, double
	%c : char, short, int (���� �����ϴ� ����)
	%s : ���ڿ�
	%p : ������ �ּҰ�
	%i : int  ���
	c��� ���� ������
	*/
	long long x = 2100000000;

	printf("�� : %lld\n", x);

	printf("%10d\n", 42);

	printf("%5d\n", 1234);

	printf("%5d\n", 123456);

	printf("%-10d", 123456);

	printf("%d\n", 1);
	
	printf("%010d\n", 123456);

	printf("%8.2f\n", 3.14159); // 8 : ĭ���� // 2 : �Ҽ��� �ڸ���

	printf("%8.3f\n", 3.14159);

	printf("%8.4f\n", 3.1416);


	return 0;
}