#include<stdio.h>
#include<math.h>
int main()
{
  int num,sqr,numchange,length,compare,tenpower;
  printf("enter a number\n");
  scanf("%d",&num) ;
  sqr=num*num;
  numchange=num;
  length=0;
  while (numchange!=0)
  {
   length++;
   numchange=numchange/10;
  }
  tenpower=pow(10,length);
  compare=sqr%tenpower;
  if (compare==num)
  {
    printf("the given no.%d is an automorphic no.\n",num);
  }
  else 
  {
    printf("the given is not an automorphic  number");
  }
  printf("the value for the comparision %d\n",compare);
}