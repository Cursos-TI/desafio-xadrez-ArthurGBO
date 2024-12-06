#include <stdio.h>
#include <string.h>

void moveBispo(int casas) {
    if (casas > 5) {
        printf("O bispo pode se mover no máximo 5 casas.\n");
        casas = 5;
    }
    for (int i = 0; i < casas; i++) {
        printf("Bispo está se movendo para cima e para direita\n");
    }
}

void moveTorre(int casas) {
    if (casas > 5) {
        printf("A torre pode se mover no máximo 5 casas.\n");
        casas = 5;
    }
    for (int i = 0; i < casas; i++) {
        printf("Torre está se movendo para a direita\n");
    }
}

void moveRainha(int casas) {
    if (casas > 8) {
        printf("A rainha pode se mover no máximo 8 casas.\n");
        casas = 8;
    }
    for (int i = 0; i < casas; i++) {
        printf("Rainha está se movendo para a esquerda\n");
    }
}

void moveCavalo() {
    char direcao[10];
    printf("Escolha uma direção para o cavalo se mover (baixo ou esquerda): ");
    scanf("%s", direcao);

    if (strcmp(direcao, "baixo") == 0) {
        // Movimentação do cavalo: 2 casas para baixo e 1 para a esquerda
        for (int i = 0; i < 2; i++) {
            printf("Cavalo se movendo para baixo...\n");
        }

        int j = 0;
        while (j < 1) {
            printf("Cavalo se movendo para a esquerda.\n");
            j++;
        }
    } else if (strcmp(direcao, "esquerda") == 0) {
        // Movimentação do cavalo: 2 casas para a esquerda e 1 para baixo
        for (int i = 0; i < 2; i++) {
            printf("Cavalo se movendo para a esquerda...\n");
        }

        int j = 0;
        while (j < 1) {
            printf("Cavalo se movendo para baixo.\n");
            j++;
        }
    } else {
        printf("Direção inválida. Por favor, escolha 'baixo' ou 'esquerda'.\n");
    }
}

int main() {
    char peca[7];
    int casas;
    char continuar[4];

    do {
        // Solicita a peça a ser movida
        printf("Escolha uma peça para mover (Bispo, Torre, Rainha ou Cavalo): ");
        scanf("%s", peca);

        // Verifica se a peça escolhida é diferente de Cavalo para solicitar a quantidade de casas
        if (strcmp(peca, "Cavalo") != 0) {
            printf("Quantas casas deseja mover? ");
            scanf("%d", &casas);
        }

        if (strcmp(peca, "Bispo") == 0) {
            moveBispo(casas);
        } else if (strcmp(peca, "Torre") == 0) {
            moveTorre(casas);
        } else if (strcmp(peca, "Rainha") == 0) {
            moveRainha(casas);
        } else if (strcmp(peca, "Cavalo") == 0) {
            moveCavalo();
        } else {
            printf("Escolha entre Bispo, Torre, Rainha ou Cavalo.\n");
        }

        printf("Deseja continuar? (s/n): ");
        scanf("%s", continuar);

    } while (strcmp(continuar, "sim") == 0 || strcmp(continuar, "s") == 0);

    printf("Xadrez encerrado.\n");

    return 0;
}
