#include <stdio.h>

int inverteNumero(int n){
    int invertido =0;
    while(n > 0){
        int digito = n%10;
        invertido = invertido * 10 + digito;
        n =n/10;
    }
    return invertido;
}
int main(){
    int numero;
    printf("Digite o númeor para inverter: ");
    scanf("%d", &numero);

    int invertido = inverteNumero(numero);
    printf("Número invertido é %d", invertido);

    return 0;


}