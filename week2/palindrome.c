#include <stdio.h>
int palindrome(int n)
{
temp=num;
while(num!=0)
{
digit=num/10;
rev=rev*10+digit;
num=num/10;
}return rev;
}
int main()
{
int rev=0,digit,temp,d;
d=palindrome(121);
if(rev==num)
{
printf("the num is a palindrome\n");
}
else
{
printf("the num is not a palindrome\n");
}
}

