#include <stdio.h>
#include <math.h>

float a = 0;
float b = 0;
float c = 0;

float r = 0;
float h = 0;

int wybor = 0;

void obliczenieObjetosciProstopadloscianu(){
    printf("Podaj pierwszy bok prostopadloscianu:\t");
    scanf("%f", &a);
    printf("Podaj drugi bok prostopadloscianu:\t");
    scanf("%f", &b);
    printf("Podaj trzeci bok prostopadloscianu:\t");
    scanf("%f", &c);
    printf("Objetosc prostopadlsocianu wynosi:\t%f\n", (a*b*c));
}

void obliczenieObjetosciWalca(){
    printf("Podaj wysokosc walca:\t");
    scanf("%f", &h);
    printf("Podaj promien walca:\t");
    scanf("%f", &r);
    printf("Objetosc walca wynosi:\t%f\n", M_PI*pow(r, 2)*h);
}


int main() {
    printf("Wybierz co chcesz obliczyc!\n");
	printf("1 - Objetosc prostopadloscianu!\n");
	printf("2 - Objetosc walca!\n");
	printf("3 - Wyjscie!\n\n");
	scanf("%d", &wybor);
	switch(wybor){
        case 1:
            obliczenieObjetosciProstopadloscianu();
            break;
        case 2:
            obliczenieObjetosciWalca();
            break;
        case 3:
            return 0;
        default:
            printf("\nZla komenda!");
	}



    return 0;
}
