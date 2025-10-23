/*
Name:LAURENCE OCHIENG ODUORI
Reg No:CT101/G/26674/25
Description:C function to calculate fare that takes the distance travelled
*/

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance travelled (in km): ");
    scanf("%f", &distance);

    printf("Total fare: KSh. %.2f\n", calculateFare(distance));

    return 0;
}