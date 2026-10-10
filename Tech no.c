#include<stdio.h>
#include<math.h>
int main()
{
 int num,n,n1,length,digits1,digits2,check,sum,sqr,size,power;
 printf("enter a number with even no. of digits\n");
 scanf("%d",&num);
 n=num;
 n1=num;
 length=0;
 digits1=0;
 sum=0;
 while(n!=0)
 {
  length++;
  n=n/10;
 }
 check=length%2;
 if(check==0)
 {
  size=length/2;  
  power=pow(10,size);
  digits1=n1%power;
  n1=n1/power;
  digits2=n1;
  sum=digits1+digits2;
  sqr=sum*sum;
  if(sqr==num)
  {
    printf("the given number %d is an Tech no.\n",num);
  }
  else
  {
    printf("the given number is not an example of Tech number");
  }
  printf("the two digits are %d+%d\n",digits1,digits2);
  printf("their sum is  given by %d and the square of thier sum is given by %d\n",sum,sqr);
 }
else 
{
    printf("i told you to enter a number with even digit of numbers BAKA!!!!!!");
}
}