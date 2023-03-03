#include <stdio.h>

int main(int argc, char* argv[])
{
	char greeting[6] = {'h','e','l','l','o','\0'};
	char farewell[] = {"bye!"};

	char* str1 = greeting;
	char* str2 = &greeting[3];

	printf("%s\n", greeting);

	printf("%s\n", str1);

	printf("%s\n", str2);

	printf("size of greeting is %d\n", sizeof(greeting));
	printf("size of farewell is %d\n", sizeof(farewell));

	printf("size of str1 is %d\n", sizeof(str1));
	printf("size of str2 is %d\n", sizeof(str2));
	printf("size of &greeting[3] is %d\n", sizeof(&greeting[3]));
}
