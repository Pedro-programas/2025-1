#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n){
    if(n < 2) return false;
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0) return false;
        }
        return true;
}


int main(){
    int primeiro, ultimo;
    printf("Digite o intervalo (dois números inteiros): ");
    scanf("%d %d", &primeiro, &ultimo);

    printf("Número primos entre %d e %d \n", primeiro, ultimo);

    for(int i= primeiro; i <= ultimo; i++){
        if(ehPrimo(i)){
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}