#include<stdio.h>
int main()
{
    int n,i,p,a,s=1,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        for(p=s;p<=s+2;p++)
        {
            printf("%d ",p);

        }
        printf("PUM\n");
        s=temp;
            s=p+1;
            p=temp;

    }

    return 0;
}

