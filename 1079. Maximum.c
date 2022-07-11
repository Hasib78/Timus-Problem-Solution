#include<stdio.h>
int main()
{
    long long int n,i,sum,b;
    int a[100000];
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        else
        {


            a[0]=0;
            a[1]=1;
            sum=a[1];
            for(i=2; i<=n; i++)
            {
                if(i%2==0)
                {
                    a[i]=a[i/2];
                    if(a[i]>sum)
                    {
                        sum=a[i];
                    }
                }
                else
                {
                    b=i/2;
                    a[i]=a[b]+a[b+1];
                    if(a[i]>sum)
                    {
                        sum=a[i];
                    }
                }

            }
            printf("%lld\n",sum);
        }
    }
}
