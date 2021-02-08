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

int main()
{
	struct cor p;
	struct l points;
	float dist;
	printf("enter x co-ordinate of point 1");
	scanf("%f",&points.begin.x);
	printf("enter y co-ordinate of point 1");
	scanf("%f",&points.begin.y);
	printf("enter x co-ordinate of point 2");
	scanf("%f",&points.last.x);
	printf("enter y co-ordinate of point 2");
	scanf("%f",&points.last.y);
	dist= calc(points);
	printf("distance is %f",dist);
	return 0;
	//calc( p1, p2);
}
float calc(struct l points)
{
    float d=sqrt((points.begin.x-points.last.x)*(points.begin.x-points.last.x)+(points.begin.y-points.last.y)*(points.begin.y-points.last.y));
    return d;
}
