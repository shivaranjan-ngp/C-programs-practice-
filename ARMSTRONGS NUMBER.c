#include<stdio.h>
#include<math.h>
int main()
 {
  int num,extranum,digits,extraanum,answer,result=0;
  digits=0.0;
  printf("enter a number of your choice \n");
  scanf("%d",&num);

  extranum=num;
 while (extranum!=0) 
 { digits++;
  extranum=extranum/10;
 }
 extraanum=num;
 while (extraanum!=0) 
 {
answer=extraanum%10;
result=result+pow(answer,digits);
extraanum/=10;
 }
 if ((int) result==num)
 {printf("it is a armstrongs number\n");}
 else
 {printf("no its not an armsstrongs number \n");}
 }
//this has been written after coountless efforts of my own and after that learning 