/*
Name: LAURENCE OCHIENG ODUORI
Reg No: CT101/G/26674/25
Description: C function to calculate Electric bill

*/

#include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    printf("Total bill amount: KSh. %.2f\n", calculateElectricBill(units));

    return 0;
}

