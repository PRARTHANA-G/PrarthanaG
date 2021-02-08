//WAP to find the sum of two fractions.
#include<stdio.h>
#include<stdlib.h>
//int res(int,int);
typedef struct fraction
{
	int numerator;
	int denominator;
}fraction;
int main()
{
	int n1,d1,n2,d2;
	printf("enter numerator and denominator of first fraction in that order\n");
	scanf("%d%d",&n1,&d1);
	printf("enter numerator and denominator of fraction two\n");
	scanf("%d%d",&n2,&d2);
	fraction f1={n1,d1};
	fraction f2={n2,d2};
	res(f1,f2);
}
void res(fraction f1,fraction f2)
{
if(f1.denominator==f2.denominator){
    fraction r={f1.numerator+f2.numerator,f1.denominator};
    printf("result is %d/%d",r.numerator,r.denominator);
}
else
{
fraction r={f1.numerator*f2.denominator+f2.numerator*f1.denominator,f1.denominator*f2.denominator};
printf("result is %d/%d",r.numerator,r.denominator);
}
}

