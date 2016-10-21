#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//set max_factor default.
	int max_factor = 10;
	
	//set min_factor default.
	int min_factor = 1;
	
	//Creates a clean appearance at the beginning of the program.
	printf("\n");
	
	//Ensure the user does not try and pass an "illegal" number of command
	//line arguments. 
	if(argc >= 4){
		puts("*** The program accepts 0, 1, or 2 arguments ***");
	}
	if(argc == 3){
		max_factor = strtol(argv[2], NULL, 10);
		min_factor = strtol(argv[1], NULL, 10);
	}
	if(argc == 2){
		max_factor = strtol(argv[1], NULL, 10);
	}

	//the conditions are used to error check for max_factors valid values.
	if(max_factor <= 0 || max_factor > 32){
		puts("*** Please keep your Maximum between 1 and 32 inclusively ***");
		puts("*** Your Maximum has been auto-corrected to 10 ***\n");
		max_factor = 10;
	}
	
	//the condition are used to error check for min_factors valid values. 
	if(min_factor <= 0 || min_factor > max_factor){
		puts("*** Please keep your Minimum between 1 and the Maximum"
		     "inclusively ***");
		puts("*** Your Minimum has been auto-corrected to 1 ***\n");
		min_factor = 1;
	}
	
	//Allow the user to see what the printed max and min are. 
	printf(">>>Times Table Minimum:%d, Maximum:%d", min_factor, max_factor);
	printf("\n");
	printf("%5s", "*");
	
	//create a header for the table based on the default or user input.
	for(int i = min_factor; i  <= max_factor; i++){
		printf("%5d", i);
	}
	
	//Allow for the table to be built with no arguments passed, one argument 
	//passed, or two arguments passed. 
	printf("\n");
	for(int i = min_factor; i <= max_factor; i++){
		printf("%5d", i);
		for(int j = min_factor; j <= max_factor; j++){
			printf ("%5d", j * i);
		}
		printf("\n");
	}
	printf("\n");
	
}
