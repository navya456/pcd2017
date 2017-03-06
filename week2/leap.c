#include <stdio.h>
int leapyear(int y)
{
if(y%4==0)
{
return 0;
}
else if(y%100!=0)
{
return -1;
}
else
{
return 1;
}}
int main()
{

int d=leapyear(2012);

printf("the year is a leap year");
}



