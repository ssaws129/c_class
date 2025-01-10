#include <stdio.h>
#define MYAGE = 10 //가장 먼저 처리 프로그램이 시작되기전에 처리됨


int main()
{

	int num = 2;
	num = 3;


	//상수 : 변하지않는 값
	//리터럴 상수 : 정수(int) , 실수(double) - > 접미사f를 사용하면 정해진 형식을 거부할수있음
	//심볼릭 상수 : const
	//const를 형식 앞에 붙이면 변하지 않는 값이 되게됨

	//const int num3 = 3; //example
	const int NUM3 = 3;
	
	
	//매크로 상수 : 심볼릭 상수의 일종 세미콜론 금지 ( ; <- X )



	return 0; 
}