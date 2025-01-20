#include <stdio.h>


int main() {

	/*
	for(초기값; 조건식; 증감식;){
		조건식이 참이라면 실행시킬 코드;
	}
	*/


	int i;
	for (i = 10; i >= 1; i--) {
		printf("for문 반복 %d번째\n", i);
	}
	
	int a;
	for (a = 1; a <= 10; a++) { //마지막 수식에는 증감식만
		printf("%d의 제곱 : %d\n", a, a * a);
	}


	return 0;
}