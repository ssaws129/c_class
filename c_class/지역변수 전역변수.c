#include <stdio.h>
int number = 50;

void staticFunction() {

	static int num = 0; //static 함수는 이 함수가 끝나도 남아서 기능을 한다.
	num++;
	printf("num : %d\n", num);
}

int localFunction(int a) {
	int result = 5;
	return number + a;
}
int main()
{

	int a = 100;
	printf("%d\n", a);
	
	int result = localFunction(a);
	//int number = 40;
	printf("%d\n", result);
	printf("%d\n", number);
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	staticFunction();
	
	/*
	지역변수
	1. 중괄호(함수스코프) 내에 선언된 모든 변수는 해당 함수에서만 사용가능하다. 
	2. 함수를 실행할 때 사용하는 재료인 매개변수도 결국 지역변수이다.
	3. 지역변수는 자신이 선언된 지역 외 다른 지역(함수)에서는 사용불가
	4. 변수의 이름은 중복할 수 없으며, 다른 함수에서는 중복가능

	전역변수
	1. 함수 스코프 밖에 선언된 변수
	2. 모든 지역(함수)에서 사용 가능하다.
	3. 지역(함수)내에 이름이 동일한 변수가 있다면 지역변수가 우선적으로 사용된다.
	4. 프로그램이 시작됨과 동시에 메모리 공간이 할당되며, 프로그램이 종료될때까지 존재한다.

	static 변수
	1. static이라는 키워드를 사용해서 선언한다.
	2. 지역변수, 전역변수 모두 선언 가능
	3. 지역 변수와 함께 사용하면 함수를 호출하고 기능이 끝나도 스태틱으로 선언한 변수는 메모리가 사라지지않음.
	4. 프로그램이 종료될 때까지 메모리 공간을 유지한다.
	*/

	return 0;
}