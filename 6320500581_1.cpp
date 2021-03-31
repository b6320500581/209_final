#include<stdio.h>
int main()
{
    int p,n,a,b,c,k,t,sum,;
scanf("%d",&n);
scanf("%d",&c);
p=n;
a=n*60;
b=c*60;
k=a+b;
t=k/60;
if(p>100)
{
    sum=t+3;
}
else
{
    sum=t-1;
}
printf("%d",sum);

}
