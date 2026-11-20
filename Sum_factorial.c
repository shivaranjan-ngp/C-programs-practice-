#include<stdio.h>
void fact(int n)
{
int sum=0;
for (int i=1;i<=n;i++)
{
    int fact=1;
    for(int j=1;j<=i;j++)
    {
        fact*=j;
    }
 printf("%d ",fact);
sum+=fact;

}
printf("\nthe sum of the factorial will be given %d \n",sum);


}
int main()
{
    int n;
    printf("enter the number of terms in the sequence");
    scanf("%d",&n);
    fact(n);
}