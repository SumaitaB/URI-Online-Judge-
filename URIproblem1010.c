#include<stdio.h>
#include<math.h>
int main()
{
    int c1,c2,n1,n2;
    double p1,p2,totsy;
    scanf("%d %d %lf",&c1,&n1,&p1);
    scanf("%d %d %lf",&c2,&n2,&p2);
    totsy=((n1*p1)+(n2*p2));
    printf("VALOR A PAGAR: R$ %.2lf\n",totsy);
    return 0;

}
