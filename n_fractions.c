//WAP to find the sum of n fractions.
#include<stdio.h>
struct frac{
int n;
int d;
}
void print(struct frac b)
{
	struct frac r;
	r.n=b.n*b.d+b.n*b.d;
	r.d=b.d*b.d;
	printf("%d/%d",r.n,r.d);
}
int main()
{
int i,num;
printf("enter number of fractions");
scanf("%d",&num);
int a[num],b[];
for(i=0;i<num;i++)
{
printf("enter %d fraction numerator",i+1);
scanf("%d",&a[i]);
printf("enter %d fraction denominator",i+1);
scanf("%d",&b[i]);
}
int lcm()
{
int x=ar[0];
for(i=0;i<n;i++)
{
x=ar[i]*a[i+1];
return x;
}
