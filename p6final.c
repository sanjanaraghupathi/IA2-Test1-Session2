 #include<stdio.h>
void input_string(char *a)
{
  scanf("%s",a);
}
void str_revers(char *a, char *r)
{
  int x=0;
  for(int i=0;a[i]!=0;i++)
    {
      x=x+1;
    }
  for(int i=0;i<x+1;i++)
    {
      r[i]=a[x-i-1];
    }
}
void output(char *a,char *revers)
{
  printf("%s reversed is %s\n",a,revers);
}
int main()
{
  printf("enter the string \n");
  char a[20],r[20];
  input_string(a);
  str_revers(a,r);
  output(a,r);
  return 0;
}