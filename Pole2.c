#include <stdio.h>
#include <math.h>

float a = 0;
float b = 0;
float c = 0;

float r = 0;
float h = 0;

float obliczenieObjetosciProstopadloscianu(float a, float b, float c){
    return(a*b*c);
}

float obliczenieObjetosciWalca(float r, float h){
    return(M_PI*pow(r, 2)*h);
}


int main() {

    printf("Podaj wysokosc walca:\t");
    scanf("%f", &h);
    printf("Podaj promien walca:\t");
    scanf("%f", &r);
    printf("Objetosc walca wynosi:\t%f\n", obliczenieObjetosciWalca(r, h));

    return 0;
}
