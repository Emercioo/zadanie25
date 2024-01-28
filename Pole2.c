#include <stdio.h>
#include <math.h>

float a = 0;
float b = 0;
float c = 0;

float obliczenieObjetosciProstopadloscianu(float a, float b, float c){
    return(a*b*c);
}


int main() {

    printf("Podaj pierwszy bok prostopadloscianu:\t");
    scanf("%f", &a);
    printf("Podaj drugi bok prostopadloscianu:\t");
    scanf("%f", &b);
    printf("Podaj trzeci bok prostopadloscianu:\t");
    scanf("%f", &c);
    printf("Objetosc prostopadlsocianu wynosi:\t%f\n", obliczenieObjetosciProstopadloscianu(a,b,c));

    return 0;
}
