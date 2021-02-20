//WAP to find the sum of two fractions.
#include<stdio.h>
#include<stdlib.h>
typedef struct fraction
{
	int num;
	int denom;
}fraction;
fraction input1()
{
    
    struct fraction f1;
	printf("enter numerator and denominator of first fraction in that order\n");
	scanf("%d%d",&f1.num,&f1.denom);

	return f1;
}
fraction input2()
{
    //int n2,d2;
    struct fraction f2;
    printf("enter numerator and denominator of fraction two\n");
	scanf("%d%d",&f2.num,&f2.denom);
	//f2={n2,d2};
	return f2;
}
int main()
{
	
struct fraction f1,f2;
f1=input1();
f2=input2();
	
	res(f1,f2);
}
void res(fraction f1,fraction f2)
{
if(f1.denom==f2.denom){
    fraction r={f1.num+f2.num,f1.denom};
    printf("result is %d/%d",r.num,r.denom);
}

}

