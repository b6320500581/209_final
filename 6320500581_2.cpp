#include<stdio.h>
int main()
{
    int n,a[100],i,j,k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {
                 if(a[j]=a[k+1])
             {
                printf("%d",a[j]);
                 break;
             }

        }
    }
}
