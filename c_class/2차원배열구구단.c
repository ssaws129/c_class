#include <stdio.h>

int main()
{
	//2차원 배열을 선언한후 구구단을 출력해보세요

	int a[9][9];
	int i, j;
	for (i = 0; i < 9; i++) {
		printf("%d단\n", i + 1);
		for (j = 0; j < 9; j++) {
			a[i][j] = (i + 1) * (j + 1);
		
			printf("%d x %d = %d\n",i+1, j+1, a[i][j]);
		}
		printf("\n");
	}




	return 0;
}