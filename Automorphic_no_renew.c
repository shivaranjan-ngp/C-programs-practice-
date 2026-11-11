#include<stdio.h>
#include<math.h>
int unit(int a)
{
 int sqr,b;
 b=1;
 sqr=pow(a,2);
 b=sqr%10;
 return b;

}
int main()
{
  int unit(int);
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  if (a==unit(a))
  {
    printf("the given number is an automorphic number");
  }  
  else
  {
   printf("the given number is not a automorphic number"); 
  }
}