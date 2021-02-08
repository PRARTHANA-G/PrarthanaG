//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
float clac(struct,struct);
struct cor
{
	float x,y;
}
int main()
{
	struct cor p1,p2;
	printf("enter co-ordinates of first point p1");
	scanf("%f%f",&p1.x,&p1.y);
	printf("enter co-ordinates of second point p2");
	scanf("%f%f",&p2.x,&p2.y);
	calc( p1, p2);
}
float calc(struct cor p1,struct cor p2)
{
	float dist=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	printf("distance is %f",dist);
}
