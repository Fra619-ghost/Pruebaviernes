//sumar los elementos de un arreglo

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int numbers[5];

    numbers[0]= 3;
    numbers[1]= 7;
    numbers[2]= 14;
    numbers[3]= 58;
    numbers[4]= 96;


    printf("\nEl valor #1 es: %d", numbers[0]);
    printf("\nEl valor #2 es: %d", numbers[1]);
    printf("\nEl valor #3 es: %d", numbers[2]);
    printf("\nEl valor #4 es: %d", numbers[3]);
    printf("\nEl valor #5 es: %d", numbers[4]);


    int suma = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];

    printf("\nLa suma de todos los elemtos del arreglo es de: %d",suma);





    return 0;
}
