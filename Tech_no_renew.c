#include<stdio.h>
int tech(int a)
{
 int l,a1,sum,sqr;
l=0;
sum=0;
sqr=1;
a1=a;
while(a1!=0)
{
l++;
a1/=10;
}
printf("%d\n",l);
if (l%2!=0)
{
 printf("the given number doesn't hav even number of digits\n");
 return 0;
}
//split 
int a2,x,a3;
x=0;
for(int i=0;i< l/2;i++)
{
 a2=a%10;
 x=x*10+a2;
 a/=10;
}

//reverse
int rev=0,y=0;
for(int j=0;j<l/2;j++)
{
a3=0;
a3=x%10;
x/=10;
rev=rev*10+a3;
y++;
}
printf("%d\n",rev);
sum=a+rev;
printf("%d\n",sum);
sqr=sum*sum;
return sqr;
}

int main()
{
 int tech(int);
 int a;
 printf("enter the number\n");
 scanf("%d",&a);
 if (a==tech(a))
 {
    printf("the given number is a tech  number\n");
 }
else
{
    printf("the given number is not techy\n");
}
}