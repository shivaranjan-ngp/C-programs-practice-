#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,sum;
    printf("enter a number \n");
    scanf("%d",&num);
     sum=0;
     n=0;
    while(sum<num)
    {
     n++;
     sum+=n;
    }
    if  (sum==num)
    {
        printf("the given number  %d is an example of tirangular  no.\n",num);
    }
    else
    {
       printf("the given no. is no t an example of triangualr no.as it wants to be an social oucast the mc of an isekai anime \n")  ;
    }
    printf("the summantion of the numbers is given by %d\n ",sum);
}