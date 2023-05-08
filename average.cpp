#include<stdio.h>
#include<conio.h>
int main()
{
	int score;
	int n;
	int average;
	int sum=0;
	printf("enter the no of students:");
	scanf("%d",&n);
	int n1=1;
	while(n1<=n)
	{
		printf("enter the scores:");
		scanf("%d",&score);
		sum+=score;
		n1=n1+1;
	}
	average=sum/n;
	printf("%d",average);
}
