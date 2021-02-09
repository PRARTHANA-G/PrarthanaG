//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct cor
{
	float x,y;
};
struct l{
    struct cor begin;
    struct cor last;
};
float calc(struct l);
int xinput();
int yinput();

int main()
{
     struct cor p;
	struct l points;
	float dist;
	input1();
	input2();
	dist= calc(points);
	printf("distance is %f",dist);
	return 0;
	//calc( p1, p2);
}
int input1()
{
    struct cor p;
	struct l points;
    printf("enter x co-ordinate of point 1");
	scanf("%f",&points.begin.x);
	printf("enter y co-ordinate of point 1");
	scanf("%f",&points.begin.y);
    
}
int input2()
{
    struct cor p;
	struct l points;
    printf("enter x co-ordinate of point 2");
	scanf("%f",&points.last.x);
	printf("enter y co-ordinate of point 2");
	scanf("%f",&points.last.y);
}
float calc(struct l points)
{
    float d=sqrt((points.begin.x-points.last.x)*(points.begin.x-points.last.x)+(points.begin.y-points.last.y)*(points.begin.y-points.last.y));
	return d;
    
}
