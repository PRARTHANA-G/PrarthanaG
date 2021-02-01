//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
	{
		
		float volume,h,b,f,d;
		printf("enter values of h,b,d respectively");
		scanf("%f%f%f",&h ,&b,&d);
		volume=((h*b*d)+(d/b))/3;
		printf("volume is:%f",volume);
		return 0;
	}
