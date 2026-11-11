#include<stdio.h>
int fact(int a )
{
  int l,sum,a1;
  l=0;
  sum=0;
  a1=a;
  while(a1!=0)
  {
   l++;
   a1/=10;
  }  
  printf("%d\n",l);
  for(int i=0;i<l;i++)
  {
    int x=0 ;
    int fact=1;
    x=a%10;
    printf(" %d\n",x);
    a/=10;
    for(int j=1;j<=x;j++)
    {
      fact=fact*j;
    }
    printf("%d\n",fact);
    sum+=fact;
  }
  return sum;
}
int main()
{
 int fact(int);
 int a;
 printf("enter the value of number\n ");
 scanf("%d",&a);
 if (a==fact(a))
 {
   printf("the given number is a Strong number\n");
 }
 else
 {
    printf("not an example of strong number\n ");
 }
}