#include<stdio.h>
int input_number()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
  int c;
  for(int i=1;i<=n;i++)
    {
      if(n%i==0)
        c=c+1;
    }
  if(c>2)
  {
    return 1;
  }
  else
  {
    return 2;
  }
  }
void output(int n, int composite)
{
  if(composite==1)
  {
    printf("the number is composite\n");
  }
  if(composite==2)
  {
    printf("the number is not composite");
  }
}
int main()
{
  int n,composite;
  n=input_number();
  composite=is_composite(n);
  output(n,composite);
  return 0;
}