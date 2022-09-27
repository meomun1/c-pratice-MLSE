#include<stdio.h>
int main()
{
	int number, max, min, count = 0;
	do
	{
		printf("Type your number: ");
		scanf("%d", &number);
		if(count == 0)
		{
			max = number;
			min = number;
		}
		if(number > max)
		{
			max = number;
		}
		if(number < min && min != 0)
		{
			min = number;
		}
		count++;
	}while(number != 0);
	printf("Max is: %d\n", max);
	printf("Min is: %d", min);
}
