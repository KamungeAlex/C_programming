#include <stdio.h>
int main(void)
{
	int i , numberOfNums=0, total=0, valsRead, value;
	float average;

	valsRead = scanf("%d", &value);
	while(valsRead >0)
	{
		numberOfNums++;
		total += value; // equivalent to total = total + value;
		printf("Read %d\n", value);
		valsRead = scanf("%d", &value);
	}

	average = (float)total / (float)numberOfNums;
	printf("You read %d values. Average = %f.\n",numberOfNums, average);
	return(0);
}
