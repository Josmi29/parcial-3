#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int n, i, j, opcion, suma = 0; 
    srand(time(NULL));

    do {
        printf("Ingresa la longitud de la matriz:\n");
        scanf("%d", &n); 
        int A[n][n];
        int B[n][n]; 

        printf("Matriz A:\n");
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                A[i][j] = rand() % 9 + 1; 
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }

        printf("Matriz B:\n");
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                B[i][j] = rand() % 9 + 1;
                printf("%d ", B[i][j]);
            }
            printf("\n");
        }
        
        printf("que operacion quieres realizar?\n");
        printf("1: Suma del triangular superior de A\n");
        printf("2: Suma de A + B\n");
        printf("3: Resta A - B\n");
        printf("4: Multiplicación A x B\n");
        printf("5: Diagonal de A\n"); 
        printf("0: Terminar el programa\n");
        printf("Ingresa la opcion: ");
        scanf("%d", &opcion);
        
        switch(opcion)
    	{
            case 1:
                suma = 0;
        		for (i = 0; i < n; i++) 
        			{
            			for (j = i + 1; j < n; j++) 
            				{
                		suma += A[i][j];
            				}
        			}
            	printf("suma del triangular superior de A: %d\n", suma);
                break;
                
            case 2:
                printf("suma de A + B:\n");
                for (i = 0; i < n; i++) 
                {
                    for (j = 0; j < n; j++) 
                    {
                        int resultado = A[i][j] + B[i][j];
                        printf("%d ", resultado);
                    }
                    printf("\n");
                }
                break;
                
            case 3:
                printf("resta A - B:\n");
                for (i = 0; i < n; i++) 
                {
                    for (j = 0; j < n; j++) 
                    {
                        int resultado = A[i][j] - B[i][j];
                        printf("%d ", resultado);
                    }
                    printf("\n");
                }
                break;
                
            case 4:
                printf("multiplicacion A x B:\n");
                int C[n][n];
                for (i = 0; i < n; i++) 
                {
                    for (j = 0; j < n; j++) 
                    {
                        C[i][j] = 0;
                        for (int k = 0; k < n; k++) 
                        {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;
                
            case 5:
                suma = 0;
                for (i = 0; i < n; i++) 
                {
                    suma += A[i][i]; 
                }
                printf("suma de la diagonal de A: %d\n", suma);
                break;
                
            case 0:
                printf("\nterminando el programa\n");
                break;
                
            default:
                printf("\nopcion no valida. Por favor, ingresa una opción valida.\n");
                break;
        }
        
        if (opcion != 0) {
            printf("Quieres repetir el proceso (1) o terminar (0)? ");
            scanf("%d", &opcion);
        }
        
    } while (opcion == 1);
    printf("adioooos:)");
    return 0;
}
