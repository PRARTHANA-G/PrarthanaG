//Write a program to find the sum of n different numbers
#include<stdio.h>
int main()
{
	int n,i,sum=0,a[100];
	printf("enter the total number of values n");
	if (n>0)
		scanf("%d",&n);
	else
		printf("enter a valid whole number");
	for(i=0;i<n;i++)
	{
		printf("enter %d value",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum + a[i];
	}
	printf("the sum of %d different values is %d",n,sum);
}
