//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input(int,int);
int calc(int,int);
int output(int);
int main()
{
	int a,b;
	input(a,b);
	return 0;
}
int input(int a, int b)
{
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	calc(a,b);
}
int calc(int a, int b)
{
	int sum=a+b;
	output(sum);
}
int output(int sum)
{
	printf("the sum is %d",sum);
}
