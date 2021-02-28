#include<stdio.h>
typedef struct fraction 
{
    int num;
    int denom;
}f;
int gcd(int a,int b)
{
     int hcf;
  for (int i = 2; i <= a && i <= b; i++)
    {

      if (a % i == 0 && b % i == 0)
	hcf = i;
    }
  return hcf;
}
f input(int n)
{
    //int n;
    struct fraction f[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter value of %d fraction",i+1);
        scanf("%d%d",&f[i].num,&f[i].denom);
        
    }
    return f[n];
    
}
f add(struct fraction f[],int n)
{
     struct fraction sum;
     int hcf;
    for(int i=0;i<n;i++)
    {
    
       struct fraction sum={((f[i].num*f[i+1].denom)+(f[i+1].num*f[i].denom)),(f[i].num*f[i+1].denom)};
    }
     hcf=gcd(sum.num,sum.denom);
     //sum={((f[i].num*f[i+1].denom)+(f[i+1].num*f[i].denom))/hcf,(f[i].num*f[i+1].denom)/hcf};
     struct fraction result={sum.num/hcf,sum.denom/hcf};
    
    return result;
}

void print(struct fraction sum)
{
    printf("sum is %d/%d",sum.num,sum.denom);
}
int main()
{
    int n,a;
    struct fraction f[n];
    struct fraction sum;
    printf("Enter value of n:");
    scanf("%d",&n);
    f[n]=input(n);
    sum=add(f,n);
    print(sum);
}
    



