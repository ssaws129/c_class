#include <stdio.h>


int main()
{
	/* 1. �Է��� �����Ϳ� �����ϴ� �ڷ���
		2. �Է��� �����Ͱ� ����� �޸� ����(����)
		scanf(��������) -> scanf_s(����) 
	*/
	int num;
	//scanf_s("%d", &num);
	//scanf_s("%d\n", &num); //X dl
	//scanf_s("%d", &num); // �Է��� ���� ����
	//printf("\n"); // �ٹٲ� ���

	//scanf_s("�Է� : %d", &num); // X

	//printf("�Է� : ");
	//scanf_s("%d", &num);
	
	/*int x, y, z, total;*/

	/*printf("���� 3�� �Է� : ");

	scanf_s("%d %d %d", &x, &y, &z);*/

	/*total = x + y + z;*/

	/*printf("%d + %d + %d = %d", x, y, z, total);*/

	/*float fnum;

	printf("�Ǽ� �Է� : ");

	scanf_s("%f", &fnum);
	
	printf("�Էµ� �� : %.2f", fnum);*/

	float scanf_pi;
	printf("������ �Է� : ");
	scanf_s("%f", &scanf_pi);
	printf("�Էµ� �� : %.2f", scanf_pi);
	
	


	return 0;
}