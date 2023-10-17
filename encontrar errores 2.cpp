#include <stdio.h>

float perimetro(float numero) 
{
    float perimetro;
    perimetro = 4 * numero; 
    return perimetro;
}

float areafigura(float numero) 
{
    float area;
    area = numero * numero;
    return area;
}

int main() {
    float num; 
    printf("lado de un cuadrado: ");
    scanf("%f", &num); 
    printf("perimetro: %f\n", perimetro(num));
    printf("area: %f\n", areafigura(num));

    return 0;
}

