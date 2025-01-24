#include <stdio.h>



int main()
{

		
	
	char good[] = "good";
	char* bad = "bad";


	good[0] = 'H'; //내용을 바꾸는것
	//good = "new good"; //주소를 바꾸는것
	printf("%s, %s", good, bad);

	//bad[0] = 's'; //내용을 바꾸는것이 불가능함

	bad = "new bad"; //주소를 바꾸는것이 가능함


	return 0;
}