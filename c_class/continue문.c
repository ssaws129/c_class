#include <stdio.h>

int main() {

	/*
	for(초기값; 조건식; 증감식){
		continue;
		실행할 코드
	}

	while(조건식){
		증감식;
		continue;
		실행할 코드;
	}
	*/
	
	int for_continue;
	for (for_continue = 0; for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) { //짝수라면
			continue;

		}
		printf("%d\n", for_continue);
	}
	printf("while과 for문의 중앙\n");

	int while_continue = 0;
	while (while_continue <= 10) {
		while_continue++;
		if (while_continue % 2 != 0) { // 홀수라면 
			continue;
		}
		
		printf("%d\n", while_continue);
	}




	return 0;
}