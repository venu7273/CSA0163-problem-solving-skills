#include<stdio.h>
#include<conio.h>
int main()
{
	int n1;
	printf("enter the number\n");
	scanf("%d",&n1);
	int n=2;
	while(n<=n1)
	{
		printf("%d  ",n);
		n=n+2;
	}
}
