#include<conio.h>
#include<stdio.h>
int main()
{
	int n,i,j,large;
	printf("enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:%d ");
	for(i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				large=a[i];
				
			}
		}
	}
	printf("%d",large);
}
