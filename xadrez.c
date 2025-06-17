#include <stdio.h>

int main() {

    //char bispo, torre, rainha;
    int casaBispo, casaTorre, casaRainha;
    int escolha;

    // Mensagem inicial
    printf("Qual peça mover?\n\n");

    printf("1 - BISPO\n");
    printf("2 - TORRE\n");
    printf("3 - RAINHA\n");
    printf("4 - CAVALO\n");

    while (1){
        printf("\nSua escolha: ");
        if (scanf("%d", &escolha) == 1) { // Jogador inseri sua escolha
            // Limpa o buffer de entrada após ler o inteiro
            while (getchar() != '\n'); 

            if (escolha >= 1 && escolha <= 4) {
                break; // Sai do loop se a entrada for válida
            } else {
                printf("Opção inválida. Por favor, digite um número entre 1 e 4.\n\n");
            }
        } else {
            printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }

    switch (escolha) {
        
        case 1: { // Bispo
            int escolhaBispo;
            int casaBispo; // Declarar aqui para uso local

            // Loop para validar a escolha da direção do bispo
            while (1) {
                printf("Para qual direção deseja mover o BISPO (qual diagonal superior)?\n\n");
                printf("1 - Direita\n");
                printf("2 - Esquerda\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaBispo) == 1) {
                    while (getchar() != '\n');
                    if (escolhaBispo == 1) {
                        printf("\nBispo moveu 5 casas na diagonal superior direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal direita superior (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaBispo == 2) {
                        printf("\nBispo moveu 5 casas na diagonal superior esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaBispo = 1; casaBispo <= 5; casaBispo++) {
                            printf("Movendo 1 casa: diagonal esquerda superior (casa %d de 5)\n", casaBispo);
                        }
                        break; // Sai do loop de direção
                    } else {
                        printf("Opção de direção inválida. Por favor, digite 1 ou 2.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n');
                }
            }
            break; // Sai do switch case 1
        }
        case 2: { // Torre
            int escolhaTorre;
            int casaTorre; // Declarar aqui para uso local
            // Loop para validar a escolha da direção da Torre
            while (1) {
                printf("Para qual direção deseja mover a TORRE?\n\n");
                printf("1 - Direita\n");
                printf("2 - Esquerda\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaTorre) == 1) {
                    while (getchar() != '\n');
                    if (escolhaTorre == 1) {
                        printf("\nTorre moveu 5 casas para direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaTorre = 1; casaTorre <= 5; casaTorre++) {
                            printf("Movendo 1 casa: Direita (casa %d de 5)\n", casaTorre);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaTorre == 2) {
                        printf("\nTorre moveu 5 casas para esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaTorre = 1; casaTorre <= 5; casaTorre++) {
                            printf("Movendo 1 casa: Esquerda (casa %d de 5)\n", casaTorre);
                        }
                        break; // Sai do loop de direção
                    } else {
                        printf("Opção de direção inválida. Por favor, digite 1 ou 2.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n'); // Limpa o buffer
                }
            }
            break; // Sai do switch case 2
        }
        case 3: { // Rainha
            int escolhaRainha;
            int casaRainha;
            // Loop para validar a escolha da direção da Rainha
            while (1) {
                printf("Para qual direção deseja mover a RAINHA?\n\n");
                printf("1 - Direita\n");
                printf("2 - Esquerda\n");
                printf("3 - Para Cima\n\n");
                printf("Sua escolha: ");
                
                if (scanf("%d", &escolhaRainha) == 1) {
                    while (getchar() != '\n');
                    if (escolhaRainha == 1) {
                        printf("\nRainha moveu 5 casas para direita.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 5; casaRainha++) {
                            printf("Movendo 1 casa: Direita (casa %d de 5)\n", casaRainha);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaRainha == 2) {
                        printf("\nRainha moveu 5 casas para esquerda.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 5; casaRainha++) {
                            printf("Movendo 1 casa: Esquerda (casa %d de 5)\n", casaRainha);
                        }
                        break; // Sai do loop de direção
                    } else if (escolhaRainha == 3) {
                        printf("\nRainha moveu 5 casas para cima.\n\n");
                        // Simulação do movimento, se necessário:
                        for (casaRainha = 1; casaRainha <= 5; casaRainha++) {
                            printf("Movendo 1 casa: Para cima (casa %d de 5)\n", casaRainha);
                        }
                        break; // Sai do loop de direção
                    } else {
                        printf("Opção de direção inválida. Por favor, digite 1 ou 2.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n'); // Limpa o buffer
                }
            }
            break; // Sai do switch case 3
        }
        case 4: { // Cavalo
            int escolhaCavalo;

            while (1) {
                printf("Para qual tipo de movimento 'L' o CAVALO irá?\n\n");
                printf("1 - Duas casas para frente e uma para direita\n");
                printf("2 - Duas casas para frente e uma para esquerda\n");
                printf("3 - Duas casas para trás e uma para direita\n");
                printf("4 - Duas casas para trás e uma para esquerda\n\n");
                printf("Sua escolha: ");

                if (scanf("%d", &escolhaCavalo) == 1) {
                    while (getchar() != '\n');

                    if (escolhaCavalo >= 1 && escolhaCavalo <= 4) { 
                        printf("\nCavalo moveu-se em 'L'.\n\n");
                        // Para o Cavalo, o loop de simulação de "casas" é diferente, pois não é uma linha reta.
                        switch (escolhaCavalo) {
                            case 1: printf("Movimento: 2 pra frente, 1 pra direita.\n\n"); break;
                            case 2: printf("Movimento: 2 pra frente, 1 pra esquerda.\n\n"); break;
                            case 3: printf("Movimento: 2 pra trás, 1 pra direita.\n\n"); break;
                            case 4: printf("Movimento: 2 pra trás, 1 pra esquerda.\n\n"); break;
                        } break;
                    } else {
                        printf("Opção de movimento inválida. Por favor, digite um número entre 1 e 4.\n\n");
                    }
                } else {
                    printf("Entrada inválida. Por favor, digite um número inteiro.\n\n");
                    while (getchar() != '\n');
                }
            }
            break;
        }
        default: 
            printf("Opção inválida, tente novamente.\n\n");
            break;
    }
    return 0;
}