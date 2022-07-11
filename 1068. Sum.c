#include<stdio.h>
int main()
{
    long long int i,a,b=0,c;
    scanf("%lld",&a);


     if(a<=1)
    {


        for(i=a; i<=1; i++)
        {
            b=b+i;
        }
        printf("%lld\n",b);

    }
    else
    {
        for(i=a; i>=1; i--)
        {
            b=b+i;
        }
        printf("%lld\n",b);
    }
    return 0;

}
