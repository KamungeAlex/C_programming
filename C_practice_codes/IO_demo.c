#include <stdio.h>
int main(void)
{
	char f,m,l;
	int age;

	printf("Enter your name initials, followed by your age: ");
	scanf("%c %c %c",&f, &m, &l, &age);
	printf("my initials are: %c%c%c and my age is %d.\n",f,m,l,age);
	return(0);
}	
