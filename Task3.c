
#include <stdio.h>
#include <string.h>

int main() {

    char sent[100];
    char ch;
    char *ptr;

    printf("Write sentence: ");
    scanf(" %[^\n]", sent);


    printf("Enter character: ");
    scanf(" %c", &ch);

    if (strchr(sent, ch) != NULL) {
        ptr = strchr(sent,ch);
        printf("Found");
        printf("\nAddress: %d\n", ptr-sent);
    }
    else {
        printf("Not found");
    }

    return 0;
}