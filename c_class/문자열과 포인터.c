#include <stdio.h>



int main()
{

		
	
	char good[] = "good";
	char* bad = "bad";


	good[0] = 'H'; //������ �ٲٴ°�
	//good = "new good"; //�ּҸ� �ٲٴ°�
	printf("%s, %s", good, bad);

	//bad[0] = 's'; //������ �ٲٴ°��� �Ұ�����

	bad = "new bad"; //�ּҸ� �ٲٴ°��� ������


	return 0;
}