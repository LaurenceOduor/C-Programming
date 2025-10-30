/*
Name: LAURENCE ODUORI OCHIENG 
Reg No: CT101/G/26674/25
Description: Hotel Management System Using Arrays
*/

#include<stdio.h>


int main(){
	float revenue[7], total=0,
	average;
	  
	  int i;
	  
	  for(i=0; i<7; i++){
	  	printf("Enter revenue for day %d: ",i+1);
	  	scanf("%f", &revenue[i]);
	  	total += revenue[i];
	  }
	  
	  average = total / 7;
	  printf("\n Total Weekly Revenue: %.2f\n", total);
	  printf("Average Daily Revenue: %.2f\n", average);
	  
	  return 0;
	  
}