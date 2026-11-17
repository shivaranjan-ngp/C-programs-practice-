#include<stdio.h>
void sort(int c,int a[c])
{
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
printf("the sorted list is given by");
for(int k=0; k<c;k++)
{
    printf("%d ",a[k]);
}
}
int main()
{
 int c;
 printf("enter the size of the array\n");
 scanf("%d",&c);
 int a[c];
 enter("%d elements into the array",c);
 for(int i=0;i<c;i++)
 {
  scanf("%d",&a[i]);
 }
sort(c,a);
}