#include<stdio.h>
#include<math.h>
int main()
{
int num,num1,Num,reverse;
 printf("enter a number to be check is the number is an paalindrome");
 scanf("%d",&num);
 Num=num;
 reverse=0;
 while (num!=0) 
 {
  num1=num%10;
  num=num/10;
  reverse=reverse*10+num1;

 }  
 
 printf("testing out the reversing of %d to %d\n",Num,reverse);
}