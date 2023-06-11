#include<stdio.h>
#include<conio.h>
int fact(int x)
{
	return x*fact(x-1)
}	
int main()
{
	fact(5)
}
