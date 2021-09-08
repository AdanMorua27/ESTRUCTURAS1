
#include <stdio.h>
// Operadores

int main()
{
    // Operadores aritmeticos

    // + -> suma
    // - -> resta
    // * -> multiplica
    // / -> divide
    // % -> modulo - residuo de la division ENTERA- DATOS ENTEROS
    int a= 10;
    int b = 3;

    printf("suma: %d + %d = %d\n", a , b, a + b);
    printf("resta: %d - %d = %d\n", a , b, a - b);
    printf("multiplicacion: %d * %d = %d\n", a , b, a * b);
    printf("division: %d / %d = %d\n", a , b, a / b);

    float c= 10.0;
    float d= 3.0;

    printf("Division Flotante: %d / %d = %d\n", a , b, a / b);

    //modulo
    printf("Modulo: %d mod %d = %d\n", a , b, a % b);

    return 0;
}