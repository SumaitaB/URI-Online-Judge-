#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,t;
    scanf("%lf %lf",&A,&B);
    t=(((((A/10)*3.5)+((B/10)*7.5))/11)*10);
    printf("MEDIA = %.5lf\n",t);
    return 0;
}
