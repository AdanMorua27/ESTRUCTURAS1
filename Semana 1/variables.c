#include <stdio.h>

int main()
    {
        //Declaracion de variables 
        int entero=10, entero2=50;

        printf("Size of variable entero %ld beytes\n",sizeof(entero));


        printf("Size of int %ld beytes\n",sizeof(int));
        printf("Size of char %ld beytes\n",sizeof(char));
        printf("Size of float %ld beytes\n",sizeof(float));
        printf("Size of double; %ld beytes\n",sizeof(double));
        printf("Size of void %ld beytes\n",sizeof(void));

        printf("Size of short int; %ld beytes\n",sizeof(short int));
        printf("Size of long int %ld beytes\n",sizeof(long int));

        return 0;
    }
