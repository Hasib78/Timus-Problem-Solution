#include<stdio.h>
#include<math.h>
int main()
{
    double b,c[131072],x;
    unsigned long long int a;
    int i=0;

    while(scanf("%llu",&a)!= EOF)
    {

        b=sqrt(a);

        c[i]=b;
        x=i;

        i++;


    }
    for(i=x;i>=0;i--)
    {
        printf("%.4lf\n",c[i]);
    }

    return 0;

}
