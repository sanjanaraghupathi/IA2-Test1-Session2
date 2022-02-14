#include <stdio.h>
int input_side()
{
  int x;
  printf("Enter the side of the triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a==b||a==c)
  {
    return 1;
  }
  else if(b==a||b==c)
  {
    return 2;
  }
  else if (c==a||c==b)
  {
    return 3;
  }
  else
  {
    return 4;
  }
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
  {
    printf("not a scalene triangle\n");
  }
  
    else if (isscalene==2)
    {
      printf("not a scalene triangle\n");
    }
    else if (isscalene==3)
    {
      printf("not a scalene triangle\n");
    }
    else
    {
      printf("is a scalene triangle\n");
    }
  }
    int main()
  {
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene =check_scalene(a,b,c);
    output(a,b,c,isscalene);
  }
  