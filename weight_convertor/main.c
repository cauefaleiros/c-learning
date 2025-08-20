#include <stdio.h>

int main() {

    int choice = 0;
    double pounds = 0.0;
    double kg = 0.0;

    printf("Enter your choice (1 - KG to Pound / 2 - Pound to KG): ");
    scanf("%d", &choice);


    if(choice == 1) {
        printf("Enter the weight KG: ");
        scanf("%lf", &kg);
        pounds = kg * 2.20462;
        printf("%.2lf kg is equal to %.2lf pounds", kg, pounds);
    }
    else if (choice == 2) {
        printf("Enter the weight pounds: ");
        scanf("%lf", &pounds);
        kg = pounds * 0.453592;
        printf("%.2lf pounds is equal to %.2lf kg", pounds, kg);
    }
    else {
        printf("Invalid Entry");
    }

    return 0;
}
