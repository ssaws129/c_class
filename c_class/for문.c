#include <stdio.h>


int main() {

	/*
	for(�ʱⰪ; ���ǽ�; ������;){
		���ǽ��� ���̶�� �����ų �ڵ�;
	}
	*/


	int i;
	for (i = 10; i >= 1; i--) {
		printf("for�� �ݺ� %d��°\n", i);
	}
	
	int a;
	for (a = 1; a <= 10; a++) { //������ ���Ŀ��� �����ĸ�
		printf("%d�� ���� : %d\n", a, a * a);
	}


	return 0;
}