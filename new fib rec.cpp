#include<stdio.h>
#include<conio.h>
int fib(int i)
{
	if(i<=1)
	{
		return i;
	}
	else
	{
		return fib(i-1)+fib(i-2);
	}
}
int main()
{
	int n,i;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("fibonaci series is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",fib(i));
	}
}
