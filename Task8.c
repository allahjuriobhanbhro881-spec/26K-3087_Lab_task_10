
#include <stdio.h>

int main() {

    int id, obtainedMarks, totalMarks;
    float percentage;
    FILE *fp;

    
    fp = fopen("result.txt", "w+");

    if(fp == NULL) {
        printf("File could not be opened!");
        return 1;
    }

    printf("Enter Student ID: ");
    scanf("%d", &id);

    printf("Enter Obtained Marks: ");
    scanf("%d", &obtainedMarks);

    printf("Enter Total Marks: ");
    scanf("%d", &totalMarks);

    if(totalMarks <=0 || obtainedMarks< 0 || obtainedMarks> totalMarks){
        printf("Invalid marks!");
        fclose(fp);
        return 1;
    }

    percentage =(obtainedMarks*100.0)/totalMarks;

    fprintf(fp, "%d %d %d %.2f",
            id, obtainedMarks, totalMarks, percentage);

  
    rewind(fp);

    fscanf(fp, "%d %d %d %f",
           &id, &obtainedMarks, &totalMarks, &percentage);

    printf("\nstudent result \n");
    printf("student ID: %d\n", id);
    printf("obtained Marks: %d\n", obtainedMarks);
    printf("total Marks: %d\n", totalMarks);
    printf("percentage: %.2f%%\n", percentage);

    fclose(fp);

    return 0;
}
