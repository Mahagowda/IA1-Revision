#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int ans;
  ans = 0;
  for(int i=1;i<=n;i++)
{
    ans+=i;
}
  return ans;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",n,sum);
}
int main()
{
  int n,sum;
  n = input_n();
  sum = sum_n(n);
  output(n,sum);
  return 0;
}