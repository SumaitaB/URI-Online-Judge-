#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,D,a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    D=(b*b-(4*a*c));
    x1=((-b+(sqrt(D)))/(2*a));
    x2=((-b-(sqrt(D)))/(2*a));
    if(D<0||a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
    }
    return 0;
}
