#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//jose miguel ruiz marquez
//180200
//funcion que use para el minimo
int findMin(int lista[], int n) 
{
    int min = lista[0];
    for (int i = 1; i < n; i++) 
	{
        if (lista[i] < min) 
		{
            min = lista[i];
        }
    }
    return min;
}
//funcion que use para el maximo
int findMax(int lista[], int n) {
    int max = lista[0];
    for (int i = 1; i < n; i++) {
        if (lista[i] > max) 
		{
            max = lista[i];
        }
    }
    return max;
}
//funcion que use para la media
float calcularMedia(int lista[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += lista[i];
    }
    return suma / n;
}
//funcion que use para la moda
int calcularModa(int lista[], int n) 
{
    int moda = lista[0];
    int conteomaximo = 0;

    for (int i = 0; i < n; i++) 
	{
        int conteo = 0;
        for (int j = 0; j < n; j++) 
		{
            if (lista[j] == lista[i])
                conteo++;
        }
        if (conteo > conteomaximo) 
		{
            conteomaximo = conteo;
            moda = lista[i];
        }
    }
    return moda;
}
//funcion que use para la mediana
float calcularMediana(int lista[], int n) {
    if (n % 2 == 0) {
        return (float)(lista[n / 2 - 1] + lista[n / 2]) / 2.0;
    } else {
        return (float)lista[n / 2];
    }
}

int main() {
    int i, j, n, numeroActual = 0;

    srand(time(NULL));

    printf("Numero de elementos a ordenar\n");
    scanf("%d", &n);

    int lista[n];

    printf("lista sin ordenar\n");
    for (i = 0; i < n; i++) {
        lista[i] = rand() % 30 + 1;
        printf(" %d ", lista[i]);
    }
    printf("\n");
//aca uso el ordenamiento por insercion
    for (i = 0; i < n; i++) {
        numeroActual = lista[i];
        int posAnterior = i - 1;

        while (posAnterior >= 0 && lista[posAnterior] > numeroActual) {
            lista[posAnterior + 1] = lista[posAnterior];
            posAnterior--;
        }

        lista[posAnterior + 1] = numeroActual;
    }

    printf("lista ordenada\n");
    for (i = 0; i < n; i++) {
        printf(" %d ", lista[i]);
    }
//mando a llamar las funciones
    int minimo = findMin(lista, n);
    int maximo = findMax(lista, n);
    float media = calcularMedia(lista, n);
    int moda = calcularModa(lista, n);
    float mediana = calcularMediana(lista, n);

    printf("\nvalor minimo: %d\n", minimo);
    printf("valor maximo: %d\n", maximo);
    printf("media: %.2f\n", media);
    printf("moda: %d\n", moda);
    printf("mediana: %.2f\n", mediana);
//aca genero el histograma
    printf("\nhistograma :\n");
    for (i = 0; i < n; i++) 
	{
        float probabilidad = 100 * (1.0 / n); 
        printf("%d: ", lista[i]);
        for (j = 0; j < probabilidad * lista[i]; j++) 
		{
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

