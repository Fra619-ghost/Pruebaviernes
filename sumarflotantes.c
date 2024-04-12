//sumar 10 numero flotantes
#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{



    float suma;
    float numbers[10];
    numbers[0]= 1.6565;
    numbers[1]= 2.36;
    numbers[2]= 34.89;
    numbers[3]= 1.557;
    numbers[4]= 7.777;
    numbers[5]= 8.9896;
    numbers[6]= 4.88;
    numbers[7]= 1.1;
    numbers[8]= 1.789;
    numbers[9]= 6.456;

    suma= numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9];

    

    printf("\nEl primer valor  fue: %f", numbers[0]);
    printf("\nEl segundo valor  fue: %f", numbers[1]);
    printf("\nEl tercer valor  fue: %f", numbers[2]);
    printf("\nEl cuarto valor  fue: %f", numbers[3]);
    printf("\nEl quinto valor  fue: %f", numbers[4]);
    printf("\nEl sexto valor  fue: %f", numbers[5]);
    printf("\nEl septimo valor  fue: %f", numbers[6]);
    printf("\nEl octavo valor  fue: %f", numbers[7]);
    printf("\nEl noveno valor  fue: %f", numbers[8]);
    printf("\nEl decimo valor  fue: %f", numbers[9]);

    printf("\nLa suma de todos los flotantes es: %f", suma);




    return 0;
}
