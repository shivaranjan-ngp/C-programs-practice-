#include<stdio.h>
#include<math.h>
int main()
{
 int sqr,sum,SQR;
 for (int num = 0; num < 100; num++)
 {
  
 sqr=pow(num,2);
 sum=0;
 SQR=sqr;
while (sqr!=0)
{
sum+=sqr%10;
sqr=sqr/10;
}
if (sum==num)
{
 printf("the given number %d having square %d is an neo number\n",num,SQR); 
}


 }
 

}