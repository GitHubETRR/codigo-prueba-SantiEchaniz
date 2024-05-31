#include <stdio.h>

int main()
{
    int num = 0; 
    printf("Indique su año de nacimiento:       Año:");
    scanf("%d",&num);
    int edad = 2024 - num;
    printf("tu edad es: %d", edad);
    
    return 0;
}