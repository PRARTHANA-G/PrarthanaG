#include<stdio.h>
struct fraction
{
    int n;
    int d;
};
struct fraction one_input()
{
    struct fraction i;
    printf("Enter fraction- Numerator followed by denominator:\n");
    scanf("%d%d",&i.n,&i.d);
    return i;
}
struct fraction n_input(int n,struct fraction a[n])
{
    //struct fraction a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=one_input();
    }
}
int commondovisor(int a,int b)
{
    int hcf=1,temp;
    if ( a<b) 
    {
      temp=a;
      a=b;
      b=temp;
    }
    if ( a%b==0) 
     return b;

    for (int i = 2;i <= b/2; i++)
    {

      if (a % i == 0 && b % i == 0)
	        hcf = i;
    }
  return hcf;

}
struct fraction one_compute(struct fraction f1,struct fraction f2)
{
    struct fraction f;
    f.n=(f1.n*f2.d)+(f2.n*f1.d);
    f.d=f1.d*f2.d;
    //struct fraction f={(f1.n*f2.d+f2.n*f1.d), 
    //(f1.d*f2.d)};
    return f;
}
struct fraction n_compute(int n,struct fraction a[n])
{
    struct fraction sum;
    sum.n=0;//sum is initialized to 0.
    sum.d=1;
    for(int i=0;i<n;i++)
    {
        sum=one_compute(a[i],sum);
    }
    int divisor=commondovisor(sum.n,sum.d);
    struct fraction result={sum.n/divisor,sum.d/divisor};
    return result;
}
struct fraction print(struct fraction result)
{
    printf("The sum is:\n%d/%d",result.n,result.d);
    
}
int main()
{
    int n;
    printf("Enter number of fractions\n");
    scanf("%d",&n);
    struct fraction a[n],add;
    n_input(n,a);
    add=n_compute(n,a);
    print(add);
    
}
