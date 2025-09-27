/*
Name:LAURENCE OCHIENG ODUORI
Reg No:CT101/G/26674/25
Description:C program on loan application
*/

#include<stdio.h>

int main(){
	
	int age;
	float annual_income;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	printf("Enter your annual_income: ");
	scanf("%f",&annual_income);
	
	if(age>=21 &&annual_income>=21000){
		printf("Congratulation you qualify for laon");
	}
	 
	 else{
	 	printf("Unfortunately we are unable to offer you a loan at this time");
	 }
	  return 0;
	  
}