#include<stdio.h>
#include<math.h>
int main()
{
int num,n,n1,n2,length,l,cycle,y,prime,x,power;
printf("enter a number homie \n");
scanf("%d",&num);
length=0;
n=num;
n1=num;
prime=0;
n2=1;
while(n2<num)
{
  if(num%n2==0)
  {
   prime+=1 ;
  }   
  n2++;
}
printf("%d\n",prime);
printf("the number in the cycle aregiven by\n");
printf("%d\n",num);
while(n!=0)
{
  length++;
  n=n/10;   
}
l=length;
while(length>1)
{
 y=1;
 cycle=0;
 x=n1%10;
n1=n1/10;
power=pow(10,l-1);
cycle+=x*power+n1;
while(y<cycle)
{
  if(cycle%y==0)  
  {
   prime+=1; 
  }
   y++;

}
 printf("%d\n",cycle);
 length--;
 n1=cycle;
 
}
if(prime==l)
{
    printf("the number is defined as an circular prime as the number and its other combination are all prime numbers\n");
}
else
{
 printf("the no. is not an circular prime so what it still has time to reach its prime\n") ;
}
printf("the value of prime is %d\n",prime);
// genuinly the hardest program that i have attempted till now learned a lot 
 
 


}