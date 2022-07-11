#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,count;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        count=0;
        c=0;
         while(count!=b)
         {
              for(j=2;j<15000;j++)
              {
                  if(j%2==0)
                  {
                      break;
                  }
                  else
                  {
                      count++;

                  }
              }
         }
    }
}
