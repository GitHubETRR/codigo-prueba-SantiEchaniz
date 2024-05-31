#include <stdio.h>

int main()
{
    int numero = 0; 
    printf("Indique su año de nacimiento:       Año:");
    scanf("%d",&numero);
    int edad = 2024 - numero;
    printf("tu edad es: %d", edad);
    
    return 0;
}