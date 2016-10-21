#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int times_table(void);
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

	printf("\n");
	int i = 1, k;

	while(i<=numbers ){
		
		printf("%4d", i );
		int j = 2;
		while(j <= numbers){
			k = j * i;
			printf ("%4d", k);
			j++;
		}
		i++;
		printf("\n");
	}		
}