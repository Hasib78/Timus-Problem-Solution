#include<stdio.h>
int main()
{
    int N,j=0,Q,r,p,i=0,m=1;
    int ar[100000];
    scanf("%d",&N);
    p=N;
    if(N<10 && N>=0)
    {
        Q=10+N;
        printf("%d\n",Q);
    }
    else if(N>=10)
    {
        for(j=9; j>1; j--)
        {
            while(N%j==0)
            {
                ar[i]=j;
                i++;
                r=i;
                m=m*j;
                N=N/j;
            }

        }
        if(m==p)
        {

            for(i=r-1; i>=0; i--)
            {

                printf("%d",ar[i]);

            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }

    }

    return 0;
}
