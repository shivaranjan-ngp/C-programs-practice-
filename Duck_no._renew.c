#include<stdio.h>
void check(int a)
{
 int l=0,a1;
 a1=a;
 while (a1!=0)
 {
  l++;
  a1/=10;
 }
 for(int i=0;i<l;i++)
 {
  int x=0;
  x=a%10;
  if(x==0)
  {
    printf("the given number is a duck number");
    return ;
  }
    a=a/10;
 }
 printf("the given number is not a duck number ");

}
int main()
{
 void check(int );
 int a;
 printf("enter the number");
 scanf("%d",&a);
 check(a);
}