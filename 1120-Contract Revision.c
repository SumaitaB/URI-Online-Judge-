#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,x=0,n,p=0,g=-1;
    char a[1009];
    while(1)
    {
        g=-1;
        x=0,p=0;
        scanf("%lld%s",&n,&a);

        if(a[0]==0&&n==0)break;

        for(i=0; i<strlen(a); i++)
        {
            if((a[i]-48)==n)
            {
                a[i]='*';
            }
        }
        for(i=0; i<strlen(a); i++)
        {
            if(a[i]!='*')
            {
                p+=(a[i]-48);
            }
        }
        if(p==0)
        {
            printf("0");
        }
        else
        {
             for(i=0; i<strlen(a); i++)
            {
                if(a[i]=='0'||a[i]=='*')
                {
                    g=i;
                }
                else{break;}
            }
            for(i=g+1; i<strlen(a); i++)
            {
                if(a[i]!='*')
                {
                    printf("%c",a[i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
