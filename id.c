/******************************************************************************
                                                                 
*		ID -- This program prints the Name, social security number and         * 
		date of birth                                                          *
*                                                                            *
* 		Author: Bhagwant Singh Sidhu                                           *
*                                                                            *
* 		Purpose: Demonstration of a simple program.                            *
*                                                                            *
* 		Usage:Runs the program and the message appears.                        *
*                                                                            *
*                                                                            *
*****************************************************************************/

#include<stdio.h>
	
int main()
{
		char name[20];            // declare variable to store names
		char social_no[20];			// declare variable to store social 										     security number
		char dob[20];              // declare variable to store date of birth 

		printf("\nPlease enter your name: "); //prompt for name
		gets(name);                            //stores the name entered
		printf("Please enter your social security number: "); // prompts for ssno
		gets(social_no);                       //stores ss no.
		printf("Please enter your date of birth: "); //prompts for DOB
		gets(dob);                                   // stores DOB

		printf("\n\nYour Name is: %s.\nYour social security number is: %s.\nYour date of birth is: %s.\n\n",name,social_no,dob); //prints to the screen



}
