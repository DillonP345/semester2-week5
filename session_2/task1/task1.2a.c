//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
     char str1[9] = {"secure123"};

	 printf("enter a password\n");
     scanf("%s\n", &password);
     while(strcmp(str1,password) !=1){
        printf("enter a password\n");
        scanf("%s\n", &password);
     }
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
	
    return 0;
}