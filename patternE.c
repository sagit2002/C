/******************************************************************************
                                                                 
*		ID -- This program prints the pattern of alphabet 'E'                  * 
* 	                                                                      
* 		Author: Bhagwant Singh Sidhu                                           *
*                                                                            *
* 		Purpose: Demonstration of a simple program.                            *
*                                                                            *
* 		Usage:Runs the program and it prints a pattern of alphabet 'E'.        *
*                                                                            *
*                                                                            *
*****************************************************************************/
#include<stdio.h>
char pattern(int a)   // function that takes no of asterisks to be           																	printed as arguments
{
    int i;
	for(i=0;i<=a;i++)      // loop to print the characters
         
			printf("%c",'*');
         printf("\n");
}
void main()
{
		char a = '*';
		int i;

		pattern(4);          // the function calls with arguments
		pattern(0);
		pattern(4);
      pattern(0);
      pattern(4);
}
