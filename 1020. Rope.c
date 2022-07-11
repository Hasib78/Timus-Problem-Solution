#include<stdio.h>
#include<math.h>
int main()
{
    double t,r,a,b,c,d,g,h,x,y,z,i,sum=0,sum1=0,sum2=0,sum3=0,add=0;
    scanf("%lf%lf",&t,&r);

    scanf("%lf %lf",&a,&b);
     y=a,z=b;
    for(i=1; i<t; i++)
    {
        c=a;
        d=b;
        scanf("%lf %lf",&a,&b);

        add=add+sqrt(pow((c-a),2)+pow((d-b),2));

    }
    add=add+sqrt(pow((a-y),2)+ pow((b-z),2));
    x=add;
    h=2*acos(-1)*r;
    g=x+h;
    if(t==1)
    {
        printf("%.2lf\n",h);
    }
    else
    {
        printf("%.2lf\n",g);
    }

}
