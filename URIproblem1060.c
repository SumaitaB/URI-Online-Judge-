#include<stdio.h>

int main()
{
    int ia,ib,ic,id,ie,ig,t;
    double a,b,c,d,e,f,avg,s,p,q,r,n,m;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    a>0;
    b>0;
    c>0;
    d>0;
    e>0;
    f>0;

    if(a>0)
    {
        ia=1;
        s=a;
    }
    else
    {
        ia=0;
        s=0;
    }
    if(b>0)
    {
        ib=1;
        p=b;
    }
    else
    {
        ib=0;
        p=0;
    }
    if(c>0)
    {
        ic=1;
        q=c;
    }
    else
    {
        ic=0;
        q=0;
    }
    if(d>0)
    {
        id=1;
        r=d;
    }
    else
    {
        id=0;
        r=0;
    }
    if(e>0)
    {
        ie=1;
        n=e;
    }
    else
    {
        ie=0;
        n=0;
    }
    if(f>0)
    {
        ig=1;
        m=f;
    }
    else
    {
        ig=0;
        m=0;
    }
    t=ia+ib+ic+id+ie+ig;
    avg=(p+q+r+s+n+m)/t;
    printf("%d valores positivos\n",t);
    printf("%.1lf\n",avg);


    return 0;

}
