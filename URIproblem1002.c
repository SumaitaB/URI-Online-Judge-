
#include<stdio.h>

#include<math.h>

#define pi 3.14159

int main()

{

    double V, R;

    scanf("%lf",&R);

    V=((4.0/3)*pi*R*R*R);

    printf("VOLUME = %.3lf\n",V);

    return 0;

}
