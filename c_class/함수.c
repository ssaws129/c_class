#include <stdio.h>

void sayHello() 
{
	printf("Hello, World!\n");
}
void name(char* name) 
{
	
	printf("Hello, %s\n", name);
}
int add(int a, int b) {
	return a + b;
}
int main()
{
	/*
	반환형 함수 이름(매개변수)
	{
	
		return 리턴할값;
	}
	반환형 : 함수의 결과를 나타낼 때 사용할 자료형
	함수이름 : 호출할때 사용할 이름(개발자마음대로)
	매개변수 : 함수가 작업을 수행하기 위해서 필요한 입력값(없을 수 있음)
	return : 함수가 작업을 끝낸 뒤 호출한 곳으로 돌려주는 명령어 (void 일땐 생략가능)
	
	*/
	




	sayHello();
	int result = add(5, 3);
	printf("result : %d\n", result);

	name("형준");
	

	return 0;
}