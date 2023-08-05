#include<stdio.h>
int main()
{
    int x,y,i,n;
    double a=0.0,b=0.0,m,p,c;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
         m=a+x;
         p=b+y;
         c=m/p;
         printf("%.1lf\n",c);
        }

    }


    return 0;
}

