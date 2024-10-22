// 2300005510 Mert Burak Altun
#define _CRT_SECURE_NO_WARNINGS 
#define NUMBER_PI  3.14159 // Defining Macro
#define FORMULA_CONE  ((h * r * r) * (NUMBER_PI) / 3)// Defining Macro
#include <stdio.h> //Preprocesor


int main(void) //Basic Structure Of C
{
	int r, h; // Definig Int Variables
	
	printf("Enter the radius and height of the cone,respectively : ");// User Message To Retrieve Values
	scanf("%d %d", &r, &h);// Getting The Values

	/* Calculation Of The Formula*/
	printf("The volume of cone : %.2f ", FORMULA_CONE);// Printing The Calculated Value

	return 0;
}