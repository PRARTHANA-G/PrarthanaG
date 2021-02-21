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
    int s,d;
    d=commondivisor(f1.denom,f2.denom);
    fraction add={(f1.num*f2.denom+f2.num*f1.denom)/d, 
    (f1.denom*f2.denom)/d};
    s=commondivisor(add.num,add.denom);
    fraction final={(add.num)/s,add.denom/s};
    
    return final;
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
    if(b==0){
        return a;
    }
    
    return commondivisor(b,a%b);

}



