#include<stdio.h>

void revese(int c ,int a[c],int lo,int hi)
{
while(lo<hi)
{
 int temp=a[lo];
 a[lo]=a[hi];
 a[hi]=temp;
 hi--;
 lo++;
}
}
void rotate(int c,int k,int a[c])
{
k=k%c;
 revese( c,a,0,k-1);
 revese( c,a,k,c-1);
 revese( c,a,0,c-1);
 printf("the array ater the rotation");
 for(int j=0;j<c;j++)
 {
    printf("%d ",a[j]);
 }
}
int main()
{
 int c,k;
 printf("enter the number of elements in the array");
 scanf("%d",&c);
 int a[c];
 printf("enter %d elements into the array",c);
 for (int i=0 ;i<c;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nenter the value of k to be rotated\n");
 scanf("%d",&k);
 rotate(c,k,a);
}