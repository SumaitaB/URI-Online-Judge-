#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,t;
    scanf("%lf %lf %lf",&A,&B,&C);
    t=(((A/10)*2)+((B/10)*3)+((C/10)*5));
    printf("MEDIA = %.1lf\n",t);
    return 0;
}
