#include <stdio.h>
//SERIE FIBONACCI 180200 JOSE MIGUEL RUIZ MARQUEZ
int fibonacci(int n) 
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
    printf("Numero de elementos de la serie fibonnacci: ");
    scanf("%d", &n);
    
    if(n<=1)
	{
    printf("El numero de la recursion: %d",n);	
    } 
	else 
	{
    	printf("Elementos de la serie:\n");
    	for (int i = 0; i < n; i++) 
		{
    	printf("%d ", fibonacci(i));
    	}
	}
	
    return 0;
}
