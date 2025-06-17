#include <stdio.h>

// Definição de constantes para movimentação
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
void moverBispo() {
    for (int i = 1; i <= BISPO_MOV; i++) {
        printf("Movendo Bispo: %d casa(s) na diagonal superior direita\n", i);
    }
}
void moverTorre() {
    for (int i = 1; i <= TORRE_MOV; i++) {
        printf("Movendo Torre: %d casa(s) para a direita\n", i);
    }
}
void moverRainha() {
    for (int i = 1; i <= RAINHA_MOV; i++) {
        printf("Movendo Rainha: %d casa(s) para a esquerda\n", i);
    }
}

int main() {
    printf("Movimentos das peças de xadrez:\n");


    moverBispo();
    moverTorre();
    moverRainha();

    return 0;
}