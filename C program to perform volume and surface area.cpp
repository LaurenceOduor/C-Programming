/*
Name:LAURENCE OCHIENG ODUORI
Reg No:CT101/26674/25
Description:C program to perform volume and surfacearea
*/

#include<stdio.h>

int main(){
	
float pi=3.142;	
float radius,height,volume,surface_area;

printf("Enter radius: ");
scanf("%f",&radius);

printf("Enter height: ");
scanf("%f",&height);

volume=pi*radius*radius*height;
surface_area=2*pi*radius*radius+2*pi*radius*height;

printf("\n Volume is %f",volume);
printf("\n Surface_area is %f",surface_area);

return 0;

}

	

	