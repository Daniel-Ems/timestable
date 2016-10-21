#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int maximum = 10;//max
	int minimum = 1;
	
	if(argc >=4){
		puts("The program only accepts one argument");
	}else if(argc == 3){
		maximum = strtol(argv[2], NULL, 10);
		minimum = strtol(argv[1], NULL, 10);
	}else if(argc == 2){
		maximum = strtol(argv[1], NULL, 10);
	}else{
		printf("10 X 10\n");	
	}

	if(maximum < 0 || maximum > 32){
		maximum = 10;
	}
	if(minimum < 0){
		minimum = 1;
	}

	printf("\n");
	printf("%5s", "*");
	for(int i = minimum; i  <= maximum; i++){
		printf("%5d", i);
	}
	printf("\n");
	for(int i = minimum; i <= maximum; i++){
		printf("%5d", i);
		for(int j = minimum; j <= maximum; j++){
			printf ("%5d", j * i);
			}
		printf("\n");
		}
	
}
