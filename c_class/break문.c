#include <stdio.h>

int main() {

	/*
	for���� �극��ũ��
	for(�ʱⰪ; ���ǽ�; ������){
		break;
		������ �ڵ�;
	}
	while���� �극��ũ��
	�ڷ��� ������ = �ʱ�ȭ;
	while(���ǽ�){
		break;
		������ �ڵ�;
		������;
	}
	*/
	for (int i = 0; i <= 10; i++) { //for�� �ȿ����� int i = 0�� �� �ۿ� ���� while�� ���� ��������
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
	}
	int i = 0;
	
	printf("\n");

	while (i <= 10) {
		if (i == 6) {
			break;
		}
		printf("%d\n", i);
		i++;
	}



	return 0;
}