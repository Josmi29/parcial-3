#include <stdio.h>

int suma(int *a, int *b); 

int main() 
{
    int num1, num2, sum;
    printf("introducir dos numeros a sumar: \n");
    scanf("%d %d", &num1, &num2);
    sum = suma(&num1, &num2);
    printf("La suma es: %d", sum);
    return 0;
}

int suma(int *a, int *b) 
{ 
    int add = *a + *b; 
    return add;
}

