#include <stdio.h>

int main() 
{
	int a[3] = { 1, 2, 3 };
	int* ptr = a; //a[0] ������ �ּҸ� �����ϰ�����

	
	//�迭 ������
	int arr[3] = { 1,2,3 };
	int (*arrptr)[3] = &arr; //arr�迭 ��ü�� �ּҸ� ����Ŵ
	printf("ù ��° ��Ҵ� : %d\n", (*arrptr)[0]);
	printf("�� ��° ��Ҵ� : %d\n", (*arrptr)[1]);
	printf("�� ��° ��Ҵ� : %d\n", (*arrptr)[2]);

	for (int i = 0; i < 3; i++) {
		printf("arr[%d] : %d\n", i, (*arrptr)[i]);
	}

	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}

	};
	int (*arr2PTR)[3] = arr2; //2���� �迭�� &�Ⱥ��� //ù��° ���� �ּҰ� ����� //���� ����Ű�� �����Ϳ���//�迭�� ������ �˼�����
	//�̹� ũ�Ⱑ Ȯ���ϰԵǼ� ���� ������ �� �ʿ䰡 ����
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr2[%d][%d] : %d\n", i, j, arr2PTR[i][j]);

		}
		printf("\n");
	}

	return 0;
}