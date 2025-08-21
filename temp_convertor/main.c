#include <stdio.h>

int main() {

    float celsius = 0.0;
    float fahren = 0.0;
    char choice = '\0';

    printf("Temperature Conversion Program\n");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celcius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if(choice == 'C' || choice == 'c') { 
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahren = (celsius * 9 / 5) + 32; 
        printf("%.1f Celcius is equal to %.1f Fahrenheit", celsius, fahren);
    } else if (choice == 'F' || choice == 'f') {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahren);
        celsius = (fahren - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celcius", fahren, celsius);
    } else {
        printf("Invalid entry");
    }

    return 0;
}