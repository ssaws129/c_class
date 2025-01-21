#include <stdio.h>


int main()
{

	char string_text[] = "안녕하세요!"; //한글은 한글자당 2바이트라서 2*5 + 느낌표 +null / utf-8 인코딩 형식으로 한글2바이트로 저장
	//char = 1바이트

	printf("문자열 변수 string_text의 길이는 : %zd\n", sizeof(string_text));

	char english_text[] = "hello!";
	printf("영어 문자열길이는 : %zd\n", sizeof(english_text));


	char  long_text[50] = "This is long";
	printf("문자열 변수 long_text의 길이는 : %zd\n", sizeof(long_text));

	/*printf("배열 long_text에 초기화된 문자열의 길이 : %zd\n", strlen((long_text)); *///초기화가 된 값의 길이만 출력 =12
	printf("%s\n", long_text);

	char name[30] = "My name is 형준";
	printf("%s\n", name);
	name[10] = '\0';
	printf("%s\n", name);

	char scanfs_string[50];

	//printf("scanfs_string 문자열을 입력하세요 : ");
	//scanf_s("%s", scanfs_string, (unsigned int)sizeof(scanfs_string)); //scanf_s 에서 문자열을 사용할때 &안써도됨
	//printf("%s \n", scanfs_string);

	char gets_string[50];
	printf("gets_s로 문자열을 입력하세요 : ");
	gets_s(gets_string, sizeof(gets_string)); //문자열에만 특화됨
	printf("%s\n", gets_string);
	return 0;
}