#include<stdio.h>
int input()
{
  int a;
  printf("enter the values:");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if(a>b)
  {
    if(a>c)
    {
      return a;
    }
    else
    {
      return c;
    }
  }
  else{
   if(b>c)
   {
     return b;
   }
   else{
     return c;
   }
  }
}
void output(int largest)
{
  printf("the largest number is:%d\n",largest);
}
int main()
{
  int x,y,z,largest;
  x=input();
  y=input();
  z=input();
  largest=cmp(x,y,z);
  output(largest);
  printf("end od code");
  return 0;
}