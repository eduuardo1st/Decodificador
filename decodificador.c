#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "hexa_deci.h"
#include "caractere.h"
#define mensagem = 101
int main(){
     int numMensagens, x=1, b, i;
     char mensagemHexa[101], aux[101];
     setlocale(LC_ALL, "portuguese");
     //coleta de informa��es
     printf("Digite o n�mero de mensagens interceptadas: ");
     scanf("%d", &numMensgens);
     fflush(stdin);

     //repetir� a execu��o at� alcan�ar o numero de mensagens
     for(i=0; i<numMensagens; i++){
        printf("digite o valor de b: ");
        scanf("%d", &b);
        fflush(stdin);
        printf("digite a mensagem decodificada: ");
        fgets(mensagemHexa, mensagem, stdin);
        fflush(stdin);
        //o codigo abaixo � para decodificar a mensagem
        for(i=0; i<100; i+=2){
            aux[i] = mensagemHexa[i];
            aux[i+1] = mensagemHexa[i+1];
            strtol//ainda sem saber como utilizar
            if(){}//if para encerrar a repeti��o caso encontre o valor 00 na repeti��o
        }
        printf("\n");
     }
    return 0;
}