#include<stdio.h>

void reverse(int c,int a[c])
{
 printf("the array before the reverse\n");
 for (int i=0;i<c;i++)
 {
    printf("%d ",a[i]);
 }
 
for (int i=0;i<c/2;i++)
{
  int temp;
  temp=a[i];
  a[i]=a[c-i-1];
  a[c-i-1]=temp;
}
printf("the array after reversing the string\n");
for (int i=0;i<c;i++)
 {
    printf("%d ",a[i]);
 }
}
int main()
{
 int c;
 printf("enter the number of elements in the array");
 scanf("%d",&c);
 int a[c];
 printf("enter %d elements into the array",c);
 for (int i=0 ;i<c;i++)
 {
  scanf("%d",&a[i]);
 }
 reverse(c,a);
}