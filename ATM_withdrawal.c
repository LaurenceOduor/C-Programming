/*
Name:LAURENCE OCHIENG ODUPRI 
Reg No:CT101/G/26674/25
Description: C program for ATM withdrawal 
*/

#include<stdio.h> 
int main(){
	
	float bank_balance,withdraw;
	
	printf("Enter your initial balance: ");
	scanf("%f",&bank_balance);
	
	while(bank_balance>0){
		printf("Enter amount to withdraw: ");
		scanf("%f",&withdraw);
		
		bank_balance -=withdraw;
		
		if (bank_balance>0)
			printf("Remaining balance: %.2f\n",bank_balance);
		
		else 
			printf("Insufficient fund ! current balance: %.2f\n",bank_balance);
	}
	 
	 printf("End of transaction. Your bank_balance is zero\n");
	 return 0;
}
