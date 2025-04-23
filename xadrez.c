#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


//FUNÇÃO RECURSIVA PARA IMPRIMIR O MOVIMENTO DA TORRE
void recursiveTorre(int t){
    if(t > 0){

        printf("Direita\n"); //IMPRIME O MOVIMENTO DA TORRE

        recursiveTorre(t - 1); //CHAMA A PROPRIA FUNÇÃO COM t - 1

    }
}



recursiveBispo(int b){
    if(b > 0){

       for(int j = 0; j < 1; j++)
       {
            for (int i = 0; i < 1; i++)
            {
                printf("Cima, ");
            }

            printf("Direita\n");
            
        }

       recursiveBispo(b - 1);
        
    }

}

//FUNÇÃO RECURSIVA PARA IMPRIMIR O MOVIMENTO DA RAINHA
recursiveRainha(int r){
    if(r > 0){

        printf("Direita\n"); //IMPRIME O MOVIMENTO DA RAINHA

        recursiveTorre(r - 1); //CHAMA A PROPRIA FUNÇÃO COM r - 1
    }
}



int main() 
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//DECLARAÇÃO DAS VARIAVES RESPONSAVEIS POR ARMAZENAR A QUANTIDADE DE MOVIMENTO DAS PEÇAS DO XADREX
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    //TRECHO RESPONSAVEL PELO MOVIMENTO DA TORRE.
    printf("Torre:\n");
    recursiveTorre(torre); //CHAMA A FUNÇÃO recursiveTorre() como o valor torre para tratamento

    //TRECHO RESPONSAVEL PELO MOVIMENTO DA RAINHA.
    printf("\n\nRAINHA:\n");
    recursiveRainha(rainha);

    printf("\n");// IMPRIME UM LINHA EM BRANCO


    //TRECHO RESPONSAVEL PELO MOVIMENTO DA BISPO.
    printf("\n\nBISPO:\n");
    recursiveBispo(bispo);

    printf("\n");

    //MOVIMENTO DO CAVALO 
    printf("\n"); //IMPRIMI UMA LINHA EM BRANCO PARA SEPARAR OS MOVIMENTOS DO CAVALO DAS OUTRAS PEÇAS
    printf("\nCAVALO: \n");


    for (int i = 1; i <= 3; i++)//LOOP COM A QUANTIDADE DE MOVIMENTOS DO CAVALO
    {   
        if( i == 2) continue; //ASSIM QUE MOVIMENTA DUAS CASAS UTILIZO OCONTROLE FLUXO continue PARA FINALIZAR O TERCEIRO MOVIMENTO PARA DIRETA FORA DO LOOP

        printf("Cima, ");// SAIDA DE DADOS, RESULTADO DO INCREMENTO EXECUTADO DENTRO DO LAÇO FOR. IMPRIMI NO CONSOLE "CIMA, " duas vezes
    }

        printf("Direita");// ASSIM QUE TERMINA O LOOP FOR IMPRIMI NA SEQUENCIA PARA "DIREITA" UMA VEZ
        
    return 0;
}
