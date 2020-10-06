#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	printf("insert a number:");
	scanf("%i",&i);
	
	if(i < 0)
	   printf("negative.\n");
	else if(i > 0)
	   printf("positive.\n");
	else
	   printf("0.\n");	   
	
	return 0;
}
