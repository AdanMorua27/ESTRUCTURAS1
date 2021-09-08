#include <stdio.h>

int main()
    {
        // Operadores monarios - unarios
        int a = -10;

        // - -> cambio el signo de un valor 
        printf("a= %d\n", a);
        printf("-a= %d\n",-a);

        unsigned int b = 10;

         printf("b= %d\n", b);
         printf("-b= %d\n",-b);

         //Decremento e incremento
         // -- decremento
         // ++ incremento

        printf("a++= %d\n",++a);
        printf("a= %d\n",a);
        printf("a--= %d\n",--a);
        printf("a= %d\n",a);


        return 0;
    }
