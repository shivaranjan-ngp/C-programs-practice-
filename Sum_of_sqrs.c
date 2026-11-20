#include<stdio.h>
void sqr(int n)
{
    int sum=0;
    printf("the sequence of numbers is given by\n");
    for (int i=1;i<=n;i++)
    {
int sqr=0;
sqr=i*i;
printf("%d ",sqr);
sum+=sqr;
    }
    printf("\nthe sum of the n terms of the series is given by %d\n",sum);
}
int main()
{
int n;
printf("enter the number till which the sequennce should be generated ");
scanf("%d",&n);
sqr(n);
}