#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
	int max_factor = 10;//maximum number multiplied
	int min_factor = 1;//minimum number miltiplied
	
	printf("\n");
	if(argc >= 4){
		puts("The program accepts 0, 1, or 2 arguments");
	}
	if(argc == 3){
		max_factor = strtol(argv[2], NULL, 10);
		min_factor = strtol(argv[1], NULL, 10);
	}
	if(argc == 2){
		max_factor = strtol(argv[1], NULL, 10);
	}
	if(max_factor < min_factor || max_factor > 32){
		puts("*** Please keep your Maximum between 1 and 32***");
		puts("*** Your Maximum has been auto-corrected to 10 ***");
		max_factor = 10;
	}
	if(min_factor < 0 || min_factor > max_factor){
		puts("*** Please keep your Minimum between 1 and the Maximum ***");
		puts("*** Your Minimum has been auto-corrected to 1 ***");
		min_factor = 1;
	}
	printf(">>>Times Table Minimum:%d, Maximum:%d", min_factor, max_factor);
	printf("\n");
	printf("%5s", "*");
	for(int i = min_factor; i  <= max_factor; i++){
		printf("%5d", i);
	}
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
