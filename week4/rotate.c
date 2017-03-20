#include<stdio.h>
int rotate(int x,int n)
{
n=n%(sizeof(int)*8);
int l=sizeof(int)*8-n;
return x>>n|x<<l;
}
int main()
{
int x,int n;
printf("enter the value of x,n");

scanf("%x%x",&x,&n);
int a= rotate(x,n);
printf("the rotated numberis %x\n,a);
return 0;
}
