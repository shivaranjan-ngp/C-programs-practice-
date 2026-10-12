#include<stdio.h>
int main ()
{
int num,n,n1,sum,pro;
 printf("enter a number \n");
 scanf("%d",&num);
 sum=0;
 pro=1;
 n=num;
 printf("the given number is %d\n",num);
 printf("the digits in thenumber are:\n");
 while(n!=0)
 {
  n1=n%10;
  n=n/10;
  sum+=n1;
  pro*=n1;
printf("%d\n",n1);

 }
printf("the sum amd product of the digits in the number are given by :\n %d and %d \n ",sum,pro);
if (sum==pro)
{
 printf("the given no. is an spy no. YEAH ITS AN RUSSIAN SPY CAPTURE IT !!!!!!!!\n");   
}
else 
{
    printf("the given no. is not a Spy no.\n");
}
}