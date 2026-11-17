#include <stdio.h>
#include <string.h>

int main() {
    
    char p1[20];
    char p2[20];

    printf("Enter product 1: ");
    scanf("%s", p1);
    printf("Enter product 2: ");
    scanf("%s", p2);

    if(strcmp(p1,p2) == 0){
        printf("both are identical");
    }
    else{
        printf("Not identical");
    }

    printf("\nproduct 1 Length: \n%d", strlen(p1));
    printf("product 2 Length: %d", strlen(p2));

    return 0;
}
