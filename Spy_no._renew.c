#include<stdio.h>
void pro(int a)
{
    int sum,pro,l;
    sum=0;
    pro=1;
    l=0;
    int a1=a;
    while ( a1!=0)
    {
      l++;
      a1/=10;
    }
    printf("%d",l);
    for(int i=0;i<l;i++)
    {
      int x=0;
      x=a%10;
      a/=10;
      sum+=x;
      pro*=x;  
      printf("%d",x);
    }
    printf("%d",pro);
     printf("%d",sum);
    if (sum==pro)
    {
     printf("the given number is  a spy number");

    }
    else 
    {
        printf("the given number is not an example for spy no.");
    }
}
int main()
{
    void pro(int);
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    pro(a);
}