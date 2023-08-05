#include<stdio.h>
int main()
{
    int x,p,i,j,s,n;
    for(i=1;;i++)
    {
        scanf("%d",&x);
        if(x==0)break;
        else if(x%2==0)
        {
            s=0;
            for(j=x;j<=x+8;j=j+2)
            {
                s+=j;
            }
            printf("%d\n",s);
        }
        else if(x%2!=0)
        {
            s=0;
            for(j=x+1;j<=x+9;j=j+2)
            {
                s+=j;
            }
            printf("%d\n",s);
        }
    }

    return 0;
}
