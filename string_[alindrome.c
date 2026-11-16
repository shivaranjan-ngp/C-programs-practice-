#include<stdio.h>
#include<string.h>
int palindrome(char s[100])
{
int lo=0;
int hi=strlen(s)-1;
while(lo<hi)
{
 if (s[lo]!=s[hi])
 {
 return 0; 
 }
 lo++;
 hi--;
}
return 1;
}
int main()
{
 char s[100];
 printf("enter an string");
 fgets(s,100,stdin);
 s[strcspn(s, "\n")]='\0';
 if (palindrome(s)==0)
 {
    printf("not an palindrome");

 }
 else if(palindrome(s)==1)
 {
    printf("it is an palindrome");
 }
}