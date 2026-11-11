#include<stdio.h>
#include<math.h>
int neon(int a)
{
  int sum=0,sqr=1;
  sqr=pow(a,2);
  while(sqr!=0)
  {
   int x=0;
   x=sqr%10;
   sum+=x;
   sqr/=10; 
  }
  return sum;
}
int main()
{
  int neon(int);
  int a;
  printf("enter the number");
  scanf("%d",&a);
  if(a==neon(a))
  {
    printf("the given number is a neon");
  }
  else{
    printf("the given no. is not a neon number ");
  }
}
