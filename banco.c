#include <stdio.h>

int main()
{
int saque = 0;
int num_notas_cem = 0;
int num_notas_cinquenta = 0;
int num_notas_vinte = 0;
int num_notas_dez = 0;
int num_notas_cinco = 0;

printf("\nbem vindo ao banco do Heros\n");
printf("\ndigite o quanto voce quer sacar\n");
scanf("%i", &saque);

    if(saque % 5 != 0)
    {
        printf("\nvalor de saque deve ser multiplo de 5\n");
        return 0;
    }

    num_notas_cem = saque / 100;
    saque = saque % 100;
    num_notas_cinquenta = saque / 50;
    saque = saque % 50;
    num_notas_vinte = saque / 20;
    saque = saque % 20;
    num_notas_dez = saque / 10;
    saque = saque % 10;
    num_notas_cinco = saque / 5;
    saque = saque % 5;

printf("\nvoce recebeu:");
if(num_notas_cem > 0)
{
    num_notas_cem == 1 ? printf(" 1 nota de cem,") : printf(" %i notas de cem,", num_notas_cem);
//num_notas_cem > 0 ? (num_notas_cem == 1 ? printf("1 nota") : printf("%i notas", num_notas_cem)
}
    else
    {
        printf("0 notas de cem,");
    }
if(num_notas_cinquenta > 0)
{
    num_notas_cinquenta == 1 ? printf(" 1 nota de cinquenta,") : printf(" %i notas de cinquenta,", num_notas_cinquenta);
}
    else
    {
        printf(" 0 notas de cinquenta,");
    }
if(num_notas_vinte > 0)
{
    num_notas_vinte == 1 ? printf(" 1 nota de vinte,") : printf(" %i notas de vinte,", num_notas_vinte);
}
    else
    {
        printf(" 0 notas de vinte,");
    }
if(num_notas_dez > 0)
{
    num_notas_dez == 1 ? printf(" 1 nota de dez") : printf(" %i notas de dez", num_notas_dez);
}
    else
    {
        printf(" 0 notas de dez,");
    }
if(num_notas_cinco > 0)
{
    num_notas_cinco == 1 ? printf(" e 1 nota de cinco.") : printf(" %i notas de cinco", num_notas_cinco);
}
    else
    {
        printf(" e 0 notas de cinco.");
    }

//printf("voce recebeu %i notas de cem, %i notas de cinquenta, %i notas de vinte, %i notas de 10, %i notas de 5", num_notas_cem, num_notas_cinquenta, num_notas_vinte, num_notas_dez, num_notas_cinco);

}
