#include<stdio.h>
int main ()
{
 int max(int a[100],int); 
 void sumarray(int a[100],int);
 int min(int a[100],int); 
 int a[100];
 int count;
 printf("enter the amount of values you want to input into the array\n");
 scanf("%d",&count);
 if (count>=0 && count<100)
 {
 printf("enter  %d elements \n",count);
 for(int i=0;i<count;i++)
 {
  scanf("%d",&a[i]);
 }
 sumarray(a,count);
printf("the max in the fuction is given by %d\n",max(a,count));
printf("the min in the  arrays is givng by %d\n",min(a,count));
}
 else
 {
    printf("the number is out of bounds input the count to be less than 100 please ");
    return 0;
}
}
void sumarray(int a[100],int c)
{
int  sum=0;
for(int i=0;i<c;i++)
{
sum+=a[i];
}
printf("the sum of the elements are givn by %d\n",sum);
float avg=(float)sum/c;
printf("the average value is given by %f\n",avg);
}



int max(int a[100],int c)
{
int max=a[0];
int l=c;
for(int i=1;i<l;i++)
{
if(a[i]>max)
{
 max=a[i];
}
}
return max;
}

int min(int a[100],int c)
 {
int min=a[0];
int l=c;
for(int i=1;i<l;i++)
{
if(a[i]<min)
{
 min=a[i];
}
}
return min;
}
