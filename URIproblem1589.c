#include<stdio.h>
#define pi 3.14159
int main()
{

    int t,i,r1,r2;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&r1,&r2);
        printf("%d\n",r1+r2);
    }
    return 0;
}