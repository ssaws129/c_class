#include <stdio.h>


int main()
{

	unsigned char ch; // 0~255 (-128 ~ 127)

	unsigned short sh; // 0~ 65535 ( -32768 ~ 32767)

	unsigned int in; // 0~ 4294967295 ( -21�� ~ 20�� ��)

	char num;

	num = 255;

	ch = 128; 

	sh = 50000;

	in =  4100000000;

	printf("%d\n", ch);

	printf("%d\n", sh);

	printf("%u\n", in); // %d ���� int �� ������ �ۿ� ���� %u �����

	printf("%d\n", num);

	return 0;
}