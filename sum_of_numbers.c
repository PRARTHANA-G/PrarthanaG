#include<stdio.h>
int input();
int calc(int);
int print(int);
int main()
{
    input();
}
int input()
{
    int n;
    printf("enter total number of values whose sum needs to be found\n");
    scanf("%d",&n);
    calc(n);
	
    
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
	printf("the sum of %d different values is %d",n,sum);
	print(sum);

}
int print(int sum)
{
    printf("the sum of the above entered values is %d",sum);
}
