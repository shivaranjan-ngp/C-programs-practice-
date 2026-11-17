#include<stdio.h>
int prime(int a)
{  // if we observe for composite number they willl always have a factor that 
    //is half of their value hence we can just check for its factors btw 2 and a/2 
    for (int i=2;i<=a/2;i++)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(prime(a)==0)
    {
        printf("the given number is not  prime\n");
    }
    else
    {
        printf("the given number is a prime\n");
    }
}