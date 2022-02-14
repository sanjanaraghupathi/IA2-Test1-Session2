#include <stdio.h>
int input()
{
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return x;
}
int gcd(int a,int b)
{
  int gcd;
  for(int n=1;n<=a&&n<=b;n++)
    {
      if(a%n==0&&b%n==0)
        gcd=n;
    }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("gcd of %d and %d is %d\n",a,b,gcd);
}
int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=( a, b);
  output(a,b,gcd);
  return 0;
}