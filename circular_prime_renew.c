#include<stdio.h>


int circular(int a)
{
 int circular(int a);
int b, c, d;
b = a;
c = 0;
 while (b != 0)
    {
        c++;
        b = b / 10;
    }
d = a % 10;
    a = a / 10;
    for (int z = 0; z < c - 1; z++)
    {
        d *= 10;
    }
    a = d + a;
    printf("%d\n",a);
    return a;
}



void  prime(int c)
{ 
  int a,b,q,l,a1;
  l=0;
  a1=c;
  q=0;
  a=c;
 while (a1!=0)
 {
   l++;
   a1=a1/10; 
 }
 for(int j=l; j!=0 ; j--)
  {
  a= circular(a);  
  b=0;
  for(int i=1;i<a;i++)
  {
    if(a%i==0)
    {
      b++;
    }
  } 
  if(b==1)
    {
        q++;
    } 
} 
if (q==l)
{
    printf("the given no. is a prime no.\n");
}
else 
{
 printf("the no. is not a circular prime\n") ;
}
}
 


int main()  
{
 void prime(int);
 int circular(int);
 int a ;
printf("enter a number ");
scanf("%d",&a);
prime(a);

}