#include<stdio.h>
void prime(int n)
{
    printf("the prime numbers from 0 to %d are:\n",n);
    for(int i=1;i<=n;i++)
{
    int fact=0;
    for(int j=1;j<=i;j++)
    {
        if (i%j==0)
        {
          fact++;
        }
    }
    if (fact==2)
    {
        printf("%d ",i);
    }
}

}

int main()
{
    int n;
    printf("enter the number till where the prime numbers should be displayed");
    scanf("%d",&n);
    prime(n);
}