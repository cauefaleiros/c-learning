#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    double timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal: ");
    scanf("%lf", &principal);

    printf("Enter your rate: ");
    scanf("%lf", &rate);
    rate = rate / 100.0; 

    printf("Enter years: ");
    scanf("%d", &years);

    printf("Enter times compounded: ");
    scanf("%lf", &timesCompounded);

    total = principal * pow((1 + (rate / timesCompounded)), timesCompounded * years);

    printf("years: %d, total: %.2f\n", years, total);
    
    return 0;
}