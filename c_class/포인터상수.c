#include <stdio.h>


int main()
{

	int x = 10, y = 20;

	int* const PTR = &x; //����� �� �����ʹ� �ٸ� ���� �����Ҽ�����. PTR = &y; <----- XXXX

	printf("%d\n", *PTR);

	*PTR = 30; //10�� 30�� �־��ش�.

	printf("%d\n", x);

	/*PTR = &y;*/
	






	return 0;
}