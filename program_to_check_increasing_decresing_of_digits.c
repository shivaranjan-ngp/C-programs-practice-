#include<stdio.h>
#include<math.h>
int main()
{
  int num,n,length,n1,n2,reverse,r1,r2,n3,n4;  
  printf("enter a number of your choice:\n");
  scanf("%d",&num);  
  n=num;
  length=0;
  n1=num;
  reverse=0;
  n3=0;
  n4=0;
  while (n!=0)
  {
   n=n/10;
   length++ ;
  }
  printf("the length is %d\n",length);
  printf("the reverse the of the no. is given by \n");
  while (n1!=0)
  {
   n2=n1%10;
   reverse=reverse*10+n2;
   n1=n1/10;
  }
  printf("%d\n",reverse);
  while(reverse>0)
  {
    r1=0;
    r2=0;
    r1=reverse%10;
    reverse=reverse/10;
    r2=reverse%10;
    if(r2>r1)
    {
      printf("%d > %d\n",r2,r1);  
       n3++;
    }
    else if (r1>r2)
    {
        printf("%d > %d\n",r1,r2);  
        n4++;
    }
    printf("display the value of n3 n4 %d %d \n",n3,n4 );
  }
  if (n3==length-1)
  {
   printf("the number is strictly increasing\n"); 
  }
  else if (n4==length)
  {
    printf("the number is stictly decreasing \n");
  }
  else
  {
    printf("the no. is niether\n it an avg no.  ");
  }
}