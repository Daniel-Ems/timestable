#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int times_table(void);
int main(int argc, char *argv[])
{
	int numbers = 0;
	if(argc >= 3){
		printf("The program only accepts one argument, the default variable is\
				10");	
		numbers = 10;
	}else if(argc == 2){
		numbers = strtol(argv[1], NULL, 10);
	}else{
		numbers = 10;

	}
 	


	printf("user value %s \n", argv[1]);
	printf("\n");
	int i = 1, k;
	//int column = 0, row = 0;
	
	//puts(">timestable");
	//printf("*  1\t2\t3\t4\t5\t6\t7\t8\t9\t10\n");

	

	while(i<=numbers ){
		
		printf("%d\t", i );
		int j = 2;
		while(j <= numbers){
			k = j * i;
			printf ("%d\t", k);
			j++;
		}
		i++;
		printf("\n");
	}		
}
