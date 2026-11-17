
#include <stdio.h>

int main() {

    int accountNumber;
    float amount1, amount2, transaction;
    FILE *fp;

    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    printf("Enter first transaction amount: ");
    scanf("%f", &amount1);

   
    fp=fopen("bank.txt", "w");

    if(fp==NULL){
        printf("File could not be opened");
        return 1;
    }

    fprintf(fp, "%d %.2f\n", accountNumber, amount1);

    fclose(fp);


    fp = fopen("bank.txt", "a");

    if (fp == NULL) {
        printf("File could not be opened!");
        return 1;
    }

    printf("enter second transaction amount: ");
    scanf("%f", &amount2);


    fprintf(fp, "%d %.2f\n", accountNumber, amount2);

    fclose(fp);

   
    fp = fopen("bank.txt", "r");

    if (fp == NULL) {
        printf("file could not be opened!");
        return 1;
    }


    printf("\nbank transaction records\n");

    while (fscanf(fp, "%d %f", &accountNumber, &transaction) == 2) {

        printf("Account Number: %d\n", accountNumber);
        printf("transaction Amount: %.2f\n", transaction);
    }

    fclose(fp);

    return 0;
}
