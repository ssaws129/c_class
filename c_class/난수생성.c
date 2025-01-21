#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


	/*printf("");*/

	/*
	rand(), srand(), time()
	*/

	int rad;
	srand((unsigned)time(NULL)); //NULL = 0                                                                                                      
	rad = rand() % 100 + 1; // RAND_MAX = 0~32767이 사이의 랜덤의 수를 뽑아내는것
	printf("%d\n", rad);

	return 0;
}