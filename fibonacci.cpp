#include <stdio.h>
//JOSE MIGUEL RUIZ MARQUEZ 180200
long long int fibonacci(int n) 
{
    if (n <= 1) 
    {
        return n;
    } 
    else 
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main() 
{
    int n;
    printf("Numero de elementos de la serie Fibonacci: ");
    scanf("%d", &n);
    
    if (n <= 1)
    {
        printf("El numero de la recursion: %d", n);   
    } 
    else 
    {
        printf("Elementos de la serie:\n");
        for (int i = 0; i < n; i++) 
        {
            printf("%lld ", fibonacci(i));  
        }
    }
    
    return 0;
}
