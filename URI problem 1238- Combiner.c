#include<stdio.h>
#include<string.h>
int main()
{
    char a[60],b[60],c[150];
    int n,i,j,k,x,y,z;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        x=0,y=0,z=0;
        for(j=0;j<150;j++)
        {
            c[j]='\0';
        }
        scanf("%s",&a);
        scanf("%s",&b);
        x=strlen(a);
        y=strlen(b);
        if(x>=y)
        {
            z=y;
        }
        else
        {
            z=x;
        }
        for(j=0,k=0;k<z; j=j+2,k++)
        {

            c[j]=a[k];
            c[j+1]=b[k];
        }
        if(x>y)
         {
             while(k!=(x+y-1))
             {
                 c[j]=a[k];
                 j++;
                 k++;
             }
         }
         else if(y>x)
         {
             while(k!=(x+y-1))
             {
                 c[j]=b[k];
                 j++;
                 k++;
             }
         }
        printf("%s\n",c);
    }
    return 0;
}
