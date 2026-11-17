#include<stdio.h>
int binary_search(int c,int a[c],int n)
{
    // sort 
for(int i=0;i<c;i++)
{
  for(int j=0;j<c-1;j++)
  {
    int temp=a[j];
    if (a[j]>a[j+1])
    {
        a[j]=a[j+1];
        a[j+1]=temp;
    }
  }
}
printf("the sorted array to perform the binary search is given by\n");
for (int i=0;i<c;i++)
{
printf("%d ",a[i]);
}
// search
int lo=0,hi=c-1;
while(lo<=hi)
{
int mid=(lo+hi)/2;
if (a[mid]==n)
{
    return mid;
}
else if (a[mid]>n)
{
 hi=mid-1;
}
else
{
lo=mid+1;
}
}
return -1;
}

int main()
{
int c;
printf("enter the number of elements in the array\n");
scanf("%d",&c);
int a[c];
printf("enter the %d elements\n",c);
for(int i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
int n;
printf("enter the number whose index you want to find\n");
scanf("%d",&n);
int s=binary_search(c,a,n);
if (s==-1)
{
    printf("\nthe given number is not the part of the array\n");
}
else
{
printf("the index value of %d is %d after the list has been sorted\n",n,s);
}
}

