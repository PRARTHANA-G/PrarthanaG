#include<stdio.h>
int input();
int calc(int);
int print(int);
int main()
{   int x,y;
    x=input();
    y=calc(x);
    print(y);
    
}
int input()
{
    int n;
    printf("enter total number of values whose sum needs to be found\n");
    scanf("%d",&n);
    return n;
}
int calc(int n)
{
    int i,a[100],sum=0;
    for(i=0;i<n;i++)
	{
		printf("enter %d value",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum + a[i];
	}
	
	return sum;

}
int print(int sum)
{
    printf("the sum of the above entered values is %d",sum);
}
