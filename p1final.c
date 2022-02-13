#include <stdio.h>
void input(float *base,float *height)
{
 printf("Enter first number\n");
  scanf("%f",base);
  printf("Enter second number\n");
  scanf("%f",height);
}
void find_area(float base,float height,float*area)
{
  *area = (base*height)/2;
}
void output(float base,float height,float area)
{
  printf("area of the triangle is %f\n",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}

