#include <stdio.h>

void main() {
    int firstSouth, secondSouth, west, north, fuelConsumedPerKm;
    
    printf("\n== Distance And Consumtion Of Fuel Calculating Program ==\n");
    printf("\n-- Taking Inputs --\n");
    
    printf("\nBus travelled for south first time (in km) : ");
    scanf("%d", &firstSouth);
    
    printf("\nBus travelled for west (in km) : ");
    scanf("%d", &west);
    
    printf("\nBus travelled for south second time (in km) : ");
    scanf("%d", &secondSouth);
    
    printf("\nBus travelled for north (in km) : ");
    scanf("%d", &north);
    
    printf("\nFuel consumed per km (in liter) : ");
    scanf("%d", &fuelConsumedPerKm);
    
    int distanceCovered = firstSouth + west + secondSouth + north;
    printf("\nThe bus travelled %d kilometers.\n", distanceCovered);
    
    printf("\nThe bus has consumed %d liters of fuel on a field trip.\n", distanceCovered * fuelConsumedPerKm);
}
