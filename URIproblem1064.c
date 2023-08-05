#include<stdio.h>
int main()
{
    double a;
    int i,s,c=0,t,n;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            c=c+1;
        }

    }

    printf("%d valores positivos\n",c);

    return 0;
}
