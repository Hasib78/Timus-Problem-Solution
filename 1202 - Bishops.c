#include<stdio.h>
int main()
{
    long long int a,b1,c1,b2,c2,d,e,f,g,h,x,y,z,i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld%lld",&b1,&c1,&b2,&c2);
        f=b1+c1;
        g=b2+c2;
        d=f%2;
        e=g%2;
        h=b1%2;
        x=c1%2;
        y=b2%2;
        z=c2%2;

        if(d==0 && e!=0)
        {
            printf("Case %lld: impossible\n",i+1);
        }
        else if(d!=0 && e==0)
        {
            printf("Case %lld: impossible\n",i+1);
        }
        else if(d==0 && e==0)
        {

            if(f==g)
            {
                printf("Case %lld: 1\n",i+1);
            }
            else if(b1==c1 && b2==c2)
            {
                printf("Case %lld: 1\n",i+1);
            }
            else if(h==0 && x==0 && y!=0 && z!=0)
            {
                printf("Case %lld: 1\n",i+1);
            }
            else if(h!=0 && x!=0 && y==0 && z==0)
            {
                printf("Case %lld: 1\n",i+1);
            }
            else
            {
                printf("Case %lld: 2\n",i+1);
            }
        }
        else if(d!=0 && e!=0)
        {
            if(f==g)
            {
                printf("Case %lld: 1\n",i+1);
            }

            else if(h==0 && x==0 && y!=0 && z!=0)
            {
                printf("Case %lld: 1\n",i+1);
            }
            else if(h!=0 && x!=0 && y==0 && z==0)
            {
                printf("Case %lld: 1\n",i+1);
            }
            else
            {
                printf("Case %lld: 2\n",i+1);
            }
        }
    }



}
