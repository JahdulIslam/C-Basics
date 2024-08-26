#include <stdio.h>

int main(){
    int numberOfPurchase = 50;
    float costOfCoffee = 19.99;
    float totalEarned = numberOfPurchase*costOfCoffee;
    char currency = '$';
    
    printf("Coffees purchased: %d \n", numberOfPurchase);
    printf("Cost of coffee: %.2f %c \n", costOfCoffee, currency);
    printf("Total earned: %.2f %c \n", totalEarned, currency);
}