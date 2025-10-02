/*
Name:LAURENCE ODUORI OCHIENG
Reg No:CT101/G/26674/25
Description:C program to check the eligibility of a student in the final exam
*/

#include<stdio.h>
int main(){
	
	int attendance;
	int averagemarks;
	
	printf("Enter your attendance: ");
	scanf("%d",&attendance);
	
	printf("Enter your averagemarks: ");
	scanf("%d",&averagemarks);
	
	if(attendance>=75 &&averagemarks>=40){
		printf("Eligible");
	}
	
	else{
		printf("Not eligible");
	}
	
	return 0;
	
}