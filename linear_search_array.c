#include<stdio.h>
int search(int c,int a[c],int n)
{
 for (int i=0;i<c;i++)
 {
  if(a[i]==n)
  {
    return i;
  }
 }
 return -1;
}
int main()
{
int c;
printf("enter the size of the array\n");
scanf("%d",&c);
int a[c] ;
printf("enter %d elements into the array",c);
for(int i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
int n;
printf("enter the number to return it's index value");
scanf("%d",&n);
if(search(c,a,n)==-1)
{
 printf("the given number is not present in the array");
}
else
{
printf("the index value for the required number is given by %d",search(c,a,n));
}
}