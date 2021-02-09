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
	input(points);
	return 0;
	
}
void input(struct l points)
{
    struct cor p;
	struct l point;
    printf("enter x co-ordinate of point one");
	scanf("%f",&point.begin.x);
	printf("enter y co-ordinate of point one");
	scanf("%f",&point.begin.y);
	printf("enter x co-ordinate of point two");
	scanf("%f",&point.last.x);
	printf("enter y co-ordinate of point two");
	scanf("%f",&point.last.y);
    float a=calc(point);
	printf("%f is the distnace",x);
    
}

float calc(struct l points)
{
    float d=sqrt((points.begin.x-points.last.x)*(points.begin.x-points.last.x)+(points.begin.y-points.last.y)*(points.begin.y-points.last.y));
    return d;
}
