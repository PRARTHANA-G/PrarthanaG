
#include<stdio.h>
#include<stdlib.h>
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

int commondivisor(int a, int b)
{
   if (b == 0)
   {
      return a;
   }
   return commondivisor(b,b%a);
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

