#include<stdio.h>
#include<math.h>
int main ()
{
int num,n,sum;
 printf("enter a number \n");
 scanf("%d",&num);
 n=1;
 sum=0;
 printf("\nthe divisors are\n");
while(n<num)
{
  if(num%n==0)
  {
   printf("%d\n",n);
   sum+=n; 
  } 
  n++;
}
if (sum==num)
{
   printf("the given number %d is an perfect no.\n",num); 
}
else
{
 printf("the given no. is not an perfect no. \n as no one in the world is perfect\n") ; 
}
printf("the sum of the no. that was discovered is given by %d\n  ",sum);
}