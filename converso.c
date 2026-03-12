#include <stdio.h>

int main() {
    float quetzales, dolares, euros;

    // Tasas de cambio aproximadas
    float tasa_dolar = 0.13; 
    float tasa_euro = 0.12;

    printf("Ingrese la cantidad en quetzales: ");
    scanf("%f", &quetzales);

    dolares = quetzales * tasa_dolar;
    euros = quetzales * tasa_euro;

    printf("\nConversion de moneda:\n");
    printf("Quetzales: %.2f\n", quetzales);
    printf("Dolares: %.2f\n", dolares);
    printf("Euros: %.2f\n", euros);

    return 0;
}