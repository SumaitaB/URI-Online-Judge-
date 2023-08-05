#include<stdio.h>
int main()
{
    int a,b,t,i,j;
    float ga,gb;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
    scanf("%d%d",&a,&b);
    scanf("%f%f",&ga,&gb);
        for(i=1;;i++)
        {
            a=(ga/100)*a*1.00;
            b=(gb/100)*b*1.00;
            if(a>b)
            {
                printf("%d anos.\n",i);
                if(i>100)
                {
                    printf("Mais de 1 seculo\n");

                }
                if(a>b)break;
            }


        }
    }
    return 0;
}
