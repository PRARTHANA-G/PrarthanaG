//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
	{
		int h,b,d;
		float volume;
		printf("enter values of h,b,d respectively");
		scanf("%d%d%d",&h ,&b,&d);
		volume=((h*b*d)+(d/b))/3;
		printf("volume is:%f",volume);
    return 0;
	}
