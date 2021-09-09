#include <stdio.h>

int main(){

    int a,b;
    printf("ingrese el primer numero:\n ->");
    scanf("%d",&a);
    printf("ingrese el segundo numero:\n ->");
    scanf("%d",&b);

    printf("la suma de %d + %d = %d\n",a,b,(a+b));
    printf("la resta de %d - %d = %d\n",a,b,(a-b));
    printf("la multiplicacion de %d * %d = %d\n",a,b,(a*b));
    printf("la division de %d / %d = %f\n",a,b,((float)a/b));

    getchar();

    return 0;
}