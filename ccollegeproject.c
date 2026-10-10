#include <stdio.h>

int main()
{
    printf("-----ELECTRICITY BILL MANAGEMENT SYSTEM-----\n");
    char name[50];
    int consumerNo;
    float previousreading;
    float currentreading;

    // 1. Take all inputs
    printf("Enter name = ");
    scanf("%49[^\n]", name); // No '&' needed for arrays!

    printf("Enter consumer no. = ");
    scanf("%d", &consumerNo);

    printf("Enter previous reading = ");
    scanf("%f", &previousreading);

    printf("Enter current reading = ");
    scanf("%f", &currentreading);

    // 2. Validate readings FIRST (Stop the program if invalid)
    if (previousreading < 0 || currentreading < previousreading)
    {
        printf("XXXXX---***INVALID METER READING***---XXXXX\n");
        return 1; // Program terminates here!
    }

    // 3. Calculate units ONLY AFTER validation passes
    float units = currentreading - previousreading;
    float bill = 0;

    // 4. Calculate bill based on units
    if (units <= 100)
    {
        bill = units * 3;
    }
    else if (units <= 200)
    {
        bill = (100 * 3) + (units - 100) * 5;
    }
    else
    {
        bill = (100 * 3) + (100 * 5) + (units - 200) * 7;
    }
    bill = bill+50; //Fixed charges value  is 50 rs
    
    // 5. Print the final bill
    printf("\n------ELECTRICITY BILL-------\n");
    printf("Customer Name: %s\n", name);
    printf("Consumer Number: %d\n", consumerNo);
    printf("Units Consumed: %.2f\n", units);
    printf("Total bill: Rs. %.2f\n", bill);

    return 0;
}