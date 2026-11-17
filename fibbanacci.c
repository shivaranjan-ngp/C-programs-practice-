 #include<stdio.h>
 void fib(int n)
{
 int a=0;
 int b=1;
 int sum=0;
 printf("the fibbanacci series is given by\n");
 if(n==1)
 {
    printf("%d",a);
    sum+=a;
 }
 else if(n==2)
 {
    printf("%d %d",a,b);
    sum=a+b;
 }
 else
 {
 sum=a+b;
 printf(" %d %d",a,b);
 for(int i=0;i<=n-2;i++)
 {
    int temp=a;
    a=b;
    b=b+temp;
    printf(" %d",b);
    sum+=b;
 }
 }
 printf("the sum of the fib numbers is given by %d\n",sum);
}

int main()
{
 int n;
 printf("enter the number of fibanancii numbers\n");
 scanf("%d",&n);
 fib(n);
}