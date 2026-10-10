#include<stdio.h>
#include<math.h>
int main ()
{
  int num,fact,n,NUM,sum;
  printf("enter a number Vro\n");
  scanf("%d",&num);
  NUM=num;
  sum=0;
  while (num!=0)
  {
    fact=1;
    n=num%10;
    num=num/10;
    while(n!=0)
    {
     fact*=n;
     n--;
    }
    sum+=fact;
  }
  if (NUM==sum)
  {
    printf("the given number %d is an example of strong no.\n",NUM);
  }
  else
  {
   printf("great mf the fucking code doesn't work or it does bcz u have entered an no. ehich is not an example for storng no.");
  }
  printf("the sum is %d \n ",sum);

}