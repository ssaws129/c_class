#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	//malloc m얼록 크기는 바이트
	//free
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	if (num < 2)
	{
		printf("숫자는 최소 2이상 입력해야 합니다.\n");
		return 1;
	}

    int * numLength = (int *)malloc(num * sizeof(int));

	if (numLength == NULL) //동적메모리 할당 확인코드
	{
		printf("메모리 할당 실패!\n");
		return 1;
	}
	numLength[1] = 3;
	printf("%d\n", numLength[1]);
	free(numLength);
	//int numLength[num];
	


	return 0;
}