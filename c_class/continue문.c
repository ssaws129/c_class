#include <stdio.h>

int main() {

	/*
	for(�ʱⰪ; ���ǽ�; ������){
		continue;
		������ �ڵ�
	}

	while(���ǽ�){
		������;
		continue;
		������ �ڵ�;
	}
	*/
	
	int for_continue;
	for (for_continue = 0; for_continue <= 10; for_continue++) {
		if (for_continue % 2 == 0) { //¦�����
			continue;

		}
		printf("%d\n", for_continue);
	}
	printf("while�� for���� �߾�\n");

	int while_continue = 0;
	while (while_continue <= 10) {
		while_continue++;
		if (while_continue % 2 != 0) { // Ȧ����� 
			continue;
		}
		
		printf("%d\n", while_continue);
	}




	return 0;
}