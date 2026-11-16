#include<stdio.h>
#include <string.h>

void reverse(char s[100])
{
int l;
char a[100];
strcpy(a,s);
l=strlen(s);
for(int  i=0;i<l/2;i++)
{
char temp=s[i];
s[i]=s[l-i-1];
s[l-i-1]=temp;
}
printf("the reverse of the string is given by %s\n",s);
// palindrome 
if(strcmp(a,s)==0)
{
printf("the given string is an example for palindrome\n");
}
else
{
printf("the given string is not an palindrome\n");
}
}


int main()
{
 char s[100];
 printf("enter the string to check is its an palindrome or not\n");
 fgets(s,100,stdin);
 int l=strlen(s);
 if (l>0 && s[l-1]=='\n')
 {
    s[l-1]='\0';
 }
reverse(s);
}

