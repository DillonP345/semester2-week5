/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Dillon Phillips
 * ID: 201984193
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long decimal = 0;
	char hex[9];
	
	printf("Enter hexadecimal: ");
	scanf("%8s", hex);


	//use for loop to iterate through the string
	for(int i = 0; i<strlen(hex); i++){
		int digit;
		switch (toupper(hex[i])){ //use switch 
			case '0': digit = 0; break;
			case '1': digit = 1; break;
			case '2': digit = 2; break;
			case '3': digit = 3; break;
			case '4': digit = 4; break;
			case '5': digit = 5; break;
			case '6': digit = 6; break;
			case '7': digit = 7; break;
			case '8': digit = 8; break;
			case '9': digit = 9; break;
			case 'A': digit = 10; break;
			case 'B': digit = 11; break;
			case 'C': digit = 12; break;
			case 'D': digit = 13; break;
			case 'E': digit = 14; break;
			case 'F': digit = 15; break;
			default:
				printf("Error: Invalid Hexadecimal\n"); // if input contains invalid hex digit
					return 1; // printf("Error: Invalid Hexadecimal\n") and terminate
		}
		decimal = decimal * 16 + digit;
	}
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}