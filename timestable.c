#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int numbers = 10;//max
	int minimum = 1, minimum2;

	if(argc >=4){
		puts("The program only accepts one argument");
	}else if(argc == 3){
		numbers = strtol(argv[2], NULL, 10);
		minimum = strtol(argv[1], NULL, 10);
		minimum2 = strtol(argv[1], NULL, 10);
		
	}else if(argc == 2){
		if(strtol(argv[1],NULL, 10) <= 0){
		numbers = 10;
		printf("Numbers greater than 0 please");
		}else if(strtol(argv[1],NULL, 10) > 32){
		numbers = 10; 
		printf("Numbers less than 33 please");
		}else{
		numbers = strtol(argv[1], NULL, 10);
		}	
	}else{
		printf("10 X 10\n");
	}

	printf("\n");

	printf("%5s", "*");

	for(minimum; minimum<=numbers; minimum++){
		printf("%5d", minimum);
	}
	printf("\n");
	for(minimum; minimum<= numbers; minimum++){
		printf("%5d", minimum );
		int k = 0;
		for(minimum2 = 1; minimum2 <= numbers; minimum2++){
			k = minimum2 * minimum;
			printf ("%5d", k);
			}
		printf("\n");
		}
	
}
