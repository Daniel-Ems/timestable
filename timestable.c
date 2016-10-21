#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//max_factor default
	int max_factor = 10;
	
	//min_factor default
	int min_factor = 1;
	
	//Seperates the beginning of the program from the cmd prompt
	printf("\n");
	
	//The following three if statements evaluate the number of command line
	//arguments the user passes, and sets variables accordingly.
	if(argc >= 4){
		puts("***The program accepts 0, 1, or 2 arguments***");
	}
	if(argc == 3){
		max_factor = strtol(argv[2], NULL, 10);
		min_factor = strtol(argv[1], NULL, 10);
	}
	if(argc == 2){
		max_factor = strtol(argv[1], NULL, 10);
	}

	//Defines valid values for max_factor as anything between 1 and 32 
    //inclusively. max_factor is defaulted to 10 if an invalid value is 
    //supplied, and the user is notified of the auto-correct, and reminded 
    //of valid values.
	if(max_factor <= 0 || max_factor > 32){
		puts("*** Please keep your Maximum between 1 and 32 inclusively ***");
		puts("*** Your Maximum has been auto-corrected to 10 ***\n");
		max_factor = 10;
	}
	
	//Defines valid values for min_factor as anything between 1 and Max_factor
	//inclusively. min_factor has a default of 1, and is auto-corrected to such
	//if the user supplies an invalid value. The user is then notified. 
	if(min_factor <= 0 || min_factor > max_factor){
		puts("*** Please keep your Minimum between 1 and the Maximum"
		     "inclusively ***");
		puts("*** Your Minimum has been auto-corrected to 1 ***\n");
		min_factor = 1;
	}
	
	//Prints the times tables current min and max. 
	printf(">>>Times Table Minimum:%d, Maximum:%d", min_factor, max_factor);
	printf("\n");
	printf("%5s", "*");
	
	//Creates header row for times table 
	for(int i = min_factor; i  <= max_factor; i++){
		printf("%5d", i);
	}
	
	//Creates output up and down.
	printf("\n");
	for(int i = min_factor; i <= max_factor; i++){
		printf("%5d", i);
		
		//Creates output left to right.
		for(int j = min_factor; j <= max_factor; j++){
			printf ("%5d", j * i);
		}
		printf("\n");
	}
	printf("\n");
	
}
