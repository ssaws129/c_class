#include <stdio.h>

int main()
{
	//2���� �迭�� �������� �������� ����غ�����

	int a[9][9];
	int i, j;
	for (i = 0; i < 9; i++) {
		printf("%d��\n", i + 1);
		for (j = 0; j < 9; j++) {
			a[i][j] = (i + 1) * (j + 1);
		
			printf("%d x %d = %d\n",i+1, j+1, a[i][j]);
		}
		printf("\n");
	}




	return 0;
}