#include <stdio.h>

int main()
{

	int a = 5;
	int* p = &a;
	int** p2 = &p;
	int*** p3 = &p2;
	
	printf("%d\n", *p);
	printf("%d\n", **p2);
	printf("%d\n", ***p3);

	



	return 0;
}