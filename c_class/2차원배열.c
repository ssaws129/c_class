#include <stdio.h>


int main()
{

	int a[3][4];
	a[0][0] = 10;
	printf("%d\n", a[0][0]);

	int arr[3][4] = {
		{1,2,3,4}, //1행 0
		{5,6,7,8}, //2행  1
		{9,10,11,12} //3행 2
	};
	for (int i = 0; i < 3; i++) { //행을 도는 for문
		for (int j = 0; j < 4; j++) { //열을 도는 for문

			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++) { //행을 도는 for문
		for (int j = 0; j < 4; j++) { //열을 도는 for문
			arr[i][j] = 10;
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}


	return 0;
}