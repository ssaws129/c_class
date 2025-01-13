#include <stdio.h>


int main()
{
	// %d : char, shor, int (부호 있는 10진 정수)
	// %ld : long (부호 있는 10진 정수)
	// %lld : long long (부호 있는 10진 정수)
	 //%u : unsigned in (부호 없는 10진 정수)
	// %f : float ( 10진수 방식의 부동 소수점 실수) 
	 //%lf : long double
	/*
	
	%x : float, double
	%c : char, short, int (값에 대응하는 문자)
	%s : 문자열
	%p : 포인터 주소값
	%i : int  출력
	c언어 서식 지정자
	*/
	long long x = 2100000000;

	printf("값 : %lld\n", x);

	printf("%10d\n", 42);

	printf("%5d\n", 1234);

	printf("%5d\n", 123456);

	printf("%-10d", 123456);

	printf("%d\n", 1);
	
	printf("%010d", 123456);
	return 0;
}