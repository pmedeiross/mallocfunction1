#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1;
    }

    printf("Elementos do vetor: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
