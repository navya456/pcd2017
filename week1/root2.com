#include <stdio.h>int sum(int a[],int n){int sum=0;for(i=0;i<n;i++)    sum=sum+a[i];return sum;}int main(){    int n,i;int  a[10]={1,2,3,4,5,6,7,8,9};printf("enter the number of elements");scanf("%d",10);printf("enter elements\n");for(i=0;i<n;i++)scanf("%d",&a);printf("\nsum=%d",sum);return 0;}