#include<stdio.h>
int main()
{
    int N,hun=0,fift=0,twent=0,ten=0,five=0,two=0,one=0;
    scanf("%d",&N);
    printf("%d\n",N);
    if(N>0&&N<1000000)
    {
        hun=N/100;
        fift=((N%100)/50);
        twent=(((N%100)%50)/20); ;
        ten=((((N%100)%50)%20)/10);
        five=(((((N%100)%50)%20)%10)/5);
        two=((((((N%100)%50)%20)%10)%5)/2);
        one=(((((((N%100)%50)%20)%10)%5)%2)/1);
        printf("%d nota(s) de R$ 100,00\n",hun);
        printf("%d nota(s) de R$ 50,00\n",fift);
        printf("%d nota(s) de R$ 20,00\n",twent);
        printf("%d nota(s) de R$ 10,00\n",ten);
        printf("%d nota(s) de R$ 5,00\n",five);
        printf("%d nota(s) de R$ 2,00\n",two);
        printf("%d nota(s) de R$ 1,00\n",one);
    }
    else
    {

        printf("0 nota(s) de R$ 100,00\n",hun);
        printf("0 nota(s) de R$ 50,00\n",fift);
        printf("0 nota(s) de R$ 20,00\n",twent);
        printf("0 nota(s) de R$ 10,00\n",ten);
        printf("0 nota(s) de R$ 5,00\n",five);
        printf("0 nota(s) de R$ 2,00\n",two);
        printf("0 nota(s) de R$ 1,00\n",one);


    }
    return 0;
}
