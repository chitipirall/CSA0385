#include <stdio.h>
int fib(int n) 
{
  if (n<=1)
  	return n;
return fib(n-1)+fib(n-2);
}
int main()
{
	int n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	{
		printf("%d",fib(n-1));
	}
}
