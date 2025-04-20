#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
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

int aux = 1; // VARIAVEL AUXILIAR PARA TRATAR OS LOOP WHILE E DO WHILE.

//TRECHO RESPONSAVEL PELO MOVIMENTO DA TORRE.
printf("\n\nTORRE:\n");
for (int i = 1; i <= torre; i++) // TRECHO DO CODIGO RESPONSAVEL POR INCREMENTAR O MOVIMENTO DA TORRE USANDO O LOOP for.
{
    printf("Direita\n");// SAIDA DE DADOS, RESULTADO DO INCREMENTO EXECUTADO DENTRO DO LAÇO for.
}

//TRECHO RESPONSAVEL PELO MOVIMENTO DA BISPO.
printf("\n\nBISPO:\n");
while(aux <= bispo) // TRECHO DO CODIGO RESPONSAVEL POR INCREMENTAR O MOVIMENTO DA TORRE USANDO O LOOP while.
{
    printf("Cima, Direita\n");// SAIDA DE DADOS, RESULTADO DO INCREMENTO EXECUTADO DENTRO DO LAÇO while.
    aux++; // variavel auxiliar criada para guardar o incremento para ser usado na condição while

}

//TRECHO RESPONSAVEL PELO MOVIMENTO DA RAINHA.
aux = 1;
printf("\n\nRAINHA:\n");
do  // TRECHO DO CODIGO RESPONSAVEL POR INCREMENTAR O MOVIMENTO DA TORRE USANDO O LOOP do while.
{
    printf("Esquerda\n"); // SAIDA DE DADOS, RESULTADO DO INCREMENTO EXECUTADO DENTRO DO LAÇO do while.
    aux++; // variavel auxiliar criada para guardar o incremento para ser usado na condição do while

} while (aux <= rainha);//codição do While para executar o codigo.



    return 0;
}
