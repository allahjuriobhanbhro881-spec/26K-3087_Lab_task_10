
#include <stdio.h>

int main() {

    int obtainedMarks, totalMarks;
    int updatedMarks;
    FILE *fp;

    
    fp = fopen("marks.txt", "w");

    if (fp == NULL) {
        printf("File could not be created!");
        return 1;
    }

    fprintf(fp, "%d %d", 350, 500);

    fclose(fp);

    
    fp = fopen("marks.txt", "r+");

    if (fp == NULL) {
        printf("File could not be opened!");
        return 1;
    }

  
    fscanf(fp, "%d %d", &obtainedMarks, &totalMarks);

    printf("Existing Obtained Marks: %d\n", obtainedMarks);
    printf("Total Marks: %d\n", totalMarks);


    printf("\nEnter updated obtained marks: ");
    scanf("%d", &updatedMarks);

    rewind(fp);


    fprintf(fp, "%d %d", updatedMarks, totalMarks);

    fclose(fp);

    fp = fopen("marks.txt", "r");

    if (fp == NULL) {
        printf("File could not be opened!");
        return 1;
    }

  
    fscanf(fp, "%d %d", &obtainedMarks, &totalMarks);

    printf("\n-rpdated Student record\n");
    printf("Obtained Marks: %d\n", obtainedMarks);
    printf("total Marks: %d\n", totalMarks);

    fclose(fp);

    return 0;
}
