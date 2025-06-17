#include <stdio.h>

// Definição de constantes para movimentação
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOVX 1
#define CAVALO_MOVY 2

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
void moverCavalo() {
    for (int i = 1; i <= CAVALO_MOVY; i++) {
        printf("Movendo Cavalo: %d casa(s) pra cima\n", i);
    }
        for (int i = 1; i <= CAVALO_MOVX; i++) {
        printf("Movendo Cavalo: %d casa(s) pra direita\n", i);
    }
}

int main() {
    printf("Movimentos das peças de xadrez:\n");


    moverBispo();
    moverTorre();
    moverRainha();
    moverCavalo();

    return 0;
}