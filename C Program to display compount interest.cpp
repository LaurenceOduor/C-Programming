/*
Name:LAURENCE OCHIENG ODUORI
Reg No:CT101/G/26674/25
Description: A program to calculate compound interest
*/
#include<stdio.h>
#include<math.h>
int main(){
    
    float principle,rate,time,amount,compound_interest;
    int n;
    
    printf("Enter principle: ");
    scanf("%f",&principle);
    
    printf("Enter rate: ");
    scanf("%f",&rate);
    
    printf("Enter time: ");
    scanf("%f",&time);
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    amount=principle*pow(1+rate/100/n,n*time);
   compound_interest=amount-principle;
   
   printf("Amount is Ksh.%.2f ",amount);
   printf("Compound Intrest is Ksh.%.2f",compound_interest);
   
   return 0;
   
}
