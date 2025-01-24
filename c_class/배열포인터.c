#include <stdio.h>

int main() 
{
	int a[3] = { 1, 2, 3 };
	int* ptr = a; //a[0] 번지의 주소를 저장하고있음

	
	//배열 포인터
	int arr[3] = { 1,2,3 };
	int (*arrptr)[3] = &arr; //arr배열 자체의 주소를 가리킴
	printf("첫 번째 요소는 : %d\n", (*arrptr)[0]);
	printf("두 번째 요소는 : %d\n", (*arrptr)[1]);
	printf("세 번째 요소는 : %d\n", (*arrptr)[2]);

	for (int i = 0; i < 3; i++) {
		printf("arr[%d] : %d\n", i, (*arrptr)[i]);
	}

	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}

	};
	int (*arr2PTR)[3] = arr2; //2차원 배열은 &안붙음 //첫번째 행의 주소가 저장됨 //행을 가리키는 포인터역할//배열의 개수를 알수있음
	//이미 크기가 확실하게되서 굳이 역참조 할 필요가 없음
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr2[%d][%d] : %d\n", i, j, arr2PTR[i][j]);

		}
		printf("\n");
	}

	return 0;
}