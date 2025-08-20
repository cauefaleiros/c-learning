#include <stdio.h>
#include <string.h>

int main() {
    float price = 0.0;
    char item[32] = "";
    int quant = 0;

    printf("What item would you like to buy: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);
    
    printf("How many would you like?: ");
    scanf("%d", &quant);

    printf("You have bought %d %s\n", quant, item);
    printf("The total is: %.2f", price * quant);

    return 0;
}