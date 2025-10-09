/*
Name:LAURENCE OCHIENG ODUORI
Reg No:CT101/G/26674/25
Description:C program to implements a number guesing game
*/

#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

int main(){
	
	int secret_number,guess,attempts=0;
	
	srand (time(0));
	secret_number=rand()% 20+1;
	
	do {
		
		printf("Enter guess (1-20):");
		scanf("%d",&guess);
		attempts++;
		
		if (guess >secret_number)
			
			printf("Too high!\n");
		else if (guess < secret_number)
			printf("Too low!");
		
		else 
			
			printf("Congratulations! You guessed it!\n");
		 
	}while (guess !=secret_number);
	
	printf("Total attempts: %d\n",attempts);
	
	return 0;
	
}