#include<stdio.h>
#include<math.h>

void input(float *x1,float *x2,float *y1,float *y2)
{
  printf("Enter the values of x1,y1,x2,y2\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}

void find_distance(float x1, float y1,float x2,float y2,float distance)
{
  *distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}

void output(float x1, float y1,float x2,float y2,float distance)

