#include <stdio.h>
#include <stdio_ext.h>

/*
 * Exercicio 2
 * C is Love, C is Life <3
 */

#define CORRETORES_QTD 3

int main() {
    // Strings
    char corretores[CORRETORES_QTD][20] = {' '};

    // Vendas
    float vendas[CORRETORES_QTD] = {0};

    // Comissoes
    float comissoes[CORRETORES_QTD] = {0};

    __fpurge(stdin);

    for(int i = 0; i < CORRETORES_QTD; i++) {
        printf("Digite o nome do corretor: \n");
        fgets(corretores[i], sizeof(corretores[i]), stdin);

        printf("Digite o valor de vendas de %s: \n", corretores[i]);
        scanf("%f", &vendas[i]);
        __fpurge(stdin);
    }

    for(int i = 0; i < CORRETORES_QTD; i++) {
        if(vendas[i] > 50000) {
            comissoes[i] = (float) (0.12 * vendas[i]);
            continue;
        }

        if(vendas[i] > 30000) {
            comissoes[i] = (float) (0.095 * vendas[i]);
            continue;
        }

        comissoes[i] = (float) (0.07 * vendas[i]);
    }

    printf("Corretor \t Vendas \t Comissao \n");
    for(int i = 0; i < CORRETORES_QTD; i++) {
        printf("%s \t %.2f \t %.2f \n", corretores[i], vendas[i], comissoes[i]);
    }
}