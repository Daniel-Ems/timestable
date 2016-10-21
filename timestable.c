#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int max_factor = 10;//maximum number multiplied
	int min_factor = 1;//minimum number miltiplied
	
	if(argc >= 4){
		puts("The program accepts zero, one, or two arguments");
	}if(argc == 3){
		max_factor = strtol(argv[2], NULL, 10);
		min_factor = strtol(argv[1], NULL, 10);
	}if(argc == 2){
		max_factor = strtol(argv[1], NULL, 10);
	}if(max_factor < 0 || max_factor > 32){
		max_factor = 10;
	}if(min_factor < 0 || min_factor > max_factor){
		min_factor = 1;
	}
	printf("Min:%d, Max:%d", min_factor, max_factor);
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
	
}
