#include<stdio.h>
#include<conio.h>
int main()
{
	int sum=0;
	int n;
	int rem;
	printf("enter the number:\n");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}
