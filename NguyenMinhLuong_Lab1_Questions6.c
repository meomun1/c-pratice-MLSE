#include<stdio.h>
int main()
{
	int x;
	int y;
	printf("Print x");
	scanf("%d", &x);
	printf("Print y");
	scanf("%d", &y);
	int c = x*y;
	int result;
	result = c*(3*c - 2*y - 7*x +15)+ y*(10-4*y)+ x*(2*x-3) + 6;
	printf("Result is %d", result);
}
