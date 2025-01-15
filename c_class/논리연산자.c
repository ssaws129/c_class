#include <stdio.h>

int main()
{
	/*
	||(or) : 피연산자중 하나만 true이면 true라는 결과 값을 반환
	&&(and) : 피연산자중 하나만 false이면 false를 반환(둘다 true여야 함)
	!(not) : 논리부정연산자로 피연산자가 true이면 false라는 반대값을 반환 (단항연산자)
	피연산자란 ? : 연산대상데이터
	*/
	int one = 10, two = 20, three = 30, four = 40;
	int result;

	result = one > two || two >= three || three > four;
	// 10 > 20 ,   20 >= 30, 30 > 40
	//false

	printf("result : %d\n", result);

	result = one <= two && two <= three &&  three <= four;
	
	printf("result : %d\n", result);

	result = !(one > two);
	//true
	printf("result : %d\n", result);

	
	return 0;
}