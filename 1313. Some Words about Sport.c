#include<stdio.h>
int main()
{
    long long int n,a,b,i,j,k,l;
    long long int x[100][100];
    scanf("%lld",&n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%lld",&x[i][j]);
        }

    }




    for(i=0; i<n; i++)
    {
        for(k=i,j=0; k>=0,j<=i; k--,j++)
        {


            printf("%lld ",x[k][j]);

        }
        if(i==n-1)
        {
            for(l=0; l<n-1; l++)
            {

                for(k=i,j=l+1; k>=1,j<=i; k--,j++)
                {


                    printf("%lld ",x[k][j]);

                }

            }
        }

    }


}
