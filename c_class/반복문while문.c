#include <stdio.h>

int main() {
	/*
	자료형 변수명 = 초기값;
	while(조건){
		반복시키고자 하는 코드 작성;
		증감식; 
	}
	*/
	int c_class = 1;
	while (c_class <= 10) {
		printf("c언어 수업 %d\n", c_class);
		c_class++;
	}
	//while 문과 if 문을 활용한 6단의 값 출력
	int a = 1;
	
	while (a <= 60) {
		if (a % 6 == 0) {
			printf("%d\n", a);
			
		}
		a++;
	}


	return 0;
}