#include <stdio.h>

int main() {


	/*
	for(){
		for(){
			실행식;
		}
	}
	*/

	int i,j;

	for (i= 1; i<= 3; i++) { //바깥 반복문
		//1~3까지 증가 (행)
		for (j = 1; j<= 2; j++) {
			printf("%d행 %d열\n",i,j);
		}
		printf("\n");
	}






	return 0;
}