#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a;
	int n1,n3,n2;
	printf("eneter the number\n");
	scanf("%d",&a);
	n=0;
	n1=1;
	printf("%d %d\n\n",n,n1);
	n3=n1+n;
	n2=2;
	while(n2<=a)
	{
		n3=n+n1;
		n=n1;
		n1=n3;
		n2++;
		printf("%d\n",n3);
	}
	
}
