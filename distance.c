//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
float input(float,float,float,float);
float calc(float,float,float,float);
float output(float);
int main()
{
	float x1,x2,y1,y2;
	input(x1,x2,y1,y2);
}

float input(float x1,float x2,float y1,float y2)
{
	printf("enter values of x1 and x2");
	scanf("%f%f",&x1,&x2);
	printf("enter values of y1 and y2");
	scanf("%f%f",&y1,&y2);
	calc(x1,x2,y1,y2);
}
float calc(float x1,float x2,float y1,float y2)
{
	float dist=sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
	output(dist);
}
float output(float dist)
{
	printf("%f is the distance between the points",dist);
}
	
