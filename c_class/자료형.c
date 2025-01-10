#include <stdio.h>

int main()
{
	// 10 10.0 다르게 처리함 
	unsigned int max_number = 4200000000; 
	printf("%u\n", max_number);

	int num1 = 1;

	printf("%d\n", sizeof(num1));

	printf("%d\n", sizeof(100));

	printf("%d\n", sizeof(3.14));

	printf("%d\n", sizeof(float));

	printf("%d\n", sizeof(short));


	return 0;
}