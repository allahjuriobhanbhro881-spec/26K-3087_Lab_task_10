#include <stdio.h>
#include <string.h>
int main(){

    char names[5][20];

    char arr[20];
    char *ptr;
   
    for(int i=0;i<5;i++){
        printf("Enter name: ");
        scanf(" %s", names[i]);
    }

    char letters[5] = {'a','b','c','d','e'};

    for(int i=0;i<5;i++){
        ptr = strchr(names[i],letters[i]);
        printf("Name: %s length: %d\n", names[i], strlen(names[i]));
        if(ptr!=NULL){
            printf("Found ");
        }
    }

    strcpy(names[0],arr);

    return 0;
}