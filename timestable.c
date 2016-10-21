#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int numbers = 10;
	if(argc >= 3){
		printf("The program only accepts one argument, the default variable is\
 10");	
	}else if(argc == 2){
		numbers = strtol(argv[1], NULL, 10);

	}else{
		printf("10 X 10\n");
	}

	if(strtol(argv[1],NULL, 10) <= 0){
		numbers = 10;
		printf("Numbers greater than 0 please");
	}else if(strtol(argv[1],NULL, 10) > 32){
		numbers = 10; 
		printf("Numbers less than 33 please");
	}else{
		numbers = strtol(argv[1], NULL, 10);
		}

	printf("\n");

	int i = 1, g;

	printf("%5s", "*");

	for(i = 1; i<=numbers;i++){
		printf("%5d", i);
	}
	printf("\n");
	for(g = 1 ; g<= numbers;g++){
		printf("%5d", g );
		int j = 2;
		int k =0;
		for(j = 1; j <= numbers; j++){
			k = j * g;
			printf ("%5d", k);
			}
		printf("\n");
		}
	
}
