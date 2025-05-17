#include <stdio.h>

int main() {
    int vet[10];
    int contado[10] = {0}; 

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    printf("\nFrequência de cada número:\n");
    for (int i = 0; i < 10; i++) {
        if (contado[i] == 0) { 
            int freq = 1;
            for (int j = i + 1; j < 10; j++) {
                if (vet[i] == vet[j]) {
                    freq++;
                    contado[j] = 1; 
                }
            }
            printf("%d aparece %d vez(es)\n", vet[i], freq);
        }
    }

    return 0;
}
