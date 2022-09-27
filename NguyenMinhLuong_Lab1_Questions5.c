#include <stdio.h>

int main() {
    // Write C code here
    int numberChickens;
    float breedingRate;
    int week;

    printf("Number of chicknes in positive integer: ");
    scanf("%d", &numberChickens);
    printf("Number of breedingRate in percent : ");
    scanf("%f", &breedingRate);
    breedingRate = breedingRate / 100;
    printf("Number of week is positive integer ");
    scanf("%d", &week);
    
    for( int i = 1 ; i <= week ; i ++)
    {
        numberChickens = numberChickens + numberChickens*breedingRate;
    }
    printf("%d",numberChickens);
}