/*
Name: LAURENCE ODUORI OCHIENG 
Reg No: CT101/G/26674/25
Description: Program to prompt user to enter password
*/


#include<stdio.h>
#include<string.h> 

int main(){
	
	char password[10];
	
	do { 
		printf("Enter password:");
		scanf("%s",password);
	} while (strcmp(password,"1234")!=0);
	
	printf("Access Granted\n");
	
	return 0;
	
}
	