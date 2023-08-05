#include<stdio.h>
#include<math.h>

int main()
{
    int n,h;
    double a,t;
    scanf("%d %d %lf",&n,&h,&a);
    t=(h*a);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",n,t);
    return 0;
}
