#include<stdio.h>
int main()
{

    int i,l,s,max=0;
    while(scanf("%d",&l)!=EOF)
    {
        max=0;
        for(i=1; i<=l; i++)
        {
            scanf("%d",&s);
            if(max<s)
            {
                max=s;
            }
        }

        if(max<10)
        {
            printf("1\n");
        }
        else if(max>=10&&max<20)
        {

            printf("2\n");
        }
        else if(max>=20)
        {

            printf("3\n");
        }
    }


    return 0;
}
