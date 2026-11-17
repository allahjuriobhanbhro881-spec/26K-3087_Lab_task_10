#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    char name2[50];
    
    printf("Enter name: ");
    scanf("%49s", name); 

    double len = strlen(name);

    strcpy(name2, name);

    strcat(name2, "-Fast University");
    printf("original: %s\n", name);
    printf("length: %.0f\n", len); 
    printf("combined: %s\n", name2);

    return 0;
}
