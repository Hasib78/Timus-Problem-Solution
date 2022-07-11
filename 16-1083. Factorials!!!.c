#include<stdio.h>
#include<string.h>
int main()
{
    int n,sum=1,i,l;
    char k[100];
    scanf("%d %s",&n,&k);
    l=strlen(k);
    for(i=n;i>=1;i=i-l)
    {
        sum=sum*i;
    }
    printf("%d\n",sum);

}
