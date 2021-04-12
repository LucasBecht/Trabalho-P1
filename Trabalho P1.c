#include <math.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
   setlocale(LC_ALL, "Portuguese");

char pacote1[10], pacote2[10], pacote3[10], pacote4[10];
float precofinal, v1, v2, v3, v4;

printf("Bem vindo a Distribuidora de Computadores, a seguir, mostraremos nossas opções:\n");

printf("Pacote Computadores de Educação, Valor = 12500,00\n Se deseja comprar, Digite \"sim\" se não, Digite \"não\"\n");
scanf("%s",pacote1);

printf("Pacote Computadores de Empresa, Valor = 12500,00\n Se deseja comprar, Digite \"sim\" se não, Digite \"não\"\n");
scanf("%s",pacote2);

printf("Pacote Computadores de Lojas, Valor = 12500,00\n Se deseja comprar, Digite \"sim\" se não, Digite \"não\"\n");
scanf("%s",pacote3);

printf("Pacote Computadores de Revenda, Valor = 12500,00\n Se deseja comprar, Digite \"sim\" se não, Digite \"não\"\n");
scanf("%s",pacote4);

if (strcmp(pacote1,"sim")== 0){
v1 = 12500,00;

}

if (strcmp(pacote2,"sim")== 0){
v2 = 12500,00;

}

if (strcmp(pacote3,"sim")== 0){
v3 = 12500.00;

}

if (strcmp(pacote4,"sim")== 0){
v4 = 12500.00;

}
precofinal = v1 + v2 + v3 + v4;
printf("os pacotes escolhidos são :\n");
if (strcmp(pacote1,"sim")== 0){
    printf("Computador para Educação\n");
}
if (strcmp(pacote2,"sim")== 0){
    printf("Computador para Empresa\n");
}
if (strcmp(pacote3,"sim")== 0){
    printf("Computador para Loja\n");
}
if (strcmp(pacote4,"sim")== 0){
    printf("Computador para Revenda\n");
}
printf("Valor Total = %.2f\n",precofinal);

return 0;
}
