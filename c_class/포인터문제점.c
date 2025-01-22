#include <stdio.h>


int main()
{

	//변수를  만들어서 
	// 변수에 들어있는 값 : 변수의 주소값 ( 4 : 1004)

	int a = 4;
	int* p;
	
	p = &a;

	printf("%d : %p\n", *p, p);






	return 0;
}