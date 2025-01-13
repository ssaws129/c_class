#include <stdio.h>

int main() 
{

	// 자동 형변환
	double change_number = 10;
	printf("%f\n", change_number );


	int change_number2 = 5.1231231; //소수부분 손실
	
	printf("%d\n", change_number2); 

	printf("%d\n", (int)1.123);

	printf("%d\n", (short)1.23123);

	printf("%f\n", (double)22);

	printf("%f\n", (float)22);

	float f = 3.14f;  //double 말고 float형태로쓸거면 숫자뒤에f붙이기

	printf("%f\n", f);
	
	
	
	return 0;
}