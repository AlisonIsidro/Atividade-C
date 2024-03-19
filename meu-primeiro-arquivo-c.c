#include <stdio.h>

int main() {

    // Declaração das variáveis: <tipo> <id>
    int numero;
    float numReal;

    // Boa Prática: Dar valores iniciais para as variáveis
    numero = 0;
    numReal = 0.0;

    
    // Atribuir valores
    numero = 42;
    numReal = 3.14;


    printf("Número: %d\n", numero);   // %d para aparecer o resultado da variavel, d= decimal
    printf("Número Real: %.2f\n", numReal);  //


    return 0;
}