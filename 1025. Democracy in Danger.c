#include<stdio.h>
int main()
{
    long long int n,a[200],b,i,j,temp,sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    b=(n/2)+1;
    for(i=0;i<b;i++)
    {
        sum=sum+(a[i]/2)+1;
    }
    printf("%lld\n",sum);
}
