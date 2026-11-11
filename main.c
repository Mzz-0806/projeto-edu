#include <stdio.h>

int main() {
    int opcao, n, p;
    unsigned long long fatN, fatP, fatNP, resultado;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Fatorial\n");
        printf("2 - Arranjo Simples\n");
        printf("3 - Permutacao Simples\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\nDigite um numero: ");
                scanf("%d", &n);

                if (n < 0 || n > 20) {
                    printf("Numero invalido! Digite de 0 a 20.\n");
                    break;
                }

                resultado = 1;

                for (int i = 1; i <= n; i++) {
                    resultado *= i;
                }

                printf("Fatorial de %d = %llu\n", n, resultado);
                break;

            case 2:
                printf("\nDigite o valor de n: ");
                scanf("%d", &n);

                printf("Digite o valor de p: ");
                scanf("%d", &p);

                if (n < 0 || n > 20 || p < 0 || p > n) {
                    printf("Valores invalidos!\n");
                    break;
                }

                fatN = 1;
                fatNP = 1;

                for (int i = 1; i <= n; i++) {
                    fatN *= i;
                }

                for (int i = 1; i <= n - p; i++) {
                    fatNP *= i;
                }

                resultado = fatN / fatNP;

                printf("Arranjo simples A(%d,%d) = %llu\n",
                       n, p, resultado);
                break;

            case 3:
                printf("\nDigite o numero de elementos: ");
                scanf("%d", &n);

                if (n < 0 || n > 20) {
                    printf("Numero invalido! Digite de 0 a 20.\n");
                    break;
                }

                resultado = 1;

                for (int i = 1; i <= n; i++) {
                    resultado *= i;
                }

                printf("Permutacao simples de %d = %llu\n",
                       n, resultado);
                break;

            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
