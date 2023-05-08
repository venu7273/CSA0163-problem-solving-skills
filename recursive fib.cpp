#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	int n1=0;
	int n2=1;
	int n3;
	int n4=2;
	printf("%d\n%d\n",n1,n2);
	while(n4<n)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		n4++;
		printf("%d\n",n3);
	}

	
}
