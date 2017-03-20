#include<stdio.h>
unsigned int rotateright(unsigned int x,unsigned int n)
{
    n=n%(sizeof(unsigned int)*8);
    for(unsigned int i=0;i<n;i++)
    {
	if(x%2==0)
        {
           x=x>>1;
        }
        else
        {
           x=x>>1;
           x=x|(1<<(sizeof(unsigned int)*8-1));
        }
    }
return x;
}
unsigned int main()
{
unsigned int x,n;
printf("enter the value of x,n");
scanf("%x%d",&x,&n);
unsigned int a=rotateright(x,n);
printf("the rotated number = %x\n",a); 
return 0; 
}
 
