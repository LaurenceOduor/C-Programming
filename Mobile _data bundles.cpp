 /*
 Name:LAURENCE ODUORI OCHIENG
 Reg No:CT101/G/26674/25
 Description: C proram for mobile Data bundles
 */
 
  
#include<stdio.h>
int main(){
	int choice;
	
	printf("Mobile Data Bundle Purchase\n");
	printf("1. 100 MB  - 50 KES\n");
	printf("2. 500 MB  -200 KES\n");
	printf("3. 1 GB  - 350 KES\n");
	printf("4. 2 GB  - 600 KES\n");
	
	printf("Enter your choise(1-4): ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("You selected 100 MB. Cost: 50 KES\n");
			break;
		case 2:
			printf("You selected 500 MB. Cost: 200 KES\n");
			break;
		case 3:
			printf("You selected 1 GB. Cost: 350 KES\n");
			break;
		case 4:
			printf("You selected 2 GB. Cost: 600 KES\n");
			break;
		default:
			printf("Invalid choice\n");
			
	}
	return 0;
}
			
			
			
