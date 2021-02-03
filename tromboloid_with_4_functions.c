//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input(float,float,float);
float calc(float,float,float);
float output(float);
int main()
{
	float h,b,d;
	printf("Enter values of h,b,d respectively");
	input(h,b,d);
	return 0;
}
float input(float h, float b,float d)
{
	scanf("%f%f%f",&h,&b,&d);
	calc(h,b,d);
}
float calc(float h,float b, float d)
{
	float vol=((h*b*d)+(d/b))/3;
	output(vol);
}
float output(float vol)
{
	printf("%f is the volume",vol);
}
