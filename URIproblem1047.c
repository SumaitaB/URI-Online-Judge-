#include<stdio.h>
int main()
{
    int s,e,sm,em,dh,dm;
    scanf("%d %d %d %d",&s,&sm,&e,&em);
    dh=(e-s);
    dm=(em-sm);
    if(dh<0)
    {
        dh=24+(e-s);
        if(em<sm)
        {
            dh=(dh-1);
            dm=(60+(em-sm));
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
        }
    }
    else if(s==e)
    {
        if(em<sm)
        {
            dh=(dh-1);
            dm=(60+(em-sm));
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
        }
    }
    else
    {
        if(em<sm)
        {
            dh=(dh-1);
            dm=(60+(em-sm));
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dh,dm);
        }
    }

    return 0;
}
