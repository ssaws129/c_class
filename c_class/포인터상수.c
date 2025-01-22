#include <stdio.h>


int main()
{

	int x = 10, y = 20;

	int* const PTR = &x; //상수로 된 포인터는 다른 값을 참조할수없다. PTR = &y; <----- XXXX

	printf("%d\n", *PTR);

	*PTR = 30; //10에 30을 넣어준다.

	printf("%d\n", x);

	/*PTR = &y;*/
	






	return 0;
}