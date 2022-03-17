#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct  _triangle Triangle;
int input_n()
{
  int n;
  printf("enter number of triangles\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle Triangle;
  printf("enter the base and altitude of the triangle\n ");
  scanf("%f %f",&Triangle.base,&Triangle.altitude);
  return Triangle;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    t[i]=input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n,Triangle t[n])
{
  
  for(int i=0;i<n;i++)
    {
      find_area(&t[i]); 
      }
  }
Triangle find_smallest_triangle(int n,Triangle t[n])
{
  int min=0;
  for(int i=0;i<n;i++)
    {
      if(t[min].area>t[i].area)
      {
        min=i;
      }
    }
  return t[min];
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("the smallest of the triangle with base and height \n");
  for(int i=0;i<n;i++)
    {
      printf("%f,%f\n",t[i].base,t[i].altitude);
      }
  printf(" is the triangle with base =%f and altitude=%f\n",smallest.base,smallest.altitude);
  printf("and has an an area=%f\n",smallest.area);
}
int main()
{
  int n;
  n=input_n();
  Triangle t[n],smallest;
  input_n_triangles(n,t);
  find_areas_n(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}


