/**
 * This program changes the case of every character given a string as parameter.
 *
 * Example: Given "Hello WoRld" -> "hELLO wOrLD"
 *
 * @author Florian Dahlitz
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc != 2) {
        printf("The case changer requires one argument.\n");

        return EXIT_SUCCESS;
    }

    char *string = argv[1];

    for(char *character = string; *character != '\0'; character++)
    {
        *character = *character ^ 32;
        if(*(character+1) == ' ')
            character++;
    }

    printf("%s\n", string);
    printf("----------------------------\n");

    return EXIT_SUCCESS;
}
