#include<stdio.h>
#include<string.h>
int main()
{
    char a[500],b[500];
    int n,p,i,j,k,x,y,z;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<500; j++)
    {
        b[j]='\0';
    }
        x=0,y=0,z=0;
        scanf("%s",&a);
        scanf("%d",&p);
        x=strlen(a);
        j=0;
        while(a[j]!='\0')
        {
            if((a[j]-p)<65)
            {
                b[j]=(a[j]-p)+26;
            }
            else
            {
                b[j]=(a[j]-p);
            }
            j++;
        }

        printf("%s\n",b);
    }
    return 0;
}
