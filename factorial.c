#include<stdio.h>
#include<math.h>
int main ()
{
  int num,fact;
  printf("enter a number Vro\n");
  scanf("%d",&num);
  fact=1;
  int  n=num;
  while(n!=0)
    {
     fact*=n;
     n--;
    }
  printf("the factorial of the no.%d is given %d\n ",num,fact);

}