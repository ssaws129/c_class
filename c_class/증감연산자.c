#include <stdio.h>

int main()
{
	/* 감소(변수--; / --변수)
		증가 (변수++;/ ++변수)
		++변수와 변수 ++의 차이점
		int a = ++b;   ++b -> a
		int a = b++;    a = b -> ++
	*/
	int put_a = 10, put_b = 20;

	printf("A : %d\n", put_a);
	printf("A : %d\n", ++put_a);
	printf("A : %d\n", put_a);
	printf("\n");
	printf("A : %d\n", put_b);
	printf("A : %d\n", put_b++);
	printf("A : %d\n", put_b);

	return 0;
}