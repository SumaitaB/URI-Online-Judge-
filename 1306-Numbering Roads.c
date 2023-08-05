#include<stdio.h>
#include<math.h>
int main()
{
    long long int i=1,a,b,ans,count=0,x;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        count=0;
        if(a==0&&b==0)break;
        if(i==10002)break;
        if(a<=b)
        {
            printf("Case %lld: 0\n",i);
        }
        else
        {
            if(a>((26*b)+b))
            {
                printf("Case %lld: impossible\n",i);
            }

            else
            {
                count=ceil((a-b)/(b*1.00));
                printf("Case %lld: %lld\n",i,count);
            }
        }
        i++;
    }


    return 0;
}


