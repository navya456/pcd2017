#include<stdio.h>
#include<math.h>
float convert_radian(float d)
{
float rad;
rad=(3.142/180)*d;
return rad;
}
float compute_sin(float x)
{
float term,sum,prev,diff;
for(int i=3;diff>0.0000001;i=i+2)
{
prev=term;
term=(-term*x*x)/(i*(i-1));
diff=fabs(prev-term);
sum=sum+term;
}
return sum;
}
float main()
{
float degree,x,sum,res;
printf("enter the degree\n");
scanf("%f",&degree);
x=convert_radian(degree);
sum=compute_sin(x);
printf("sin(%f)=%f",degree,sum);
res=sin(x);
printf("using talyors series %f",res);
return 0;
}
