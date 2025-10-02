/*
Name:LAURENCE OCHIENG ODUORI
Reg No:CT101/G/26674/25
Description:C program to calculate water bill
*/


#include<stdio.h>
int main()
{
 
 int units;
 float totalbill;
 
 printf("Enter units consumed: ");
 scanf("%d",& units);
 
 if (units <=30){
 totalbill=units*20;
 }
 else if (units <=60){
 totalbill =(30*20)+((units - 30)*25);
 }
 else{
 totalbill =(30*20)+(30*25)+((units -60)*30);
 }
 printf("Total water bii: %.2fKES\n", totalbill); 
 
 return 0;
 
 }