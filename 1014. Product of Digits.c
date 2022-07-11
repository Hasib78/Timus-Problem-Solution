#include<stdio.h>
int main()
{
    long long int a,b,c;
    long long int x[100000],i,k,j=0;
    scanf("%lld",&a);
    b=a;
    if(a==0)
    {
        printf("10\n");
    }
    else if(a>=1 && a<=9)
    {
        printf("%lld\n",a);
    }
    else if(a>=10)
    {

        for(i=9; i>=2; i--)
        {
            while(a%i==0)
            {
                x[j]=i;
                a=a/i;

                j++;
                i=9;
            }
        }

        if(a==1)
        {

            for(k=j-1; k>=0; k--)
            {
                printf("%lld",x[k]);
            }
        }
        else
        {
            printf("-1\n");

        }

    }


}



