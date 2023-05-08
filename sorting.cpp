#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int i;
	int j;
	int temp;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		temp=a[i];
		for(j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
			a[i]=a[j];	
			a[j]=temp;
			temp=a[i];
		}
		}
	}
		for(i=0;i<=n;i++)
		{
			printf("%d",a[i]);
		}
}
