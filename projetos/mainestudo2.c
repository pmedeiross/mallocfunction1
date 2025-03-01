#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Alocando memória para um array de 5 inteiros
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Falha na alocação de memória\n");
        return 1;
    }

    // Atribuindo valores ao array
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // Imprimindo os valores do array
    printf("Valores do array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberando a memória alocada
    free(arr);

    return 0;
}
