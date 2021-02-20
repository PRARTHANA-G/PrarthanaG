#include<stdio.h>
#include<stdlib.h>
int commondivisor(int,int);
typedef struct fraction
{
	int num;
	int denom;
}fraction;
fraction input()
{
    
    struct fraction f;
	printf("enter numerator and denominator of  fraction in that order\n");
	scanf("%d%d",&f.num,&f.denom);

	return f;
}


fraction sum(struct fraction f1,struct fraction f2)
{
    int d=commondivisor(f1.denom,f2.denom);
    fraction add={(f1.num*f2.denom+f2.num*f1.denom)/d, 
    (f1.denom*f2.denom)/d};
    
    return add;
}
int main()
{
	
struct fraction f1,f2,result;
f1=input();
f2=input();
result=sum(f1,f2);
printf("The sum of these two fractions is:\n%d/%d",result.num,result.denom);
	
	
}
int commondivisor(int a, int b)
{
    int hcf;
    for(int i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
        {
             hcf = i;
        }
    }
    return hcf;
}


