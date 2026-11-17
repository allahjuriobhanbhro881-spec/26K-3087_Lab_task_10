
#include <stdio.h>

int main() {

    char name[50];
    int obtainedMarks, totalMarks;
    float percentage;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter obtained marks: ");
    scanf("%d", &obtainedMarks);

    printf("Enter total marks: ");
    scanf("%d", &totalMarks);

    percentage = (obtainedMarks*100.0)/totalMarks;

    FILE *fp;
    fp = fopen("student.txt", "w");

    if(fp == NULL){
        printf("File could not be opened!");
        return 1;
    }

    fprintf(fp, "%s\n%d\n%d\n%.2f\n",
            name, obtainedMarks, totalMarks, percentage);

    fclose(fp);

    fp = fopen("student.txt", "r");

    if(fp == NULL) {
        printf("File could not be opened!");
        return 1;
    }


    fscanf(fp, " %[^\n]", name);
    fscanf(fp, "%d", &obtainedMarks);
    fscanf(fp, "%d", &totalMarks);
    fscanf(fp, "%f", &percentage);

    fclose(fp);

    printf("\n----- Student Result -----\n");
    printf("Name: %s\n", name);
    printf("Obtained Marks: %d\n", obtainedMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
