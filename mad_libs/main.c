#include <stdio.h>
#include <string.h>


void remove_newline(char *str) {
    str[strlen(str, "\n")] = '\0';
}

int main() {
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin); // scanf não aceita espaços em branco
    remove_newline(adjective1);

    printf("Enter a noun (Animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    remove_newline(noun);

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    remove_newline(adjective2);

    printf("Enter a verb: (Ending with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    remove_newline(verb);

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    remove_newline(adjective3);

    printf("%s\n", noun);
    printf("%s\n", verb);
    printf("%s\n", adjective1);
    printf("%s\n", adjective2);
    printf("%s\n", adjective3);

    return 0;

}