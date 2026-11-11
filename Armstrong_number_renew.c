#include<stdio.h>
#include<math.h>
int armstrong(int a)
{
  int l,sum,a1;
  a1=a;
  l=0;
  sum=0;

  while(a1!=0)
  {
    l++;
    a1=a1/10;
  }  
 for(int i=0;i<l;i++)
 {
   int x=0;
   x=a%10;
   sum+=pow(x,l);
   a=a/10; 
 }
 return sum ;
}
int main()
{
 int armstrong(int);
 int a,s;
 printf("enter a no.\n");
 scanf("%d",&a);
 s=armstrong(a);
 if (a==s)
 {
 printf("the number is an armstrong number\n");
 }
 else
 {
printf("the number is not an armstrong number\n");
 }
}