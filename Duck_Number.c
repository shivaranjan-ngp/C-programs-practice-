#include<stdio.h>
int main()
{
 int num,n,n1,n2,n3,length,x,zero;
 printf("enter a no. vro\n");
 scanf("%d",&num);
 n=num;
 n1=num;
 zero=0;
 length=0;
  printf("the digits of the no. is given by\n");
 while (n!=0)
 {
    length++;
    n=n/10;
 }
while (n1!=0)
{
  n2=n1%10;
  n1=n1/10;
  printf("%d\n",n2);
  if(n2==0)
  {
    zero++;
    printf("the zero is present at %d \n",length);
  }
  length--;
 
}
if(zero>0)
{
  printf("the given no. is an example od duck no.\n") ; 
}
else
{
 printf("the given number is not a duck but an \n !!GUOSSE!!\n");
}
printf("the number of zero's in the given number is given by %d\n",zero);
}
