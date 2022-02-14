#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
   Triangle Triangle1;
  printf("Enter the value of base and altitude\n");
scanf("%f%f",&Triangle1.base,&Triangle1.altitude);
return Triangle1;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("The area of triangle with base %f and altitude %f if %f\n",t.base,t.altitude,t.area);
}
int main()
{
  
  Triangle t;
  t =input_triangle();
  find_area(&t);
  output(t);
  return 0;
}